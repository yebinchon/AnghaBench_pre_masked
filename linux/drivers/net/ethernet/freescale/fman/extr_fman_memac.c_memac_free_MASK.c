
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fman_mac {struct fman_mac* memac_drv_param; TYPE_2__* pcsphy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ mdio; } ;


 int FUNC_0 (struct fman_mac*) ;
 int FUNC_1 (struct fman_mac*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct fman_mac *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->pcsphy)
  FUNC_2(&VAR_0->pcsphy->mdio.dev);

 FUNC_1(VAR_0->memac_drv_param);
 FUNC_1(VAR_0);

 return 0;
}
