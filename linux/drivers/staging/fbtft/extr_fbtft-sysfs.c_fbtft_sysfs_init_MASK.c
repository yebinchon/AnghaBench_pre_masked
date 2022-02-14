
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ set_gamma; } ;
struct TYPE_4__ {scalar_t__ curves; } ;
struct fbtft_par {TYPE_3__* info; TYPE_2__ fbtftops; TYPE_1__ gamma; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * VAR_1 ;

void FUNC_1(struct fbtft_par *VAR_2)
{
 FUNC_0(VAR_2->info->dev, &VAR_0);
 if (VAR_2->gamma.curves && VAR_2->fbtftops.set_gamma)
  FUNC_0(VAR_2->info->dev, &VAR_1[0]);
}
