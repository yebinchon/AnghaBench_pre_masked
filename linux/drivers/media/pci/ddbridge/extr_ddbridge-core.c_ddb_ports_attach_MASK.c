
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_port {scalar_t__ class; } ;
struct ddb {int port_num; int dev; struct ddb_port* port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ddb_port*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct ddb*) ;

int FUNC_4(struct ddb *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0, VAR_6 = 0;
 struct ddb_port *VAR_7;

 if (VAR_2->port_num) {
  VAR_6 = FUNC_3(VAR_2);
  if (VAR_6 < 0) {
   FUNC_1(VAR_2->dev, "Registering adapters failed. Check DVB_MAX_ADAPTERS in config.\n");
   return VAR_6;
  }
 }

 VAR_4 = VAR_2->port_num;

 for (VAR_3 = 0; VAR_3 < VAR_2->port_num; VAR_3++) {
  VAR_7 = &VAR_2->port[VAR_3];
  if (VAR_7->class != VAR_0) {
   VAR_6 = FUNC_0(VAR_7);
   if (VAR_6)
    VAR_5++;
  } else {
   VAR_4--;
  }
 }

 if (VAR_5) {
  if (VAR_5 == VAR_4) {
   FUNC_1(VAR_2->dev, "All connected ports failed to initialise!\n");
   return -VAR_1;
  }

  FUNC_2(VAR_2->dev, "%d of %d connected ports failed to initialise!\n",
    VAR_5, VAR_4);
 }

 return 0;
}
