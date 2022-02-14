
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sgentryraw {int dummy; } ;
struct sge_ieee1212 {int dummy; } ;
struct scsi_cmnd {int dummy; } ;
struct fib {struct aac_dev* dev; } ;
struct aac_raw_io2 {int sgeCnt; void* flags; void* cid; void* byteCount; void* blockHigh; void* blockLow; } ;
struct TYPE_6__ {int count; } ;
struct aac_raw_io {TYPE_3__ sg; scalar_t__ bpComplete; scalar_t__ bpTotal; void* flags; void* cid; void* count; void** block; } ;
struct aac_fibhdr {int dummy; } ;
struct aac_dev {scalar_t__ comm_interface; int max_fib_size; TYPE_2__* fsa_dev; TYPE_1__* scsi_host_ptr; int sync_mode; } ;
typedef int fib_callback ;
struct TYPE_5__ {int block_size; } ;
struct TYPE_4__ {int sg_tablesize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 long FUNC_1 (struct scsi_cmnd*,TYPE_3__*) ;
 long FUNC_2 (struct scsi_cmnd*,struct aac_raw_io2*,int ) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int,struct fib*,int,int ,int ,int,int ,void*) ;
 void* FUNC_5 (size_t) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct fib*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct aac_raw_io2*,int ,int) ;
 size_t FUNC_10 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_11(struct fib * VAR_8, struct scsi_cmnd * VAR_9, u64 VAR_10, u32 VAR_11)
{
 struct aac_dev *VAR_12 = VAR_8->dev;
 u16 VAR_13, VAR_14;
 long VAR_15;

 FUNC_3(VAR_8);
 if ((VAR_12->comm_interface == VAR_0 ||
  VAR_12->comm_interface == VAR_1) &&
  !VAR_12->sync_mode) {
  struct aac_raw_io2 *VAR_16;
  VAR_16 = (struct aac_raw_io2 *) FUNC_7(VAR_8);
  FUNC_9(VAR_16, 0, sizeof(struct aac_raw_io2));
  VAR_16->blockLow = FUNC_6((u32)(VAR_10&0xffffffff));
  VAR_16->blockHigh = FUNC_6((u32)((VAR_10&0xffffffff00000000LL)>>32));
  VAR_16->byteCount = FUNC_6(VAR_11 *
   VAR_12->fsa_dev[FUNC_10(VAR_9)].block_size);
  VAR_16->cid = FUNC_5(FUNC_10(VAR_9));
  VAR_16->flags = FUNC_5(VAR_5);
  VAR_15 = FUNC_2(VAR_9, VAR_16,
    VAR_12->scsi_host_ptr->sg_tablesize);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_14 = VAR_3;
  VAR_13 = sizeof(struct aac_raw_io2) +
   ((FUNC_8(VAR_16->sgeCnt)-1) * sizeof(struct sge_ieee1212));
 } else {
  struct aac_raw_io *VAR_17;
  VAR_17 = (struct aac_raw_io *) FUNC_7(VAR_8);
  VAR_17->block[0] = FUNC_6((u32)(VAR_10&0xffffffff));
  VAR_17->block[1] = FUNC_6((u32)((VAR_10&0xffffffff00000000LL)>>32));
  VAR_17->count = FUNC_6(VAR_11 *
   VAR_12->fsa_dev[FUNC_10(VAR_9)].block_size);
  VAR_17->cid = FUNC_5(FUNC_10(VAR_9));
  VAR_17->flags = FUNC_5(VAR_6);
  VAR_17->bpTotal = 0;
  VAR_17->bpComplete = 0;
  VAR_15 = FUNC_1(VAR_9, &VAR_17->sg);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_14 = VAR_2;
  VAR_13 = sizeof(struct aac_raw_io) +
   ((FUNC_8(VAR_17->sg.count)-1) * sizeof(struct sgentryraw));
 }

 FUNC_0(VAR_13 > (VAR_8->dev->max_fib_size - sizeof(struct aac_fibhdr)));



 return FUNC_4(VAR_14,
     VAR_8,
     VAR_13,
     VAR_4,
     0, 1,
     (fib_callback) VAR_7,
     (void *) VAR_9);
}
