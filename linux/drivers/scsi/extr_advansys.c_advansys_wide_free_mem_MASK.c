
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv_dvc_var {int * carrier; int carrier_addr; } ;
struct TYPE_2__ {struct adv_dvc_var adv_dvc_var; } ;
struct asc_board {int * adv_sgblk_pool; int * adv_reqp; int adv_reqp_addr; int adv_reqp_size; int dev; TYPE_1__ dvc_var; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct asc_board *VAR_1)
{
 struct adv_dvc_var *VAR_2 = &VAR_1->dvc_var.adv_dvc_var;

 if (VAR_2->carrier) {
  FUNC_0(VAR_1->dev, VAR_0,
      VAR_2->carrier, VAR_2->carrier_addr);
  VAR_2->carrier = ((void*)0);
 }
 if (VAR_1->adv_reqp) {
  FUNC_0(VAR_1->dev, VAR_1->adv_reqp_size,
      VAR_1->adv_reqp, VAR_1->adv_reqp_addr);
  VAR_1->adv_reqp = ((void*)0);
 }
 if (VAR_1->adv_sgblk_pool) {
  FUNC_1(VAR_1->adv_sgblk_pool);
  VAR_1->adv_sgblk_pool = ((void*)0);
 }
}
