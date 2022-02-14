
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_flash_info {int protect_block_size; int erase_block_size; int write_block_size; int flash_size; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_dev {int ec_dev; scalar_t__ cmd_offset; } ;
struct cros_ec_command {int insize; scalar_t__ data; scalar_t__ outsize; scalar_t__ command; scalar_t__ version; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct cros_ec_command*) ;
 int FUNC_1 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,char*,int ,int ,int ,int ) ;
 struct cros_ec_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
         struct device_attribute *VAR_5, char *VAR_6)
{
 struct ec_response_flash_info *VAR_7;
 struct cros_ec_command *VAR_8;
 int VAR_9;
 struct cros_ec_dev *VAR_10 = FUNC_4(VAR_4);

 VAR_8 = FUNC_2(sizeof(*VAR_8) + sizeof(*VAR_7), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 VAR_8->version = 0;
 VAR_8->command = VAR_0 + VAR_10->cmd_offset;
 VAR_8->insize = sizeof(*VAR_7);
 VAR_8->outsize = 0;
 VAR_9 = FUNC_0(VAR_10->ec_dev, VAR_8);
 if (VAR_9 < 0)
  goto exit;

 VAR_7 = (struct ec_response_flash_info *)VAR_8->data;

 VAR_9 = FUNC_3(VAR_6, VAR_3,
   "FlashSize %d\nWriteSize %d\n"
   "EraseSize %d\nProtectSize %d\n",
   VAR_7->flash_size, VAR_7->write_block_size,
   VAR_7->erase_block_size, VAR_7->protect_block_size);
exit:
 FUNC_1(VAR_8);
 return VAR_9;
}
