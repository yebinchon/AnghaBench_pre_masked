
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct nsim_bus_dev {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct nsim_bus_dev*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct nsim_bus_dev *VAR_1)
{
 FUNC_0(&VAR_1->dev);
 FUNC_1(&VAR_0, VAR_1->dev.id);
 FUNC_2(VAR_1);
}
