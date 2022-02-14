
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int request_queue; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char const*,char*,int*) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3 (struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct scsi_device *VAR_5;
 int VAR_6;
 VAR_5 = FUNC_2(VAR_1);
 FUNC_1 (VAR_3, "%d\n", &VAR_6);
 FUNC_0(VAR_5->request_queue, VAR_6 * VAR_0);
 return VAR_4;
}
