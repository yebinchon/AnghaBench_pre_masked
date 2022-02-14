
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_ccw_private {int avail; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 struct vfio_ccw_private* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_0,
     struct device *VAR_1, char *VAR_2)
{
 struct vfio_ccw_private *VAR_3 = FUNC_1(VAR_1);

 return FUNC_2(VAR_2, "%d\n", FUNC_0(&VAR_3->avail));
}
