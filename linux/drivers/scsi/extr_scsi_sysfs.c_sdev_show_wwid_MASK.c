
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t FUNC_0 (struct scsi_device*,char*,int ) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_1(VAR_1);
 ssize_t VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_0);
 if (VAR_5 > 0) {
  VAR_3[VAR_5] = '\n';
  VAR_5++;
 }
 return VAR_5;
}
