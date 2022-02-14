
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {scalar_t__ state; int nodename; scalar_t__ otherend; } ;
struct device_driver {int dummy; } ;
struct device {struct device_driver* driver; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,scalar_t__,int) ;
 struct xenbus_device* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, void *VAR_3)
{
 struct xenbus_device *VAR_4 = FUNC_2(VAR_2);
 struct device_driver *VAR_5 = VAR_3;


 if (VAR_5 && (VAR_2->driver != VAR_5))
  return 0;

 if (!VAR_2->driver) {

  FUNC_0("Device with no driver: %s\n", VAR_4->nodename);
 } else if (VAR_4->state < VAR_0) {
  enum xenbus_state VAR_6 = VAR_1;
  if (VAR_4->otherend)
   VAR_6 = FUNC_3(VAR_4->otherend);
  FUNC_1("Timeout connecting to device: %s (local state %d, remote state %d)\n",
   VAR_4->nodename, VAR_4->state, VAR_6);
 }

 return 0;
}
