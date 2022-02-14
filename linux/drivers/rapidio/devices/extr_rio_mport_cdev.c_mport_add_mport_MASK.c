
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_mport {int dummy; } ;
struct mport_dev {int dummy; } ;
struct device {int dummy; } ;
struct class_interface {int dummy; } ;


 int VAR_0 ;
 struct mport_dev* FUNC_0 (struct rio_mport*) ;
 struct rio_mport* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
  struct class_interface *VAR_2)
{
 struct rio_mport *VAR_3 = ((void*)0);
 struct mport_dev *VAR_4 = ((void*)0);

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 return 0;
}
