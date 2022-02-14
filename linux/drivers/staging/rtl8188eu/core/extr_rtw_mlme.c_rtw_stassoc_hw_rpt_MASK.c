
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_info {int mac_id; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int *) ;
 int FUNC_1 (struct adapter*) ;

void FUNC_2(struct adapter *VAR_2, struct sta_info *VAR_3)
{
 u16 VAR_4;
 u8 VAR_5;

 if (!VAR_3)
  return;

 VAR_5 = FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_1, (u8 *)&VAR_5);
 VAR_4 = (VAR_3->mac_id<<8)|1;
 FUNC_0(VAR_2, VAR_0, (u8 *)&VAR_4);
}
