
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qedf_rport {int p_doorbell; int fw_sq_prod_idx; } ;
struct fcoe_db_data {int params; int sq_prod; scalar_t__ agg_flags; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct qedf_rport *VAR_6)
{
 struct fcoe_db_data VAR_7 = { 0 };

 VAR_7.agg_flags = 0;

 VAR_7.params |= VAR_1 << VAR_5;
 VAR_7.params |= VAR_0 << VAR_3;
 VAR_7.params |= VAR_2 <<
     VAR_4;

 VAR_7.sq_prod = VAR_6->fw_sq_prod_idx;



 FUNC_1();
 FUNC_0();
 FUNC_2(*(u32 *)&VAR_7, VAR_6->p_doorbell);





 FUNC_1();
}
