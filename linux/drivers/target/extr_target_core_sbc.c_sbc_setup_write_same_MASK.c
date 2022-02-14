
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int max_write_same_len; int emulate_tpws; } ;
struct se_device {TYPE_2__ dev_attrib; TYPE_1__* transport; } ;
struct se_cmd {scalar_t__ t_task_lba; scalar_t__ execute_cmd; int * t_task_cdb; struct se_device* se_dev; } ;
struct sbc_ops {scalar_t__ execute_write_same; int execute_unmap; } ;
typedef scalar_t__ sense_reason_t ;
typedef scalar_t__ sector_t ;
struct TYPE_3__ {scalar_t__ (* get_blocks ) (struct se_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct se_device*,struct se_cmd*,int *,unsigned int,int) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_3 (struct se_cmd*) ;
 scalar_t__ FUNC_4 (struct se_device*) ;

__attribute__((used)) static sense_reason_t
FUNC_5(struct se_cmd *VAR_4, unsigned char *VAR_5, struct sbc_ops *VAR_6)
{
 struct se_device *VAR_7 = VAR_4->se_dev;
 sector_t VAR_8 = VAR_7->transport->get_blocks(VAR_7) + 1;
 unsigned int VAR_9 = FUNC_3(VAR_4);
 sense_reason_t VAR_10;

 if ((VAR_5[0] & 0x04) || (VAR_5[0] & 0x02)) {
  FUNC_0("WRITE_SAME PBDATA and LBDATA"
   " bits not supported for Block Discard"
   " Emulation\n");
  return VAR_2;
 }
 if (VAR_9 > VAR_4->se_dev->dev_attrib.max_write_same_len) {
  FUNC_1("WRITE_SAME sectors: %u exceeds max_write_same_len: %u\n",
   VAR_9, VAR_4->se_dev->dev_attrib.max_write_same_len);
  return VAR_1;
 }



 if (((VAR_4->t_task_lba + VAR_9) < VAR_4->t_task_lba) ||
     ((VAR_4->t_task_lba + VAR_9) > VAR_8)) {
  FUNC_0("WRITE_SAME exceeds last lba %llu (lba %llu, sectors %u)\n",
         (unsigned long long)VAR_8, VAR_4->t_task_lba, VAR_9);
  return VAR_0;
 }


 if (VAR_5[0] & 0x10) {
  FUNC_1("WRITE SAME with ANCHOR not supported\n");
  return VAR_1;
 }




 if (VAR_5[0] & 0x08) {
  if (!VAR_6->execute_unmap)
   return VAR_2;

  if (!VAR_7->dev_attrib.emulate_tpws) {
   FUNC_0("Got WRITE_SAME w/ UNMAP=1, but backend device"
          " has emulate_tpws disabled\n");
   return VAR_2;
  }
  VAR_4->execute_cmd = VAR_3;
  return 0;
 }
 if (!VAR_6->execute_write_same)
  return VAR_2;

 VAR_10 = FUNC_2(VAR_7, VAR_4, &VAR_4->t_task_cdb[0], VAR_9, 1);
 if (VAR_10)
  return VAR_10;

 VAR_4->execute_cmd = VAR_6->execute_write_same;
 return 0;
}
