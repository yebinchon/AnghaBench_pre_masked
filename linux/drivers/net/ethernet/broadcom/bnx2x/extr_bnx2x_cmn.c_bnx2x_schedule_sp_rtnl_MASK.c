
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int sp_rtnl_task; int sp_rtnl_state; } ;
typedef enum sp_rtnl_flag { ____Placeholder_sp_rtnl_flag } sp_rtnl_flag ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct bnx2x *VAR_1, enum sp_rtnl_flag VAR_2,
       u32 VAR_3)
{
 FUNC_4();
 FUNC_2(VAR_2, &VAR_1->sp_rtnl_state);
 FUNC_3();
 FUNC_0((VAR_0 | VAR_3), "Scheduling sp_rtnl task [Flag: %d]\n",
    VAR_2);
 FUNC_1(&VAR_1->sp_rtnl_task, 0);
}
