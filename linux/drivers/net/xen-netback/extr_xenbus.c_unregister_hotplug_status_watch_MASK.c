
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node; } ;
struct backend_info {scalar_t__ have_hotplug_status_watch; TYPE_1__ hotplug_status_watch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct backend_info *VAR_0)
{
 if (VAR_0->have_hotplug_status_watch) {
  FUNC_1(&VAR_0->hotplug_status_watch);
  FUNC_0(VAR_0->hotplug_status_watch.node);
 }
 VAR_0->have_hotplug_status_watch = 0;
}
