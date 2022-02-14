
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int zeroing_mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 struct scsi_disk* FUNC_2 (struct device*) ;
 int VAR_3 ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_4, struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 struct scsi_disk *VAR_8 = FUNC_2(VAR_4);
 int VAR_9;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_3, VAR_6);
 if (VAR_9 < 0)
  return -VAR_2;

 VAR_8->zeroing_mode = VAR_9;

 return VAR_7;
}
