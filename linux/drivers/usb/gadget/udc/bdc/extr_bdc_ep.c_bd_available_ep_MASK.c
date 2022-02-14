
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd_list {int eqp_bdi; int hwd_bdi; int max_bdi; int num_tabs; int num_bds_table; } ;
struct bdc_ep {struct bdc* bdc; struct bd_list bd_list; } ;
struct bdc {int dev; } ;


 scalar_t__ FUNC_0 (struct bdc_ep*,int) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct bdc_ep *VAR_0)
{
 struct bd_list *VAR_1 = &VAR_0->bd_list;
 int VAR_2, VAR_3;
 struct bdc *VAR_4 = VAR_0->bdc;
 int VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_2 = VAR_3 = VAR_5 = VAR_6 = 0;

 if (VAR_1->eqp_bdi == VAR_1->hwd_bdi)
  return VAR_1->max_bdi - VAR_1->num_tabs;





 if (VAR_1->hwd_bdi < VAR_1->eqp_bdi) {

  VAR_2 = VAR_1->max_bdi - VAR_1->eqp_bdi;
  VAR_3 = VAR_1->hwd_bdi;
  VAR_5 = VAR_2 / VAR_1->num_bds_table;
  VAR_6 = VAR_3 / VAR_1->num_bds_table;
  FUNC_1(VAR_4->dev, "chain_bd1:%d chain_bd2:%d\n",
      VAR_5, VAR_6);
  VAR_7 = VAR_2 + VAR_3 - VAR_5 - VAR_6;
 } else {

  VAR_2 = VAR_1->hwd_bdi - VAR_1->eqp_bdi;

  if ((VAR_1->hwd_bdi - VAR_1->eqp_bdi)
     <= VAR_1->num_bds_table) {

   if (!(FUNC_0(VAR_0, VAR_1->hwd_bdi)
     == FUNC_0(VAR_0, VAR_1->eqp_bdi))) {
    VAR_7 = VAR_2 - 1;
   }
  } else {
   VAR_5 = VAR_2 / VAR_1->num_bds_table;
   VAR_7 = VAR_2 - VAR_5;
  }
 }




 VAR_7--;
 FUNC_1(VAR_4->dev, "available_bd:%d\n", VAR_7);

 return VAR_7;
}
