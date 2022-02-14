
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; int * type; int * bus; } ;
struct nsim_bus_dev {unsigned int port_count; TYPE_1__ dev; } ;


 int VAR_0 ;
 struct nsim_bus_dev* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned int,unsigned int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct nsim_bus_dev*) ;
 struct nsim_bus_dev* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct nsim_bus_dev *
FUNC_6(unsigned int VAR_5, unsigned int VAR_6)
{
 struct nsim_bus_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_2(&VAR_3, VAR_5, VAR_5, VAR_1);
 if (VAR_8 < 0)
  goto err_nsim_bus_dev_free;
 VAR_7->dev.id = VAR_8;
 VAR_7->dev.bus = &VAR_2;
 VAR_7->dev.type = &VAR_4;
 VAR_7->port_count = VAR_6;

 VAR_8 = FUNC_1(&VAR_7->dev);
 if (VAR_8)
  goto err_nsim_bus_dev_id_free;
 return VAR_7;

err_nsim_bus_dev_id_free:
 FUNC_3(&VAR_3, VAR_7->dev.id);
err_nsim_bus_dev_free:
 FUNC_4(VAR_7);
 return FUNC_0(VAR_8);
}
