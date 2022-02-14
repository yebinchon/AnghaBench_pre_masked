
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int dummy; } ;
struct hvcs_struct {char* p_location_code; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct hvcs_struct* FUNC_0 (struct vio_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,char*,char*) ;
 struct vio_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct vio_dev *VAR_3 = FUNC_4(VAR_0);
 struct hvcs_struct *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_3(VAR_2, "%s\n", &VAR_4->p_location_code[0]);
 FUNC_2(&VAR_4->lock, VAR_5);
 return VAR_6;
}
