
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {scalar_t__ vendor; TYPE_2__* card; int device; } ;
struct TYPE_3__ {scalar_t__ vendor; int device; } ;
struct TYPE_4__ {TYPE_1__ cis; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,struct sdio_func*) ;

int FUNC_2(struct sdio_func *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->card, VAR_0);
 if (VAR_1)
  return VAR_1;





 FUNC_0(&VAR_0->card->dev);





 if (VAR_0->vendor == 0) {
  VAR_0->vendor = VAR_0->card->cis.vendor;
  VAR_0->device = VAR_0->card->cis.device;
 }

 return 0;
}
