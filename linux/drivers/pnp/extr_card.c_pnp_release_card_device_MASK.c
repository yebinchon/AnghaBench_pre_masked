
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnp_dev {int dev; TYPE_1__* card_link; } ;
struct TYPE_4__ {int * remove; } ;
struct pnp_card_driver {TYPE_2__ link; } ;
struct TYPE_3__ {struct pnp_card_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct pnp_dev *VAR_2)
{
 struct pnp_card_driver *VAR_3 = VAR_2->card_link->driver;

 VAR_3->link.remove = &VAR_0;
 FUNC_0(&VAR_2->dev);
 VAR_3->link.remove = &VAR_1;
}
