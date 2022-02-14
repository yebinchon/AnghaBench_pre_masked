
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct se_cmd {int t_task_lba; int t_data_nents; TYPE_2__* t_data_sg; struct se_device* se_dev; scalar_t__ prot_op; } ;
struct iov_iter {int dummy; } ;
struct fd_dev {int fd_file; } ;
struct bio_vec {scalar_t__ bv_len; int bv_offset; int bv_page; } ;
typedef unsigned int ssize_t ;
typedef int sense_reason_t ;
typedef unsigned int sector_t ;
typedef int loff_t ;
struct TYPE_4__ {scalar_t__ length; int offset; } ;


 struct fd_dev* FUNC_0 (struct se_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iov_iter*,int ,struct bio_vec*,unsigned int,unsigned int) ;
 struct bio_vec* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct bio_vec*) ;
 int FUNC_4 (char*,...) ;
 unsigned int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct se_cmd*,int ) ;
 unsigned int FUNC_8 (int ,struct iov_iter*,int*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_9(struct se_cmd *VAR_5)
{
 struct se_device *VAR_6 = VAR_5->se_dev;
 struct fd_dev *VAR_7 = FUNC_0(VAR_6);
 loff_t VAR_8 = VAR_5->t_task_lba * VAR_6->dev_attrib.block_size;
 sector_t VAR_9 = FUNC_5(VAR_5);
 struct iov_iter VAR_10;
 struct bio_vec *VAR_11;
 unsigned int VAR_12 = 0, VAR_13;
 ssize_t VAR_14;

 if (!VAR_9) {
  FUNC_7(VAR_5, VAR_2);
  return 0;
 }
 if (VAR_5->prot_op) {
  FUNC_4("WRITE_SAME: Protection information with FILEIO"
         " backends not supported\n");
  return VAR_4;
 }

 if (VAR_5->t_data_nents > 1 ||
     VAR_5->t_data_sg[0].length != VAR_5->se_dev->dev_attrib.block_size) {
  FUNC_4("WRITE_SAME: Illegal SGL t_data_nents: %u length: %u"
   " block_size: %u\n",
   VAR_5->t_data_nents,
   VAR_5->t_data_sg[0].length,
   VAR_5->se_dev->dev_attrib.block_size);
  return VAR_3;
 }

 VAR_11 = FUNC_2(VAR_9, sizeof(struct bio_vec), VAR_0);
 if (!VAR_11)
  return VAR_4;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_11[VAR_13].bv_page = FUNC_6(&VAR_5->t_data_sg[0]);
  VAR_11[VAR_13].bv_len = VAR_5->t_data_sg[0].length;
  VAR_11[VAR_13].bv_offset = VAR_5->t_data_sg[0].offset;

  VAR_12 += VAR_6->dev_attrib.block_size;
 }

 FUNC_1(&VAR_10, VAR_1, VAR_11, VAR_9, VAR_12);
 VAR_14 = FUNC_8(VAR_7->fd_file, &VAR_10, &VAR_8, 0);

 FUNC_3(VAR_11);
 if (VAR_14 < 0 || VAR_14 != VAR_12) {
  FUNC_4("vfs_iter_write() returned %zd for write same\n", VAR_14);
  return VAR_4;
 }

 FUNC_7(VAR_5, VAR_2);
 return 0;
}
