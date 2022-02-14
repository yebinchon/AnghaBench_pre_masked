
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u16 ;
struct qedf_rport {int sq_mem_size; scalar_t__ sq_prod_idx; int fw_sq_prod_idx; } ;
struct fcoe_wqe {int dummy; } ;



u16 FUNC_0(struct qedf_rport *VAR_0)
{
 uint16_t VAR_1 = (VAR_0->sq_mem_size)/(sizeof(struct fcoe_wqe));
 u16 VAR_2;

 VAR_2 = VAR_0->sq_prod_idx;


 VAR_0->sq_prod_idx++;
 VAR_0->fw_sq_prod_idx++;
 if (VAR_0->sq_prod_idx == VAR_1)
  VAR_0->sq_prod_idx = 0;

 return VAR_2;
}
