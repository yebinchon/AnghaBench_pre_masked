
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct typec_port {int dev; } ;
struct typec_cable_desc {scalar_t__ identity; int active; int type; } ;
struct TYPE_4__ {int * type; int * parent; int class; int groups; } ;
struct typec_cable {TYPE_1__ dev; scalar_t__ identity; int active; int type; } ;


 int VAR_0 ;
 struct typec_cable* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 struct typec_cable* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

struct typec_cable *FUNC_7(struct typec_port *VAR_5,
      struct typec_cable_desc *VAR_6)
{
 struct typec_cable *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->type = VAR_6->type;
 VAR_7->active = VAR_6->active;

 if (VAR_6->identity) {




  VAR_7->dev.groups = VAR_4;
  VAR_7->identity = VAR_6->identity;
 }

 VAR_7->dev.class = VAR_3;
 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->dev.type = &VAR_2;
 FUNC_3(&VAR_7->dev, "%s-cable", FUNC_2(&VAR_5->dev));

 VAR_8 = FUNC_4(&VAR_7->dev);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "failed to register cable (%d)\n", VAR_8);
  FUNC_6(&VAR_7->dev);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
