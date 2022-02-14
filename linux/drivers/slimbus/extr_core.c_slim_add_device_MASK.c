
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int of_node; int * driver; int release; int parent; int * bus; } ;
struct TYPE_4__ {int instance; int dev_index; int prod_code; int manf_id; } ;
struct slim_device {TYPE_2__ dev; TYPE_1__ e_addr; int stream_list_lock; int stream_list; struct slim_controller* ctrl; } ;
struct slim_controller {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct device_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct slim_controller *VAR_2,
      struct slim_device *VAR_3,
      struct device_node *VAR_4)
{
 VAR_3->dev.bus = &VAR_1;
 VAR_3->dev.parent = VAR_2->dev;
 VAR_3->dev.release = VAR_0;
 VAR_3->dev.driver = ((void*)0);
 VAR_3->ctrl = VAR_2;
 FUNC_0(&VAR_3->stream_list);
 FUNC_4(&VAR_3->stream_list_lock);

 if (VAR_4)
  VAR_3->dev.of_node = FUNC_3(VAR_4);

 FUNC_1(&VAR_3->dev, "%x:%x:%x:%x",
      VAR_3->e_addr.manf_id,
      VAR_3->e_addr.prod_code,
      VAR_3->e_addr.dev_index,
      VAR_3->e_addr.instance);

 return FUNC_2(&VAR_3->dev);
}
