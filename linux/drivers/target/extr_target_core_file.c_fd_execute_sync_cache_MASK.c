
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct se_cmd {int* t_task_cdb; int t_task_lba; scalar_t__ data_length; struct se_device* se_dev; } ;
struct fd_dev {int fd_file; } ;
typedef int sense_reason_t ;
typedef int loff_t ;


 struct fd_dev* FUNC_0 (struct se_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct se_cmd*,int ) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static sense_reason_t
FUNC_4(struct se_cmd *VAR_3)
{
 struct se_device *VAR_4 = VAR_3->se_dev;
 struct fd_dev *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = (VAR_3->t_task_cdb[1] & 0x2);
 loff_t VAR_7, VAR_8;
 int VAR_9;





 if (VAR_6)
  FUNC_2(VAR_3, VAR_2);




 if (VAR_3->t_task_lba == 0 && VAR_3->data_length == 0) {
  VAR_7 = 0;
  VAR_8 = VAR_0;
 } else {
  VAR_7 = VAR_3->t_task_lba * VAR_4->dev_attrib.block_size;
  if (VAR_3->data_length)
   VAR_8 = VAR_7 + VAR_3->data_length - 1;
  else
   VAR_8 = VAR_0;
 }

 VAR_9 = FUNC_3(VAR_5->fd_file, VAR_7, VAR_8, 1);
 if (VAR_9 != 0)
  FUNC_1("FILEIO: vfs_fsync_range() failed: %d\n", VAR_9);

 if (VAR_6)
  return 0;

 if (VAR_9)
  FUNC_2(VAR_3, VAR_1);
 else
  FUNC_2(VAR_3, VAR_2);

 return 0;
}
