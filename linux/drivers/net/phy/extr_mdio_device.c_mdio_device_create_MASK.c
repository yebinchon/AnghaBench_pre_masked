
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mii_bus {int id; int dev; } ;
struct TYPE_3__ {int * bus; int * parent; int release; } ;
struct mdio_device {int addr; TYPE_1__ dev; struct mii_bus* bus; int device_remove; int device_free; } ;


 int VAR_0 ;
 struct mdio_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 struct mdio_device* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

struct mdio_device *FUNC_4(struct mii_bus *VAR_7, int VAR_8)
{
 struct mdio_device *VAR_9;


 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->dev.release = VAR_5;
 VAR_9->dev.parent = &VAR_7->dev;
 VAR_9->dev.bus = &VAR_3;
 VAR_9->device_free = VAR_4;
 VAR_9->device_remove = VAR_6;
 VAR_9->bus = VAR_7;
 VAR_9->addr = VAR_8;

 FUNC_1(&VAR_9->dev, VAR_2, VAR_7->id, VAR_8);

 FUNC_2(&VAR_9->dev);

 return VAR_9;
}
