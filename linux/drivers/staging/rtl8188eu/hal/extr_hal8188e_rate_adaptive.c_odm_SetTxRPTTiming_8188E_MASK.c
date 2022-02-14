
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct odm_ra_info {scalar_t__ RptTime; } ;
struct odm_dm_struct {int dummy; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct odm_dm_struct *VAR_3,
         struct odm_ra_info *VAR_4, u8 VAR_5)
{
 u8 VAR_6 = 0;

 for (VAR_6 = 0; VAR_6 < 5; VAR_6++)
  if (VAR_0[VAR_6] == VAR_4->RptTime)
   break;

 if (VAR_5 == 0) {
  VAR_6 = 0;
 } else if (VAR_5 == 1) {
  VAR_6 += 1;
  if (VAR_6 > 5)
   VAR_6 = 5;
 } else if (VAR_5 == 2) {
  if (VAR_6 != 0)
   VAR_6 -= 1;
 }
 VAR_4->RptTime = VAR_0[VAR_6];

 FUNC_0(VAR_3, VAR_1, VAR_2,
       ("pRaInfo->RptTime = 0x%x\n", VAR_4->RptTime));
}
