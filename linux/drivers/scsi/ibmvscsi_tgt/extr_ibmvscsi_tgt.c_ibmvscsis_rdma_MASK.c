
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long ulong ;
struct srp_target {struct scsi_info* ldata; } ;
struct srp_direct_buf {int len; int va; } ;
struct TYPE_4__ {TYPE_1__* window; } ;
struct scsi_info {int flags; int dev; int intr_lock; TYPE_2__ dds; } ;
struct scatterlist {int dummy; } ;
struct iu_entry {struct srp_target* target; } ;
struct ibmvscsis_cmd {struct iu_entry* iue; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef long dma_addr_t ;
struct TYPE_3__ {int liobn; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;




 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (int ) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_info*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 () ;
 long FUNC_5 (long,int ,long,int ,long) ;
 int FUNC_6 () ;
 long VAR_6 ;
 long FUNC_7 (struct scatterlist*) ;
 long FUNC_8 (struct scatterlist*) ;
 struct scatterlist* FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct ibmvscsis_cmd *VAR_7, struct scatterlist *VAR_8,
     int VAR_9, struct srp_direct_buf *VAR_10, int VAR_11,
     enum dma_data_direction VAR_12, unsigned int VAR_13)
{
 struct iu_entry *VAR_14 = VAR_7->iue;
 struct srp_target *VAR_15 = VAR_14->target;
 struct scsi_info *VAR_16 = VAR_15->ldata;
 struct scatterlist *VAR_17;
 dma_addr_t VAR_18, VAR_19;
 ulong VAR_20;
 ulong VAR_21, VAR_22;
 int VAR_23;
 long VAR_24;
 long VAR_25 = 0;

 if (VAR_13 == 0)
  return 0;

 VAR_17 = VAR_8;
 VAR_21 = 0;
 VAR_22 = 0;
 VAR_23 = 0;
 VAR_24 = VAR_13;

 do {
  if (VAR_21 == 0) {
   if (VAR_23 >= VAR_11) {
    FUNC_3(&VAR_16->dev, "rdma: ran out of client memory descriptors\n");
    VAR_25 = -VAR_2;
    break;
   }
   VAR_18 = FUNC_1(VAR_10[VAR_23].va);
   VAR_21 = FUNC_0(VAR_10[VAR_23].len);
  }
  if (VAR_22 == 0) {
   if (!VAR_17) {
    FUNC_3(&VAR_16->dev, "rdma: ran out of scatter/gather list\n");
    VAR_25 = -VAR_2;
    break;
   }
   VAR_19 = FUNC_7(VAR_17);
   VAR_22 = FUNC_8(VAR_17);
  }

  VAR_20 = VAR_24;

  if (VAR_20 > VAR_21)
   VAR_20 = VAR_21;

  if (VAR_20 > VAR_22)
   VAR_20 = VAR_22;

  if (VAR_20 > VAR_6)
   VAR_20 = VAR_6;

  if (VAR_12 == VAR_1) {

   VAR_25 = FUNC_5(VAR_20,
      VAR_16->dds.window[VAR_4].liobn,
      VAR_18,
      VAR_16->dds.window[VAR_3].liobn,
      VAR_19);
  } else {





   FUNC_6();

   FUNC_4();
   VAR_25 = FUNC_5(VAR_20,
      VAR_16->dds.window[VAR_3].liobn,
      VAR_19,
      VAR_16->dds.window[VAR_4].liobn,
      VAR_18);
  }
  switch (VAR_25) {
  case 128:
   break;
  case 130:
  case 129:
  case 131:
   if (FUNC_2(VAR_16)) {
    FUNC_10(&VAR_16->intr_lock);
    VAR_16->flags |=
     (VAR_5 | VAR_0);
    FUNC_11(&VAR_16->intr_lock);
   }
   FUNC_3(&VAR_16->dev, "rdma: h_copy_rdma failed, rc %ld\n",
    VAR_25);
   break;

  default:
   FUNC_3(&VAR_16->dev, "rdma: unknown error %ld from h_copy_rdma\n",
    VAR_25);
   break;
  }

  if (!VAR_25) {
   VAR_24 -= VAR_20;
   if (VAR_24) {
    VAR_21 -= VAR_20;
    if (VAR_21 == 0)
     VAR_23++;
    else
     VAR_18 += VAR_20;

    VAR_22 -= VAR_20;
    if (VAR_22 == 0)
     VAR_17 = FUNC_9(VAR_17);
    else
     VAR_19 += VAR_20;
   } else {
    break;
   }
  }
 } while (!VAR_25);

 return VAR_25;
}
