
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hdmi_spd_infoframe {size_t length; size_t type; size_t version; size_t sdi; int product; int vendor; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (struct hdmi_spd_infoframe const*) ;
 int FUNC_2 (size_t*,int ,int) ;
 int FUNC_3 (void*,int ,size_t) ;

ssize_t FUNC_4(const struct hdmi_spd_infoframe *VAR_2,
         void *VAR_3, size_t VAR_4)
{
 u8 *VAR_5 = VAR_3;
 size_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_1 + VAR_2->length;

 if (VAR_4 < VAR_6)
  return -VAR_0;

 FUNC_3(VAR_3, 0, VAR_4);

 VAR_5[0] = VAR_2->type;
 VAR_5[1] = VAR_2->version;
 VAR_5[2] = VAR_2->length;
 VAR_5[3] = 0;


 VAR_5 += VAR_1;

 FUNC_2(VAR_5, VAR_2->vendor, sizeof(VAR_2->vendor));
 FUNC_2(VAR_5 + 8, VAR_2->product, sizeof(VAR_2->product));

 VAR_5[24] = VAR_2->sdi;

 FUNC_0(VAR_3, VAR_6);

 return VAR_6;
}
