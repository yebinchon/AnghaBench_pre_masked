
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_spd_infoframe {int sdi; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void const*,size_t) ;
 int FUNC_2 (struct hdmi_spd_infoframe*,int const*,int const*) ;

__attribute__((used)) static int FUNC_3(struct hdmi_spd_infoframe *VAR_5,
         const void *VAR_6, size_t VAR_7)
{
 const u8 *VAR_8 = VAR_6;
 int VAR_9;

 if (VAR_7 < FUNC_0(VAR_4))
  return -VAR_0;

 if (VAR_8[0] != VAR_2 ||
     VAR_8[1] != 1 ||
     VAR_8[2] != VAR_3) {
  return -VAR_0;
 }

 if (FUNC_1(VAR_6, FUNC_0(VAR_4)) != 0)
  return -VAR_0;

 VAR_8 += VAR_1;

 VAR_9 = FUNC_2(VAR_5, VAR_8, VAR_8 + 8);
 if (VAR_9)
  return VAR_9;

 VAR_5->sdi = VAR_8[24];

 return 0;
}
