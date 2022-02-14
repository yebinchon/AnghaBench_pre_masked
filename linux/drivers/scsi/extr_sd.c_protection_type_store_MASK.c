
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {unsigned int protection_type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,unsigned int*) ;
 struct scsi_disk* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_3, struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 struct scsi_disk *VAR_7 = FUNC_2(VAR_3);
 unsigned int VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_5, 10, &VAR_8);

 if (VAR_9)
  return VAR_9;

 if (VAR_8 <= VAR_2)
  VAR_7->protection_type = VAR_8;

 return VAR_6;
}
