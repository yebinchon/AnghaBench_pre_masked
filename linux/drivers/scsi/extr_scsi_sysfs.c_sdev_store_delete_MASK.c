
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct kernfs_node {int dummy; } ;
struct device_attribute {int attr; } ;
struct device {int kobj; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct device_attribute*) ;
 scalar_t__ FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*) ;
 struct kernfs_node* FUNC_5 (int *,int *) ;
 int FUNC_6 (struct kernfs_node*) ;
 struct scsi_device* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct kernfs_node *VAR_5;
 struct scsi_device *VAR_6 = FUNC_7(VAR_1);





 if (FUNC_2(VAR_6))
  return -VAR_0;

 VAR_5 = FUNC_5(&VAR_1->kobj, &VAR_2->attr);
 FUNC_0(!VAR_5);
 FUNC_1(VAR_1, VAR_2);
 FUNC_4(VAR_6);
 if (VAR_5)
  FUNC_6(VAR_5);
 FUNC_3(VAR_6);
 return VAR_4;
}
