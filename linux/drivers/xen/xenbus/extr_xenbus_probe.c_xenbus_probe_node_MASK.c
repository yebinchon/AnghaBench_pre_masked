
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int release; int * bus; } ;
struct xenbus_device {int state; char* nodename; char* devicetype; TYPE_1__ dev; int down; } ;
struct xen_bus_type {int (* get_bus_id ) (char*,char*) ;int bus; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xenbus_device*) ;
 struct xenbus_device* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*) ;
 int VAR_4 ;
 int FUNC_9 (char const*) ;

int FUNC_10(struct xen_bus_type *VAR_5,
        const char *VAR_6,
        const char *VAR_7)
{
 char VAR_8[VAR_2];
 int VAR_9;
 struct xenbus_device *VAR_10;
 size_t VAR_11;
 char *VAR_12;

 enum xenbus_state VAR_13 = FUNC_9(VAR_7);

 if (VAR_13 != VAR_3) {


  return 0;
 }

 VAR_11 = FUNC_7(VAR_7) + 1 + FUNC_7(VAR_6) + 1;
 VAR_10 = FUNC_4(sizeof(*VAR_10) + VAR_11, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->state = VAR_3;



 VAR_12 = (char *)(VAR_10 + 1);
 FUNC_6(VAR_12, VAR_7);
 VAR_10->nodename = VAR_12;

 VAR_12 += FUNC_7(VAR_12) + 1;
 FUNC_6(VAR_12, VAR_6);
 VAR_10->devicetype = VAR_12;
 FUNC_2(&VAR_10->down);

 VAR_10->dev.bus = &VAR_5->bus;
 VAR_10->dev.release = VAR_4;

 VAR_9 = VAR_5->get_bus_id(VAR_8, VAR_10->nodename);
 if (VAR_9)
  goto fail;

 FUNC_0(&VAR_10->dev, "%s", VAR_8);


 VAR_9 = FUNC_1(&VAR_10->dev);
 if (VAR_9) {
  FUNC_5(&VAR_10->dev);
  VAR_10 = ((void*)0);
  goto fail;
 }

 return 0;
fail:
 FUNC_3(VAR_10);
 return VAR_9;
}
