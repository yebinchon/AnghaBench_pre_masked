
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fcoe_sqe {int wqe; } ;
struct bnx2fc_rport {size_t sq_prod_idx; int sq_curr_toggle_bit; struct fcoe_sqe* sq; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct bnx2fc_rport *VAR_3, u16 VAR_4)
{
 struct fcoe_sqe *VAR_5;

 VAR_5 = &VAR_3->sq[VAR_3->sq_prod_idx];


 VAR_5->wqe = VAR_4 << VAR_1;
 VAR_5->wqe |= VAR_3->sq_curr_toggle_bit << VAR_2;


 if (++VAR_3->sq_prod_idx == VAR_0) {
  VAR_3->sq_prod_idx = 0;
  VAR_3->sq_curr_toggle_bit = 1 - VAR_3->sq_curr_toggle_bit;
 }
}
