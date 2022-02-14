
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_cmnd {int dummy; } ;
struct scatterlist {scalar_t__ length; scalar_t__ offset; } ;
struct csio_dma_buf {scalar_t__ len; void* vaddr; } ;
struct csio_ioreq {struct csio_dma_buf gen_list; } ;
struct csio_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct csio_hw*,char*,void*,scalar_t__,void*,scalar_t__) ;
 int FUNC_1 (struct csio_hw*,char*,struct scatterlist*,struct csio_ioreq*) ;
 scalar_t__ FUNC_2 (struct csio_dma_buf*) ;
 scalar_t__ FUNC_3 (struct csio_ioreq*) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,void*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_9 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 scalar_t__ FUNC_11 (struct scatterlist*) ;

__attribute__((used)) static inline uint32_t
FUNC_12(struct csio_hw *VAR_5, struct csio_ioreq *VAR_6)
{
 struct scsi_cmnd *VAR_7 = (struct scsi_cmnd *)FUNC_3(VAR_6);
 struct scatterlist *VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = 0;
 uint32_t VAR_13 = 0;
 void *VAR_14;
 void *VAR_15;
 struct csio_dma_buf *VAR_16;

 VAR_9 = FUNC_8(VAR_7);
 VAR_8 = FUNC_9(VAR_7);
 VAR_16 = (struct csio_dma_buf *)FUNC_2(&VAR_6->gen_list);


 while (VAR_9 > 0 && VAR_8 && VAR_16) {
  if (VAR_11 >= VAR_16->len) {
   VAR_11 = 0;
   VAR_16 = (struct csio_dma_buf *)
     FUNC_2(VAR_16);
   continue;
  }

  if (VAR_12 >= VAR_8->length) {
   VAR_12 -= VAR_8->length;
   VAR_8 = FUNC_10(VAR_8);
   continue;
  }

  VAR_15 = VAR_16->vaddr + VAR_11;
  VAR_13 = VAR_8->offset + VAR_12;
  VAR_10 = FUNC_7((VAR_16->len - VAR_11),
    VAR_8->length - VAR_12);
  VAR_10 = FUNC_7((uint32_t)(VAR_4 - (VAR_13 & ~VAR_2)),
     VAR_10);

  VAR_14 = FUNC_4(FUNC_11(VAR_8) + (VAR_13 >> VAR_3));
  if (!VAR_14) {
   FUNC_1(VAR_5, "failed to kmap sg:%p of ioreq:%p\n",
    VAR_8, VAR_6);
   break;
  }

  FUNC_0(VAR_5, "copy_to_sgl:sg_addr %p sg_off %d buf %p len %d\n",
    VAR_14, VAR_13, VAR_15, VAR_10);
  FUNC_6(VAR_14 + (VAR_13 & ~VAR_2), VAR_15, VAR_10);
  FUNC_5(VAR_14);

  VAR_12 += VAR_10;
  VAR_11 += VAR_10;
  VAR_9 -= VAR_10;
 }

 if (VAR_9 > 0)
  return VAR_0;
 else
  return VAR_1;
}
