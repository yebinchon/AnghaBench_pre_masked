
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans {int dummy; } ;


 int FUNC_0 (struct iwl_trans*,int) ;
 scalar_t__ FUNC_1 (struct iwl_trans*,unsigned long*) ;
 int FUNC_2 (struct iwl_trans*,unsigned long*) ;
 int FUNC_3 (struct iwl_trans*,int,int) ;

void FUNC_4(struct iwl_trans *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_1(VAR_0, &VAR_3)) {
  FUNC_3(VAR_0, VAR_1,
           FUNC_0(VAR_0, VAR_1) |
           VAR_2);
  FUNC_2(VAR_0, &VAR_3);
 }
}
