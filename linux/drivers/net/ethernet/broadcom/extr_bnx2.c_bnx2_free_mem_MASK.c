
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * msi; } ;
struct bnx2_napi {TYPE_2__ status_blk; } ;
struct bnx2 {int ctx_pages; int ** ctx_blk; int * ctx_blk_mapping; TYPE_1__* pdev; struct bnx2_napi* bnx2_napi; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (int *,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct bnx2 *VAR_1)
{
 int VAR_2;
 struct bnx2_napi *VAR_3 = &VAR_1->bnx2_napi[0];

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->ctx_pages; VAR_2++) {
  if (VAR_1->ctx_blk[VAR_2]) {
   FUNC_2(&VAR_1->pdev->dev, VAR_0,
       VAR_1->ctx_blk[VAR_2],
       VAR_1->ctx_blk_mapping[VAR_2]);
   VAR_1->ctx_blk[VAR_2] = ((void*)0);
  }
 }

 if (VAR_3->status_blk.msi)
  VAR_3->status_blk.msi = ((void*)0);
}
