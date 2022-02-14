
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_driver {int (* remove ) (struct vme_dev*) ;} ;
struct vme_dev {int dummy; } ;
struct device {struct vme_driver* platform_data; } ;


 int VAR_0 ;
 struct vme_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct vme_dev*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1)
{
 struct vme_driver *VAR_2;
 struct vme_dev *VAR_3 = FUNC_0(VAR_1);

 VAR_2 = VAR_1->platform_data;
 if (VAR_2->remove)
  return VAR_2->remove(VAR_3);

 return -VAR_0;
}
