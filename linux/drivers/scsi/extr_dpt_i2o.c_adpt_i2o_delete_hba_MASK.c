
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i2o_device {scalar_t__ base_addr_virt; scalar_t__ msg_addr_virt; scalar_t__ FwDebugBuffer_P; int lct_size; int reply_fifo_size; int top_scsi_channel; int unit; TYPE_3__* pDev; struct i2o_device* next_lun; TYPE_2__* channel; struct i2o_device* next; struct i2o_device* devices; int reply_pool_pa; TYPE_5__* reply_pool; int status_block_pa; TYPE_5__* status_block; int lct_pa; TYPE_5__* lct; int hrt_pa; TYPE_5__* hrt; TYPE_1__* host; } ;
struct adpt_device {scalar_t__ base_addr_virt; scalar_t__ msg_addr_virt; scalar_t__ FwDebugBuffer_P; int lct_size; int reply_fifo_size; int top_scsi_channel; int unit; TYPE_3__* pDev; struct adpt_device* next_lun; TYPE_2__* channel; struct adpt_device* next; struct adpt_device* devices; int reply_pool_pa; TYPE_5__* reply_pool; int status_block_pa; TYPE_5__* status_block; int lct_pa; TYPE_5__* lct; int hrt_pa; TYPE_5__* hrt; TYPE_1__* host; } ;
typedef int i2o_status_block ;
typedef struct i2o_device adpt_hba ;
struct TYPE_9__ {int num_entries; int entry_len; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {struct i2o_device** device; } ;
struct TYPE_6__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,TYPE_5__*,int ) ;
 int FUNC_4 (int ,struct i2o_device*) ;
 struct i2o_device* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct i2o_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(adpt_hba* VAR_8)
{
 adpt_hba* VAR_9;
 adpt_hba* VAR_10;
 struct i2o_device* VAR_11;
 struct i2o_device* VAR_12;
 int VAR_13;
 int VAR_14;
 struct adpt_device* VAR_15;
 struct adpt_device* VAR_16;


 FUNC_7(&VAR_4);
 if(VAR_8->host){
  FUNC_4(VAR_8->host->irq, VAR_8);
 }
 VAR_10 = ((void*)0);
 for( VAR_9 = VAR_6; VAR_9; VAR_10 = VAR_9,VAR_9=VAR_9->next){
  if(VAR_9 == VAR_8) {
   if(VAR_10) {
    VAR_10->next = VAR_9->next;
   } else {
    VAR_6 = VAR_9->next;
   }
   break;
  }
 }

 VAR_7--;
 FUNC_8(&VAR_4);

 FUNC_5(VAR_8->base_addr_virt);
 FUNC_10(VAR_8->pDev);
 if(VAR_8->msg_addr_virt != VAR_8->base_addr_virt){
  FUNC_5(VAR_8->msg_addr_virt);
 }
 if(VAR_8->FwDebugBuffer_P)
     FUNC_5(VAR_8->FwDebugBuffer_P);
 if(VAR_8->hrt) {
  FUNC_3(&VAR_8->pDev->dev,
   VAR_8->hrt->num_entries * VAR_8->hrt->entry_len << 2,
   VAR_8->hrt, VAR_8->hrt_pa);
 }
 if(VAR_8->lct) {
  FUNC_3(&VAR_8->pDev->dev, VAR_8->lct_size,
   VAR_8->lct, VAR_8->lct_pa);
 }
 if(VAR_8->status_block) {
  FUNC_3(&VAR_8->pDev->dev, sizeof(i2o_status_block),
   VAR_8->status_block, VAR_8->status_block_pa);
 }
 if(VAR_8->reply_pool) {
  FUNC_3(&VAR_8->pDev->dev,
   VAR_8->reply_fifo_size * VAR_3 * 4,
   VAR_8->reply_pool, VAR_8->reply_pool_pa);
 }

 for(VAR_11 = VAR_8->devices; VAR_11 ; VAR_11 = VAR_12){
  VAR_12 = VAR_11->next;
  FUNC_6(VAR_11);
 }
 for(VAR_13 = 0 ; VAR_13 < VAR_8->top_scsi_channel ; VAR_13++){
  for(VAR_14 = 0; VAR_14 < VAR_2; VAR_14++){
   if(VAR_8->channel[VAR_13].device[VAR_14] != ((void*)0)){
    for(VAR_15 = VAR_8->channel[VAR_13].device[VAR_14]; VAR_15; VAR_15 = VAR_16){
     VAR_16 = VAR_15->next_lun;
     FUNC_6(VAR_15);
    }
   }
  }
 }
 FUNC_9(VAR_8->pDev);
 if (VAR_5)
  FUNC_2(VAR_5,
    FUNC_0(VAR_0, VAR_8->unit));
 FUNC_6(VAR_8);

 if(VAR_7 <= 0){
  FUNC_11(VAR_0, VAR_1);
  if (VAR_5) {
   FUNC_1(VAR_5);
   VAR_5 = ((void*)0);
  }
 }
}
