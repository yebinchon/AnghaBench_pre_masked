
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmem_assigned_device {int list; struct reserved_mem* rmem; struct device* dev; } ;
struct reserved_mem {int name; TYPE_1__* ops; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* device_init ) (struct reserved_mem*,struct device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct reserved_mem* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct rmem_assigned_device*) ;
 struct rmem_assigned_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (struct device_node*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct reserved_mem*,struct device*) ;

int FUNC_11(struct device *VAR_6,
           struct device_node *VAR_7, int VAR_8)
{
 struct rmem_assigned_device *VAR_9;
 struct device_node *VAR_10;
 struct reserved_mem *VAR_11;
 int VAR_12;

 if (!VAR_7 || !VAR_6)
  return -VAR_0;

 VAR_10 = FUNC_9(VAR_7, "memory-region", VAR_8);
 if (!VAR_10)
  return -VAR_1;

 if (!FUNC_7(VAR_10)) {
  FUNC_8(VAR_10);
  return 0;
 }

 VAR_11 = FUNC_0(VAR_10);
 FUNC_8(VAR_10);

 if (!VAR_11 || !VAR_11->ops || !VAR_11->ops->device_init)
  return -VAR_0;

 VAR_9 = FUNC_3(sizeof(struct rmem_assigned_device), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_12 = VAR_11->ops->device_init(VAR_11, VAR_6);
 if (VAR_12 == 0) {
  VAR_9->dev = VAR_6;
  VAR_9->rmem = VAR_11;

  FUNC_5(&VAR_5);
  FUNC_4(&VAR_9->list, &VAR_4);
  FUNC_6(&VAR_5);

  FUNC_1(VAR_6, "assigned reserved memory node %s\n", VAR_11->name);
 } else {
  FUNC_2(VAR_9);
 }

 return VAR_12;
}
