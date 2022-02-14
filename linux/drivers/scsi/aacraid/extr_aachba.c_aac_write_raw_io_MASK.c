
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
struct aac_dev {scalar_t__ comm_interface; int max_fib_size; int cache_protected; TYPE_2__* fsa_dev; TYPE_1__* scsi_host_ptr; int sync_mode; } ;
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
 size_t VAR_7 ;
 size_t VAR_8 ;
 long FUNC_1 (struct scsi_cmnd*,TYPE_3__*) ;
 long FUNC_2 (struct scsi_cmnd*,struct aac_raw_io2*,int ) ;
 int VAR_9 ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int,struct fib*,int,int ,int ,int,int ,void*) ;
 void* FUNC_5 (size_t) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct fib*) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct aac_raw_io2*,int ,int) ;
 size_t FUNC_10 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_11(struct fib * VAR_11, struct scsi_cmnd * VAR_12, u64 VAR_13, u32 VAR_14, int VAR_15)
{
 struct aac_dev *VAR_16 = VAR_11->dev;
 u16 VAR_17, VAR_18;
 long VAR_19;

 FUNC_3(VAR_11);
 if ((VAR_16->comm_interface == VAR_0 ||
  VAR_16->comm_interface == VAR_1) &&
  !VAR_16->sync_mode) {
  struct aac_raw_io2 *VAR_20;
  VAR_20 = (struct aac_raw_io2 *) FUNC_7(VAR_11);
  FUNC_9(VAR_20, 0, sizeof(struct aac_raw_io2));
  VAR_20->blockLow = FUNC_6((u32)(VAR_13&0xffffffff));
  VAR_20->blockHigh = FUNC_6((u32)((VAR_13&0xffffffff00000000LL)>>32));
  VAR_20->byteCount = FUNC_6(VAR_14 *
   VAR_16->fsa_dev[FUNC_10(VAR_12)].block_size);
  VAR_20->cid = FUNC_5(FUNC_10(VAR_12));
  VAR_20->flags = (VAR_15 && ((VAR_9 & 5) != 1) &&
         (((VAR_9 & 5) != 5) || !VAR_11->dev->cache_protected)) ?
   FUNC_5(VAR_6|VAR_5) :
   FUNC_5(VAR_6);
  VAR_19 = FUNC_2(VAR_12, VAR_20,
    VAR_16->scsi_host_ptr->sg_tablesize);
  if (VAR_19 < 0)
   return VAR_19;
  VAR_18 = VAR_3;
  VAR_17 = sizeof(struct aac_raw_io2) +
   ((FUNC_8(VAR_20->sgeCnt)-1) * sizeof(struct sge_ieee1212));
 } else {
  struct aac_raw_io *VAR_21;
  VAR_21 = (struct aac_raw_io *) FUNC_7(VAR_11);
  VAR_21->block[0] = FUNC_6((u32)(VAR_13&0xffffffff));
  VAR_21->block[1] = FUNC_6((u32)((VAR_13&0xffffffff00000000LL)>>32));
  VAR_21->count = FUNC_6(VAR_14 *
   VAR_16->fsa_dev[FUNC_10(VAR_12)].block_size);
  VAR_21->cid = FUNC_5(FUNC_10(VAR_12));
  VAR_21->flags = (VAR_15 && ((VAR_9 & 5) != 1) &&
         (((VAR_9 & 5) != 5) || !VAR_11->dev->cache_protected)) ?
   FUNC_5(VAR_8|VAR_7) :
   FUNC_5(VAR_8);
  VAR_21->bpTotal = 0;
  VAR_21->bpComplete = 0;
  VAR_19 = FUNC_1(VAR_12, &VAR_21->sg);
  if (VAR_19 < 0)
   return VAR_19;
  VAR_18 = VAR_2;
  VAR_17 = sizeof(struct aac_raw_io) +
   ((FUNC_8(VAR_21->sg.count)-1) * sizeof (struct sgentryraw));
 }

 FUNC_0(VAR_17 > (VAR_11->dev->max_fib_size - sizeof(struct aac_fibhdr)));



 return FUNC_4(VAR_18,
     VAR_11,
     VAR_17,
     VAR_4,
     0, 1,
     (fib_callback) VAR_10,
     (void *) VAR_12);
}
