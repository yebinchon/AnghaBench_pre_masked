
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int dev; TYPE_1__* protocol; } ;
struct TYPE_2__ {scalar_t__ (* disable ) (struct pnp_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pnp_dev*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (struct pnp_dev*) ;

int FUNC_5(struct pnp_dev *VAR_2)
{
 if (!FUNC_2(VAR_2)) {
  FUNC_3(&VAR_2->dev, "disabling not supported\n");
  return -VAR_0;
 }
 if (VAR_2->protocol->disable(VAR_2) < 0) {
  FUNC_0(&VAR_2->dev, "disable failed\n");
  return -VAR_1;
 }

 FUNC_1(&VAR_2->dev, "disabled\n");
 return 0;
}
