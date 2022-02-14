
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int max_medium_access_timeouts; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,int *) ;
 struct scsi_disk* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2,
     struct device_attribute *VAR_3, const char *VAR_4,
     size_t VAR_5)
{
 struct scsi_disk *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_4, 10, &VAR_6->max_medium_access_timeouts);

 return VAR_7 ? VAR_7 : VAR_5;
}
