
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct fib {long flags; int vector_no; int hw_fib_pa; int hbacmd_size; struct aac_dev* dev; TYPE_4__* hw_fib_va; } ;
struct aac_queue {int numpending; } ;
struct aac_hba_tm_req {scalar_t__ iu_type; int reply_qid; int request_id; } ;
struct aac_hba_reset_req {int reply_qid; int request_id; } ;
struct aac_hba_cmd_req {int reply_qid; int request_id; } ;
struct aac_fib_xporthdr {int Handle; void* Size; int HostAddress; } ;
struct aac_dev {int max_msix; scalar_t__ comm_interface; int iq_lock; int * rrq_outstanding; scalar_t__ sa_firmware; scalar_t__ msi_enabled; TYPE_1__* queues; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {int IQ_L; int IQ_H; int IQN_L; int IQN_H; } ;
struct TYPE_7__ {scalar_t__ TimeStamp; } ;
struct TYPE_8__ {scalar_t__ Command; int Handle; int Size; TYPE_2__ u; void* SenderFibAddress; int StructType; } ;
struct TYPE_9__ {TYPE_3__ header; } ;
struct TYPE_6__ {struct aac_queue* queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct aac_dev*,int ,int) ;
 int FUNC_9 (struct aac_dev*,int ,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct fib *VAR_9)
{
 struct aac_dev *VAR_10 = VAR_9->dev;
 struct aac_queue *VAR_11 = &VAR_10->queues->queue[VAR_2];
 u32 VAR_12;
 dma_addr_t VAR_13;
 struct aac_fib_xporthdr *VAR_14;
 int VAR_15;

 unsigned long VAR_16;


 u16 VAR_17;

 FUNC_2(&VAR_11->numpending);

 VAR_15 = (VAR_9->flags & VAR_4) ? 1 : 0;


 if (VAR_10->msi_enabled && VAR_10->max_msix > 1 &&
  (VAR_15 || VAR_9->hw_fib_va->header.Command != VAR_3)) {

  if ((VAR_10->comm_interface == VAR_1)
   && VAR_10->sa_firmware)
   VAR_17 = FUNC_1(VAR_10);
  else
   VAR_17 = VAR_9->vector_no;

  if (VAR_15) {
   if (VAR_9->flags & VAR_5) {
    struct aac_hba_tm_req *VAR_18;

    VAR_18 = (struct aac_hba_tm_req *)
      VAR_9->hw_fib_va;
    if (VAR_18->iu_type ==
     VAR_7) {
     ((struct aac_hba_tm_req *)
      VAR_9->hw_fib_va)->reply_qid
       = VAR_17;
     ((struct aac_hba_tm_req *)
      VAR_9->hw_fib_va)->request_id
       += (VAR_17 << 16);
    } else {
     ((struct aac_hba_reset_req *)
      VAR_9->hw_fib_va)->reply_qid
       = VAR_17;
     ((struct aac_hba_reset_req *)
      VAR_9->hw_fib_va)->request_id
       += (VAR_17 << 16);
    }
   } else {
    ((struct aac_hba_cmd_req *)
     VAR_9->hw_fib_va)->reply_qid
      = VAR_17;
    ((struct aac_hba_cmd_req *)
     VAR_9->hw_fib_va)->request_id
      += (VAR_17 << 16);
   }
  } else {
   VAR_9->hw_fib_va->header.Handle += (VAR_17 << 16);
  }
 } else {
  VAR_17 = 0;
 }

 FUNC_2(&VAR_10->rrq_outstanding[VAR_17]);

 if (VAR_15) {
  VAR_13 = VAR_9->hw_fib_pa;
  VAR_12 = (VAR_9->hbacmd_size + 127) / 128 - 1;
  if (VAR_12 > 31)
   VAR_12 = 31;
  VAR_13 |= VAR_12;



  FUNC_6(&VAR_9->dev->iq_lock, VAR_16);
  FUNC_8(VAR_10, VAR_8.IQN_H,
   FUNC_10(VAR_13) & 0xffffffff);
  FUNC_8(VAR_10, VAR_8.IQN_L, VAR_13 & 0xffffffff);
  FUNC_7(&VAR_9->dev->iq_lock, VAR_16);

 } else {
  if (VAR_10->comm_interface == VAR_0 ||
   VAR_10->comm_interface == VAR_1) {

   VAR_12 = (FUNC_5(VAR_9->hw_fib_va->header.Size)
    + 127) / 128 - 1;

   VAR_13 = VAR_9->hw_fib_pa;
   VAR_9->hw_fib_va->header.StructType = VAR_6;
   VAR_9->hw_fib_va->header.SenderFibAddress =
    FUNC_3((u32)VAR_13);
   VAR_9->hw_fib_va->header.u.TimeStamp = 0;
   FUNC_0(FUNC_10(VAR_13) != 0L);
  } else {

   VAR_12 = (sizeof(struct aac_fib_xporthdr) +
    FUNC_5(VAR_9->hw_fib_va->header.Size)
    + 127) / 128 - 1;

   VAR_14 = (struct aac_fib_xporthdr *)
    ((unsigned char *)VAR_9->hw_fib_va -
    sizeof(struct aac_fib_xporthdr));
   VAR_14->Handle = VAR_9->hw_fib_va->header.Handle;
   VAR_14->HostAddress =
    FUNC_4((u64)VAR_9->hw_fib_pa);
   VAR_14->Size = FUNC_3(
    FUNC_5(VAR_9->hw_fib_va->header.Size));
   VAR_13 = VAR_9->hw_fib_pa -
    (u64)sizeof(struct aac_fib_xporthdr);
  }
  if (VAR_12 > 31)
   VAR_12 = 31;
  VAR_13 |= VAR_12;




  FUNC_6(&VAR_9->dev->iq_lock, VAR_16);
  FUNC_8(VAR_10, VAR_8.IQ_H,
   FUNC_10(VAR_13) & 0xffffffff);
  FUNC_8(VAR_10, VAR_8.IQ_L, VAR_13 & 0xffffffff);
  FUNC_7(&VAR_9->dev->iq_lock, VAR_16);

 }
 return 0;
}
