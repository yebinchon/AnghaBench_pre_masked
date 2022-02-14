
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cnic_local {int ctx_blk_size; int cids_per_blk; int ctx_blks; TYPE_2__* ctx_arr; } ;
struct cnic_dev {TYPE_1__* pcidev; struct cnic_local* cnic_priv; } ;
struct cnic_ctx {int dummy; } ;
struct TYPE_4__ {int cid; int * ctx; int mapping; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct cnic_local*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cnic_dev*,int) ;
 int * FUNC_2 (int *,int,int *,int ) ;
 TYPE_2__* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct cnic_dev *VAR_7)
{
 struct cnic_local *VAR_8 = VAR_7->cnic_priv;

 if (FUNC_0(VAR_8) == VAR_0) {
  int VAR_9, VAR_10, VAR_11;

  VAR_8->ctx_blk_size = VAR_4;
  VAR_8->cids_per_blk = VAR_4 / 128;
  VAR_11 = VAR_2 / VAR_8->cids_per_blk *
      sizeof(struct cnic_ctx);
  VAR_8->ctx_arr = FUNC_3(VAR_11, VAR_6);
  if (VAR_8->ctx_arr == ((void*)0))
   return -VAR_5;

  VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
   u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

   if (VAR_9 == 0)
    VAR_14 = VAR_3;
   else
    VAR_14 = VAR_1;

   VAR_13 = FUNC_1(VAR_7, VAR_14);
   VAR_15 = VAR_13 >> 16;
   VAR_16 = VAR_13 & 0xffff;
   for (VAR_12 = VAR_15; VAR_12 < VAR_16; VAR_12 += VAR_8->cids_per_blk, VAR_10++)
    VAR_8->ctx_arr[VAR_10].cid = VAR_12;
  }

  VAR_8->ctx_blks = VAR_10;
  if (VAR_8->ctx_blks >= (VAR_2 / VAR_8->cids_per_blk)) {
   VAR_8->ctx_blks = 0;
   return -VAR_5;
  }

  for (VAR_9 = 0; VAR_9 < VAR_8->ctx_blks; VAR_9++) {
   VAR_8->ctx_arr[VAR_9].ctx =
    FUNC_2(&VAR_7->pcidev->dev,
         VAR_4,
         &VAR_8->ctx_arr[VAR_9].mapping,
         VAR_6);
   if (VAR_8->ctx_arr[VAR_9].ctx == ((void*)0))
    return -VAR_5;
  }
 }
 return 0;
}
