
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qedi_endpoint {scalar_t__ sq_prod_idx; int fw_sq_prod_idx; } ;
struct qedi_conn {struct qedi_endpoint* ep; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct qedi_conn *VAR_1)
{
 struct qedi_endpoint *VAR_2;
 u16 VAR_3;

 VAR_2 = VAR_1->ep;
 VAR_3 = VAR_2->sq_prod_idx;


 VAR_2->sq_prod_idx++;
 VAR_2->fw_sq_prod_idx++;
 if (VAR_2->sq_prod_idx == VAR_0)
  VAR_2->sq_prod_idx = 0;

 return VAR_3;
}
