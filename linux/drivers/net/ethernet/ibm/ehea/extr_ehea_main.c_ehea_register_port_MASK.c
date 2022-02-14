
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int release; int * bus; int * parent; int of_node; } ;
struct TYPE_7__ {struct device dev; } ;
struct ehea_port {TYPE_3__ ofdev; TYPE_2__* adapter; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {TYPE_1__* ofdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct device_node*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static struct device *FUNC_6(struct ehea_port *VAR_4,
      struct device_node *VAR_5)
{
 int VAR_6;

 VAR_4->ofdev.dev.of_node = FUNC_4(VAR_5);
 VAR_4->ofdev.dev.parent = &VAR_4->adapter->ofdev->dev;
 VAR_4->ofdev.dev.bus = &VAR_1;

 FUNC_0(&VAR_4->ofdev.dev, "port%d", VAR_3++);
 VAR_4->ofdev.dev.release = VAR_2;

 VAR_6 = FUNC_2(&VAR_4->ofdev);
 if (VAR_6) {
  FUNC_5("failed to register device. ret=%d\n", VAR_6);
  goto out;
 }

 VAR_6 = FUNC_1(&VAR_4->ofdev.dev, &VAR_0);
 if (VAR_6) {
  FUNC_5("failed to register attributes, ret=%d\n", VAR_6);
  goto out_unreg_of_dev;
 }

 return &VAR_4->ofdev.dev;

out_unreg_of_dev:
 FUNC_3(&VAR_4->ofdev);
out:
 return ((void*)0);
}
