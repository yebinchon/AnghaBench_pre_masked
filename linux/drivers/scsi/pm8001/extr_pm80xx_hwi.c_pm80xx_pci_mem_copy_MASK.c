
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pm8001_hba_info*,int,int) ;

void FUNC_2(struct pm8001_hba_info *VAR_0, u32 VAR_1,
    const void *VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 u32 *VAR_8;
 VAR_8 = (u32 *)VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 4, VAR_8++) {
  VAR_7 = (VAR_1 + VAR_5 / 4);
  if (VAR_7 < (64 * 1024)) {
   VAR_6 = FUNC_1(VAR_0, VAR_4, VAR_7);
   *VAR_8 = FUNC_0(VAR_6);
  }
 }
 return;
}
