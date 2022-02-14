
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct typec_mux_desc {int drvdata; int fwnode; scalar_t__ set; } ;
struct TYPE_5__ {int driver_data; int * type; int * class; int fwnode; struct device* parent; } ;
struct typec_mux {TYPE_1__ dev; scalar_t__ set; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct typec_mux* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct typec_mux* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;

struct typec_mux *
FUNC_8(struct device *VAR_5, const struct typec_mux_desc *VAR_6)
{
 struct typec_mux *VAR_7;
 int VAR_8;

 if (!VAR_6 || !VAR_6->set)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->set = VAR_6->set;

 FUNC_5(&VAR_7->dev);
 VAR_7->dev.parent = VAR_5;
 VAR_7->dev.fwnode = VAR_6->fwnode;
 VAR_7->dev.class = &VAR_3;
 VAR_7->dev.type = &VAR_4;
 VAR_7->dev.driver_data = VAR_6->drvdata;
 FUNC_3(&VAR_7->dev, "%s-mux", FUNC_2(VAR_5));

 VAR_8 = FUNC_4(&VAR_7->dev);
 if (VAR_8) {
  FUNC_1(VAR_5, "failed to register mux (%d)\n", VAR_8);
  FUNC_7(&VAR_7->dev);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
