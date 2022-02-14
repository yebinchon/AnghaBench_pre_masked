
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct list_head {int dummy; } ;
struct fw_scsi_abrt_cls_wr {int sub_opcode_to_chk_all_io; } ;
struct TYPE_2__ {int sm_list; } ;
struct csio_ioreq {TYPE_1__ sm; int wr_status; } ;
struct csio_hw {int lock; } ;
struct csio_fl_dma_buf {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct csio_hw*,char*,char*,struct csio_ioreq*,int ) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*,int ,struct csio_ioreq*) ;
 int FUNC_4 (struct csio_ioreq*,struct list_head*) ;
 int FUNC_5 (struct csio_ioreq*,struct list_head*) ;
 void* FUNC_6 (struct csio_ioreq*) ;
 struct csio_ioreq* FUNC_7 (struct csio_hw*,void*,int ,struct csio_fl_dma_buf*,int *,scalar_t__**) ;
 int FUNC_8 (struct csio_ioreq*,struct list_head*) ;
 scalar_t__ FUNC_9 (struct csio_ioreq*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct csio_hw *VAR_1, void *VAR_2, uint32_t VAR_3,
   struct csio_fl_dma_buf *VAR_4, void *VAR_5)
{
 struct csio_ioreq *VAR_6;
 uint8_t *VAR_7;
 uint8_t VAR_8;
 void *VAR_9;
 unsigned long VAR_10;

 VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0), &VAR_7);
 if (FUNC_9(VAR_6)) {
  if (FUNC_13(*VAR_7 == VAR_0)) {
   VAR_8 = FUNC_0(
     ((struct fw_scsi_abrt_cls_wr *)
         VAR_7)->sub_opcode_to_chk_all_io);

   FUNC_1(VAR_1, "%s cmpl recvd ioreq:%p status:%d\n",
        VAR_8 ? "Close" : "Abort",
        VAR_6, VAR_6->wr_status);

   FUNC_11(&VAR_1->lock, VAR_10);
   if (VAR_8)
    FUNC_5(VAR_6,
       (struct list_head *)VAR_5);
   else
    FUNC_4(VAR_6,
        (struct list_head *)VAR_5);
   VAR_9 = FUNC_6(VAR_6);
   if (FUNC_13(VAR_9 == ((void*)0)))
    FUNC_10(&VAR_6->sm.sm_list);

   FUNC_12(&VAR_1->lock, VAR_10);

   if (FUNC_13(VAR_9 == ((void*)0)))
    FUNC_3(VAR_1,
      FUNC_2(VAR_1), VAR_6);
  } else {
   FUNC_11(&VAR_1->lock, VAR_10);
   FUNC_8(VAR_6, (struct list_head *)VAR_5);
   FUNC_12(&VAR_1->lock, VAR_10);
  }
 }
}
