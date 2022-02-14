
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_adapter {scalar_t__ db; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

bool FUNC_1(struct be_adapter *VAR_2)
{
 u32 VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_2->db + VAR_1);
 return !!(VAR_3 & VAR_0);
}
