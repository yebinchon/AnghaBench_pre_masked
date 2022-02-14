
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
typedef size_t u32 ;
struct sg_mapping_iter {void* addr; size_t consumed; scalar_t__ length; } ;
struct TYPE_2__ {size_t block_size; scalar_t__ pi_prot_type; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct se_cmd {size_t t_task_lba; size_t data_length; scalar_t__ prot_type; struct se_device* se_dev; } ;
struct scatterlist {int dummy; } ;
struct rd_dev_sg_table {size_t page_start_offset; size_t page_end_offset; struct scatterlist* sg_table; } ;
struct rd_dev {int rd_flags; int rd_dev_id; } ;
typedef scalar_t__ sense_reason_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct rd_dev* FUNC_0 (struct se_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (void*,void*,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;
 int FUNC_4 (char*,int ,...) ;
 scalar_t__ FUNC_5 (struct se_cmd*,int) ;
 struct rd_dev_sg_table* FUNC_6 (struct rd_dev*,size_t) ;
 int FUNC_7 (struct sg_mapping_iter*) ;
 int FUNC_8 (struct sg_mapping_iter*,struct scatterlist*,size_t,int ) ;
 int FUNC_9 (struct sg_mapping_iter*) ;
 void* FUNC_10 (struct scatterlist*) ;
 int FUNC_11 (struct se_cmd*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_12(struct se_cmd *VAR_9, struct scatterlist *VAR_10, u32 VAR_11,
       enum dma_data_direction VAR_12)
{
 struct se_device *VAR_13 = VAR_9->se_dev;
 struct rd_dev *VAR_14 = FUNC_0(VAR_13);
 struct rd_dev_sg_table *VAR_15;
 struct scatterlist *VAR_16;
 struct sg_mapping_iter VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u64 VAR_22;
 sense_reason_t VAR_23;

 if (VAR_14->rd_flags & VAR_3) {
  FUNC_11(VAR_9, VAR_4);
  return 0;
 }

 VAR_22 = VAR_9->t_task_lba * VAR_13->dev_attrib.block_size;
 VAR_18 = FUNC_1(VAR_22, VAR_2);
 VAR_20 = VAR_22;
 VAR_19 = VAR_9->data_length;

 VAR_15 = FUNC_6(VAR_14, VAR_20);
 if (!VAR_15)
  return VAR_8;

 VAR_16 = &VAR_15->sg_table[VAR_20 - VAR_15->page_start_offset];

 FUNC_4("RD[%u]: %s LBA: %llu, Size: %u Page: %u, Offset: %u\n",
   VAR_14->rd_dev_id,
   VAR_12 == VAR_0 ? "Read" : "Write",
   VAR_9->t_task_lba, VAR_19, VAR_20, VAR_18);

 if (VAR_9->prot_type && VAR_13->dev_attrib.pi_prot_type &&
     VAR_12 == VAR_1) {
  VAR_23 = FUNC_5(VAR_9, 0);
  if (VAR_23)
   return VAR_23;
 }

 VAR_21 = VAR_2 - VAR_18;
 FUNC_8(&VAR_17, VAR_10, VAR_11,
   VAR_12 == VAR_0 ?
    VAR_6 : VAR_5);
 while (VAR_19) {
  u32 VAR_24;
  void *VAR_25;

  FUNC_7(&VAR_17);
  if (!(u32)VAR_17.length) {
   FUNC_4("RD[%u]: invalid sgl %p len %zu\n",
     VAR_14->rd_dev_id, VAR_17.addr, VAR_17.length);
   FUNC_9(&VAR_17);
   return VAR_7;
  }
  VAR_24 = FUNC_3((u32)VAR_17.length, VAR_21);
  if (VAR_24 > VAR_19) {
   FUNC_4("RD[%u]: size underrun page %d offset %d "
     "size %d\n", VAR_14->rd_dev_id,
     VAR_20, VAR_18, VAR_19);
   VAR_24 = VAR_19;
  }
  VAR_17.consumed = VAR_24;

  VAR_25 = FUNC_10(VAR_16) + VAR_18;

  if (VAR_12 == VAR_0)
   FUNC_2(VAR_17.addr, VAR_25, VAR_24);
  else
   FUNC_2(VAR_25, VAR_17.addr, VAR_24);

  VAR_19 -= VAR_24;
  if (!VAR_19)
   continue;

  VAR_21 -= VAR_24;
  if (VAR_21) {
   VAR_18 += VAR_24;
   continue;
  }


  VAR_20++;
  VAR_18 = 0;
  VAR_21 = VAR_2;
  if (VAR_20 <= VAR_15->page_end_offset) {
   VAR_16++;
   continue;
  }

  VAR_15 = FUNC_6(VAR_14, VAR_20);
  if (!VAR_15) {
   FUNC_9(&VAR_17);
   return VAR_8;
  }


  VAR_16 = VAR_15->sg_table;
 }
 FUNC_9(&VAR_17);

 if (VAR_9->prot_type && VAR_13->dev_attrib.pi_prot_type &&
     VAR_12 == VAR_0) {
  VAR_23 = FUNC_5(VAR_9, 1);
  if (VAR_23)
   return VAR_23;
 }

 FUNC_11(VAR_9, VAR_4);
 return 0;
}
