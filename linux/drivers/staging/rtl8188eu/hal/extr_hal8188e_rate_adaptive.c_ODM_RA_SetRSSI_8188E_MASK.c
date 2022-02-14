
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct odm_ra_info {size_t RssiStaRA; } ;
struct odm_dm_struct {struct odm_ra_info* RAInfo; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;

void FUNC_1(struct odm_dm_struct *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct odm_ra_info *VAR_6 = ((void*)0);

 if ((!VAR_3) || (VAR_4 >= VAR_0))
  return;
 FUNC_0(VAR_3, VAR_1, VAR_2,
       (" macid =%d Rssi =%d\n", VAR_4, VAR_5));

 VAR_6 = &VAR_3->RAInfo[VAR_4];
 VAR_6->RssiStaRA = VAR_5;
}
