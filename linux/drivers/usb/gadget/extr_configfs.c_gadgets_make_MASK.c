
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct config_group {int dummy; } ;
struct TYPE_7__ {int function; } ;
struct TYPE_6__ {TYPE_3__ gadget_driver; int name; int max_speed; int * resume; int * suspend; void* unbind; void* bind; } ;
struct TYPE_5__ {int bcdDevice; int bDescriptorType; int bLength; } ;
struct TYPE_8__ {TYPE_1__ desc; } ;
struct gadget_info {struct config_group group; TYPE_2__ composite; TYPE_4__ cdev; int available_func; int string_list; int lock; struct config_group os_desc_group; struct config_group strings_group; struct config_group configs_group; struct config_group functions_group; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_3 (struct config_group*,char const*,int *) ;
 int FUNC_4 (struct config_group*,struct config_group*) ;
 void* VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 () ;
 int FUNC_7 (struct gadget_info*) ;
 int FUNC_8 (char const*,int ) ;
 struct gadget_info* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int VAR_11 ;

__attribute__((used)) static struct config_group *FUNC_11(
  struct config_group *VAR_12,
  const char *VAR_13)
{
 struct gadget_info *VAR_14;

 VAR_14 = FUNC_9(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_14->group, VAR_13, &VAR_9);

 FUNC_3(&VAR_14->functions_group, "functions",
   &VAR_8);
 FUNC_4(&VAR_14->functions_group, &VAR_14->group);

 FUNC_3(&VAR_14->configs_group, "configs",
   &VAR_5);
 FUNC_4(&VAR_14->configs_group, &VAR_14->group);

 FUNC_3(&VAR_14->strings_group, "strings",
   &VAR_10);
 FUNC_4(&VAR_14->strings_group, &VAR_14->group);

 FUNC_3(&VAR_14->os_desc_group, "os_desc",
   &VAR_11);
 FUNC_4(&VAR_14->os_desc_group, &VAR_14->group);

 VAR_14->composite.bind = VAR_6;
 VAR_14->composite.unbind = VAR_6;
 VAR_14->composite.suspend = ((void*)0);
 VAR_14->composite.resume = ((void*)0);
 VAR_14->composite.max_speed = VAR_4;

 FUNC_10(&VAR_14->lock);
 FUNC_1(&VAR_14->string_list);
 FUNC_1(&VAR_14->available_func);

 FUNC_2(&VAR_14->cdev);
 VAR_14->cdev.desc.bLength = VAR_3;
 VAR_14->cdev.desc.bDescriptorType = VAR_2;
 VAR_14->cdev.desc.bcdDevice = FUNC_5(FUNC_6());

 VAR_14->composite.gadget_driver = VAR_7;

 VAR_14->composite.gadget_driver.function = FUNC_8(VAR_13, VAR_1);
 VAR_14->composite.name = VAR_14->composite.gadget_driver.function;

 if (!VAR_14->composite.gadget_driver.function)
  goto err;

 return &VAR_14->group;
err:
 FUNC_7(VAR_14);
 return FUNC_0(-VAR_0);
}
