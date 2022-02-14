
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * type; int fwnode; struct device* parent; int class; } ;
struct typec_port {void* pwr_role; int id; int port_type; void* prefer_role; TYPE_1__ dev; int mux; int sw; struct typec_capability const* cap; int port_type_lock; int mode_ids; void* data_role; void* vconn_role; } ;
struct typec_capability {int type; void* prefer_role; int data; int fwnode; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct typec_port* FUNC_0 (int ) ;
 struct typec_port* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;






 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (struct typec_port*) ;
 struct typec_port* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int VAR_9 ;
 int FUNC_14 (TYPE_1__*) ;

struct typec_port *FUNC_15(struct device *VAR_10,
           const struct typec_capability *VAR_11)
{
 struct typec_port *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_10(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return FUNC_1(-VAR_0);

 VAR_14 = FUNC_8(&VAR_8, 0, 0, VAR_1);
 if (VAR_14 < 0) {
  FUNC_9(VAR_12);
  return FUNC_1(VAR_14);
 }

 switch (VAR_11->type) {
 case 129:
  VAR_12->pwr_role = VAR_6;
  VAR_12->vconn_role = VAR_6;
  break;
 case 130:
  VAR_12->pwr_role = VAR_5;
  VAR_12->vconn_role = VAR_5;
  break;
 case 131:
  if (VAR_11->prefer_role != VAR_4)
   VAR_12->pwr_role = VAR_11->prefer_role;
  else
   VAR_12->pwr_role = VAR_5;
  break;
 }

 switch (VAR_11->data) {
 case 133:
  VAR_12->data_role = VAR_3;
  break;
 case 128:
  VAR_12->data_role = VAR_2;
  break;
 case 132:
  if (VAR_11->prefer_role == VAR_6)
   VAR_12->data_role = VAR_3;
  else
   VAR_12->data_role = VAR_2;
  break;
 }

 FUNC_7(&VAR_12->mode_ids);
 FUNC_11(&VAR_12->port_type_lock);

 VAR_12->id = VAR_14;
 VAR_12->cap = VAR_11;
 VAR_12->port_type = VAR_11->type;
 VAR_12->prefer_role = VAR_11->prefer_role;

 FUNC_6(&VAR_12->dev);
 VAR_12->dev.class = VAR_7;
 VAR_12->dev.parent = VAR_10;
 VAR_12->dev.fwnode = VAR_11->fwnode;
 VAR_12->dev.type = &VAR_9;
 FUNC_4(&VAR_12->dev, "port%d", VAR_14);

 VAR_12->sw = FUNC_14(&VAR_12->dev);
 if (FUNC_2(VAR_12->sw)) {
  FUNC_12(&VAR_12->dev);
  return FUNC_0(VAR_12->sw);
 }

 VAR_12->mux = FUNC_13(&VAR_12->dev, ((void*)0));
 if (FUNC_2(VAR_12->mux)) {
  FUNC_12(&VAR_12->dev);
  return FUNC_0(VAR_12->mux);
 }

 VAR_13 = FUNC_5(&VAR_12->dev);
 if (VAR_13) {
  FUNC_3(VAR_10, "failed to register port (%d)\n", VAR_13);
  FUNC_12(&VAR_12->dev);
  return FUNC_1(VAR_13);
 }

 return VAR_12;
}
