
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int block_size; scalar_t__ pi_prot_type; scalar_t__ pi_prot_verify; } ;
struct se_device {int prot_length; TYPE_1__ dev_attrib; } ;
struct se_cmd {int t_prot_nents; int prot_length; int data_length; int t_task_lba; int se_cmd_flags; struct scatterlist* t_prot_sg; scalar_t__ prot_type; struct se_device* se_dev; } ;
struct scatterlist {int dummy; } ;
struct file {int dummy; } ;
struct fd_dev {struct file* fd_file; struct file* fd_prot_file; } ;
typedef int sense_reason_t ;
typedef int loff_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 struct fd_dev* FUNC_0 (struct se_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct se_cmd*,struct file*,int,struct scatterlist*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct se_cmd*,int,int,int ,struct scatterlist*,int ) ;
 int FUNC_4 (struct se_cmd*,int ) ;
 int FUNC_5 (struct file*,int,int,int) ;

__attribute__((used)) static sense_reason_t
FUNC_6(struct se_cmd *VAR_5, struct scatterlist *VAR_6, u32 VAR_7,
       enum dma_data_direction VAR_8)
{
 struct se_device *VAR_9 = VAR_5->se_dev;
 struct fd_dev *VAR_10 = FUNC_0(VAR_9);
 struct file *VAR_11 = VAR_10->fd_file;
 struct file *VAR_12 = VAR_10->fd_prot_file;
 sense_reason_t VAR_13;
 int VAR_14 = 0;




 if (VAR_8 == VAR_0) {
  if (VAR_5->prot_type && VAR_9->dev_attrib.pi_prot_type) {
   VAR_14 = FUNC_1(VAR_5, VAR_12, VAR_9->prot_length,
           VAR_5->t_prot_sg, VAR_5->t_prot_nents,
           VAR_5->prot_length, 0);
   if (VAR_14 < 0)
    return VAR_4;
  }

  VAR_14 = FUNC_1(VAR_5, VAR_11, VAR_9->dev_attrib.block_size,
          VAR_6, VAR_7, VAR_5->data_length, 0);

  if (VAR_14 > 0 && VAR_5->prot_type && VAR_9->dev_attrib.pi_prot_type &&
      VAR_9->dev_attrib.pi_prot_verify) {
   u32 VAR_15 = VAR_5->data_length >>
     FUNC_2(VAR_9->dev_attrib.block_size);

   VAR_13 = FUNC_3(VAR_5, VAR_5->t_task_lba, VAR_15,
         0, VAR_5->t_prot_sg, 0);
   if (VAR_13)
    return VAR_13;
  }
 } else {
  if (VAR_5->prot_type && VAR_9->dev_attrib.pi_prot_type &&
      VAR_9->dev_attrib.pi_prot_verify) {
   u32 VAR_16 = VAR_5->data_length >>
     FUNC_2(VAR_9->dev_attrib.block_size);

   VAR_13 = FUNC_3(VAR_5, VAR_5->t_task_lba, VAR_16,
         0, VAR_5->t_prot_sg, 0);
   if (VAR_13)
    return VAR_13;
  }

  VAR_14 = FUNC_1(VAR_5, VAR_11, VAR_9->dev_attrib.block_size,
          VAR_6, VAR_7, VAR_5->data_length, 1);





  if (VAR_14 > 0 && (VAR_5->se_cmd_flags & VAR_3)) {
   loff_t VAR_17 = VAR_5->t_task_lba *
    VAR_9->dev_attrib.block_size;
   loff_t VAR_18;

   if (VAR_5->data_length)
    VAR_18 = VAR_17 + VAR_5->data_length - 1;
   else
    VAR_18 = VAR_1;

   FUNC_5(VAR_10->fd_file, VAR_17, VAR_18, 1);
  }

  if (VAR_14 > 0 && VAR_5->prot_type && VAR_9->dev_attrib.pi_prot_type) {
   VAR_14 = FUNC_1(VAR_5, VAR_12, VAR_9->prot_length,
           VAR_5->t_prot_sg, VAR_5->t_prot_nents,
           VAR_5->prot_length, 1);
   if (VAR_14 < 0)
    return VAR_4;
  }
 }

 if (VAR_14 < 0)
  return VAR_4;

 FUNC_4(VAR_5, VAR_2);
 return 0;
}
