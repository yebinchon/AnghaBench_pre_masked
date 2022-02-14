
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {unsigned int num; TYPE_2__* card; int max_blksize; int device; int vendor; } ;
struct mmc_card {int quirks; struct sdio_func** sdio_func; } ;
struct TYPE_3__ {int blksize; int device; int vendor; } ;
struct TYPE_4__ {TYPE_1__ cis; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdio_func*) ;
 int VAR_1 ;
 int FUNC_1 (struct sdio_func*) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 struct sdio_func* FUNC_3 (struct mmc_card*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_7(struct mmc_card *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct sdio_func *VAR_6;

 if (FUNC_2(VAR_4 > VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_6->num = VAR_4;

 if (!(VAR_3->quirks & VAR_1)) {
  VAR_5 = FUNC_4(VAR_6);
  if (VAR_5)
   goto fail;

  VAR_5 = FUNC_5(VAR_6);
  if (VAR_5)
   goto fail;
 } else {
  VAR_6->vendor = VAR_6->card->cis.vendor;
  VAR_6->device = VAR_6->card->cis.device;
  VAR_6->max_blksize = VAR_6->card->cis.blksize;
 }

 VAR_3->sdio_func[VAR_4 - 1] = VAR_6;

 return 0;

fail:




 FUNC_6(VAR_6);
 return VAR_5;
}
