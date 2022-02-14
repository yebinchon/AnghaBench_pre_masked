
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;
struct myrs_hba {int disable_enc_msg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int*) ;
 struct myrs_hba* FUNC_1 (int ) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct scsi_device *VAR_5 = FUNC_2(VAR_1);
 struct myrs_hba *VAR_6 = FUNC_1(VAR_5->host);
 int VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_3, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 > 2)
  return -VAR_0;

 VAR_6->disable_enc_msg = VAR_7;
 return VAR_4;
}
