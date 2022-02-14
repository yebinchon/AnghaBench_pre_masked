
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * node; } ;
struct xenbus_device {TYPE_1__ otherend_watch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct xenbus_device *VAR_0)
{
 if (VAR_0->otherend_watch.node) {
  FUNC_1(&VAR_0->otherend_watch);
  FUNC_0(VAR_0->otherend_watch.node);
  VAR_0->otherend_watch.node = ((void*)0);
 }
}
