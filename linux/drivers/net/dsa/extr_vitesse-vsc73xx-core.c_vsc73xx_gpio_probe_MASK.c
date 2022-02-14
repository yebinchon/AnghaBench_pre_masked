
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ngpio; int base; int can_sleep; int get_direction; int direction_output; int direction_input; int set; int get; int of_node; TYPE_1__* parent; int owner; int label; } ;
struct vsc73xx {TYPE_1__* dev; TYPE_3__ gc; int chipid; } ;
struct TYPE_5__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,struct vsc73xx*) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct vsc73xx *VAR_7)
{
 int VAR_8;

 VAR_7->gc.label = FUNC_2(VAR_7->dev, VAR_0, "VSC%04x",
           VAR_7->chipid);
 VAR_7->gc.ngpio = 4;
 VAR_7->gc.owner = VAR_1;
 VAR_7->gc.parent = VAR_7->dev;
 VAR_7->gc.of_node = VAR_7->dev->of_node;
 VAR_7->gc.base = -1;
 VAR_7->gc.get = VAR_4;
 VAR_7->gc.set = VAR_6;
 VAR_7->gc.direction_input = VAR_2;
 VAR_7->gc.direction_output = VAR_3;
 VAR_7->gc.get_direction = VAR_5;
 VAR_7->gc.can_sleep = 1;
 VAR_8 = FUNC_1(VAR_7->dev, &VAR_7->gc, VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_7->dev, "unable to register GPIO chip\n");
  return VAR_8;
 }
 return 0;
}
