
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {int bd_disk; } ;
typedef enum kobject_action { ____Placeholder_kobject_action } kobject_action ;
struct TYPE_2__ {int kobj; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int,int ,int *) ;

void FUNC_4(struct block_device *VAR_0, enum kobject_action VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&FUNC_0(VAR_0->bd_disk)->kobj, VAR_1);
 if (VAR_2)
  FUNC_3("BTRFS: Sending event '%d' to kobject: '%s' (%p): failed\n",
   VAR_1, FUNC_1(&FUNC_0(VAR_0->bd_disk)->kobj),
   &FUNC_0(VAR_0->bd_disk)->kobj);
}
