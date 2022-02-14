
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cnic_local {int ctx_blks; TYPE_2__* ctx_arr; int ctx_blk_size; } ;
struct cnic_dev {TYPE_1__* pcidev; struct cnic_local* cnic_priv; } ;
struct TYPE_4__ {int * ctx; int mapping; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct cnic_dev *VAR_0)
{
 struct cnic_local *VAR_1 = VAR_0->cnic_priv;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ctx_blks; VAR_2++) {
  if (VAR_1->ctx_arr[VAR_2].ctx) {
   FUNC_0(&VAR_0->pcidev->dev, VAR_1->ctx_blk_size,
       VAR_1->ctx_arr[VAR_2].ctx,
       VAR_1->ctx_arr[VAR_2].mapping);
   VAR_1->ctx_arr[VAR_2].ctx = ((void*)0);
  }
 }
}
