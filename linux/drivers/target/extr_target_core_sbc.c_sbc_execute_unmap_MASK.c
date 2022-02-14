
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_unmap_block_desc_count; int max_unmap_lba_count; } ;
struct se_device {TYPE_2__* transport; TYPE_1__ dev_attrib; } ;
struct se_cmd {int data_length; scalar_t__* t_task_cdb; struct se_device* se_dev; struct sbc_ops* protocol_data; } ;
struct sbc_ops {scalar_t__ (* execute_unmap ) (struct se_cmd*,scalar_t__,int) ;} ;
typedef scalar_t__ sense_reason_t ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {scalar_t__ (* get_blocks ) (struct se_device*) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 int FUNC_3 (char*,unsigned long long,int,...) ;
 int FUNC_4 (char*,int,...) ;
 scalar_t__ FUNC_5 (struct se_device*) ;
 scalar_t__ FUNC_6 (struct se_cmd*,scalar_t__,int) ;
 int FUNC_7 (struct se_cmd*,int ) ;
 unsigned char* FUNC_8 (struct se_cmd*) ;
 int FUNC_9 (struct se_cmd*) ;

__attribute__((used)) static sense_reason_t
FUNC_10(struct se_cmd *VAR_7)
{
 struct sbc_ops *VAR_8 = VAR_7->protocol_data;
 struct se_device *VAR_9 = VAR_7->se_dev;
 unsigned char *VAR_10, *VAR_11 = ((void*)0);
 sector_t VAR_12;
 int VAR_13;
 u32 VAR_14;
 sense_reason_t VAR_15 = 0;
 int VAR_16, VAR_17;


 if (VAR_7->t_task_cdb[1])
  return VAR_3;

 if (VAR_7->data_length == 0) {
  FUNC_7(VAR_7, VAR_1);
  return 0;
 }

 if (VAR_7->data_length < 8) {
  FUNC_4("UNMAP parameter list length %u too small\n",
   VAR_7->data_length);
  return VAR_6;
 }

 VAR_10 = FUNC_8(VAR_7);
 if (!VAR_10)
  return VAR_5;

 VAR_16 = FUNC_0(&VAR_10[0]);
 VAR_17 = FUNC_0(&VAR_10[2]);

 VAR_13 = VAR_7->data_length - 8;
 if (VAR_17 > VAR_13)
  FUNC_4("UNMAP parameter list length %u too small, ignoring bd_dl %u\n",
   VAR_7->data_length, VAR_17);
 else
  VAR_13 = VAR_17;

 if (VAR_13 / 16 > VAR_9->dev_attrib.max_unmap_block_desc_count) {
  VAR_15 = VAR_4;
  goto err;
 }


 VAR_11 = &VAR_10[8];
 FUNC_3("UNMAP: Sub: %s Using dl: %u bd_dl: %u size: %u"
  " ptr: %p\n", VAR_9->transport->name, VAR_16, VAR_17, VAR_13, VAR_11);

 while (VAR_13 >= 16) {
  VAR_12 = FUNC_2(&VAR_11[0]);
  VAR_14 = FUNC_1(&VAR_11[8]);
  FUNC_3("UNMAP: Using lba: %llu and range: %u\n",
     (unsigned long long)VAR_12, VAR_14);

  if (VAR_14 > VAR_9->dev_attrib.max_unmap_lba_count) {
   VAR_15 = VAR_4;
   goto err;
  }

  if (VAR_12 + VAR_14 > VAR_9->transport->get_blocks(VAR_9) + 1) {
   VAR_15 = VAR_2;
   goto err;
  }

  if (VAR_14) {
   VAR_15 = VAR_8->execute_unmap(VAR_7, VAR_12, VAR_14);
   if (VAR_15)
    goto err;
  }

  VAR_11 += 16;
  VAR_13 -= 16;
 }

err:
 FUNC_9(VAR_7);
 if (!VAR_15)
  FUNC_7(VAR_7, VAR_0);
 return VAR_15;
}
