
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* parent; } ;
struct mtd_info {int flags; int orig_flags; TYPE_1__ dev; scalar_t__ name; scalar_t__ owner; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {scalar_t__ owner; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0)
{
 if (VAR_0->dev.parent) {
  if (!VAR_0->owner && VAR_0->dev.parent->driver)
   VAR_0->owner = VAR_0->dev.parent->driver->owner;
  if (!VAR_0->name)
   VAR_0->name = FUNC_0(VAR_0->dev.parent);
 } else {
  FUNC_1("mtd device won't show a device symlink in sysfs\n");
 }

 VAR_0->orig_flags = VAR_0->flags;
}
