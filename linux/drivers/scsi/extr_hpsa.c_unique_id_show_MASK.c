
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct hpsa_scsi_dev_t* hostdata; } ;
struct hpsa_scsi_dev_t {int device_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int lock; } ;
typedef int ssize_t ;
typedef int sn ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 struct ctlr_info* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (char*,int,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct scsi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct ctlr_info *VAR_4;
 struct scsi_device *VAR_5;
 struct hpsa_scsi_dev_t *VAR_6;
 unsigned long VAR_7;
 unsigned char VAR_8[16];

 VAR_5 = FUNC_5(VAR_1);
 VAR_4 = FUNC_1(VAR_5);
 FUNC_3(&VAR_4->lock, VAR_7);
 VAR_6 = VAR_5->hostdata;
 if (!VAR_6) {
  FUNC_4(&VAR_4->lock, VAR_7);
  return -VAR_0;
 }
 FUNC_0(VAR_8, VAR_6->device_id, sizeof(VAR_8));
 FUNC_4(&VAR_4->lock, VAR_7);
 return FUNC_2(VAR_3, 16 * 2 + 2,
   "%02X%02X%02X%02X%02X%02X%02X%02X"
   "%02X%02X%02X%02X%02X%02X%02X%02X\n",
   VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3],
   VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7],
   VAR_8[8], VAR_8[9], VAR_8[10], VAR_8[11],
   VAR_8[12], VAR_8[13], VAR_8[14], VAR_8[15]);
}
