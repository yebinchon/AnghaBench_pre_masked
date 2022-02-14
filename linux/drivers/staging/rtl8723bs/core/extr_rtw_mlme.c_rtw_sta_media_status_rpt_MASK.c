
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sta_info {int mac_id; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int *) ;

void FUNC_1(struct adapter *VAR_1, struct sta_info *VAR_2, u32 VAR_3)
{
 u16 VAR_4;

 if (VAR_2 == ((void*)0))
  return;

 VAR_4 = (u16)((VAR_2->mac_id<<8)|VAR_3);
 FUNC_0(VAR_1, VAR_0, (u8 *)&VAR_4);
}
