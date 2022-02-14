
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aac_dev {TYPE_2__* fsa_dev; } ;
typedef int ssize_t ;
typedef int sn ;
struct TYPE_4__ {int identifier; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (struct scsi_device*) ;
 size_t FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (char*,int,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 struct scsi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_5(VAR_1);
 struct aac_dev *VAR_5 = (struct aac_dev *)(VAR_4->host->hostdata);
 unsigned char VAR_6[16];

 FUNC_1(VAR_6, 0, sizeof(VAR_6));

 if (FUNC_2(VAR_4) == VAR_0)
  FUNC_0(VAR_6, VAR_5->fsa_dev[FUNC_3(VAR_4)].identifier, sizeof(VAR_6));

 return FUNC_4(VAR_3, 16 * 2 + 2,
  "%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X\n",
  VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3],
  VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7],
  VAR_6[8], VAR_6[9], VAR_6[10], VAR_6[11],
  VAR_6[12], VAR_6[13], VAR_6[14], VAR_6[15]);
}
