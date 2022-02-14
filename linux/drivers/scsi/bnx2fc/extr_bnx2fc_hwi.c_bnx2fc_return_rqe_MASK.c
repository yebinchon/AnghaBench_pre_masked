
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bnx2fc_rport {int rq_prod_idx; TYPE_1__* conn_db; } ;
struct TYPE_2__ {int rq_prod; } ;


 int VAR_0 ;

void FUNC_0(struct bnx2fc_rport *VAR_1, u8 VAR_2)
{

 u32 VAR_3 = VAR_1->rq_prod_idx + VAR_2;
 if ((VAR_3 & 0x7fff) == VAR_0) {

  VAR_3 += 0x8000 - VAR_0;
 }
 VAR_1->rq_prod_idx = VAR_3;
 VAR_1->conn_db->rq_prod = VAR_1->rq_prod_idx;
}
