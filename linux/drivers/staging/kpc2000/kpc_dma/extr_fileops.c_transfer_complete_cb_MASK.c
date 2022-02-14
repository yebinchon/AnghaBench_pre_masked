
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int nents; int * sgl; } ;
struct aio_cb_data {unsigned int page_count; scalar_t__ cpl; int flags; struct aio_cb_data* user_pages; TYPE_3__ sgt; TYPE_2__* ldev; } ;
struct TYPE_5__ {int dir; TYPE_1__* pldev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct aio_cb_data) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (struct aio_cb_data*) ;
 int FUNC_5 (struct aio_cb_data) ;
 int FUNC_6 (struct aio_cb_data) ;
 int FUNC_7 (TYPE_3__*) ;

void FUNC_8(struct aio_cb_data *VAR_0, size_t VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 FUNC_0(VAR_0 == ((void*)0));
 FUNC_0(VAR_0->user_pages == ((void*)0));
 FUNC_0(VAR_0->sgt.sgl == ((void*)0));
 FUNC_0(VAR_0->ldev == ((void*)0));
 FUNC_0(VAR_0->ldev->pldev == ((void*)0));

 for (VAR_3 = 0 ; VAR_3 < VAR_0->page_count ; VAR_3++) {
  if (!FUNC_1(VAR_0->user_pages[VAR_3])) {
   FUNC_6(VAR_0->user_pages[VAR_3]);
  }
 }

 FUNC_3(&VAR_0->ldev->pldev->dev, VAR_0->sgt.sgl, VAR_0->sgt.nents, VAR_0->ldev->dir);

 for (VAR_3 = 0 ; VAR_3 < VAR_0->page_count ; VAR_3++) {
  FUNC_5(VAR_0->user_pages[VAR_3]);
 }

 FUNC_7(&VAR_0->sgt);

 FUNC_4(VAR_0->user_pages);

 VAR_0->flags = VAR_2;

 if (VAR_0->cpl) {
  FUNC_2(VAR_0->cpl);
 } else {




  FUNC_4(VAR_0);
 }
}
