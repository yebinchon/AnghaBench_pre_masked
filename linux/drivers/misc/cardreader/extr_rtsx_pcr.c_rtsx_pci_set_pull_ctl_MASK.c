
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_pcr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int ) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_pcr *VAR_1, const u32 *VAR_2)
{
 FUNC_1(VAR_1);

 while (*VAR_2 & 0xFFFF0000) {
  FUNC_0(VAR_1, VAR_0,
    (u16)(*VAR_2 >> 16), 0xFF, (u8)(*VAR_2));
  VAR_2++;
 }

 return FUNC_2(VAR_1, 100);
}
