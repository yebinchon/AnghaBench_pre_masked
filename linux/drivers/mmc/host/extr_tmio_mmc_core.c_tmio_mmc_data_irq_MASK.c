
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmio_mmc_host {int lock; scalar_t__ dma_on; TYPE_1__* pdata; struct mmc_data* data; } ;
struct mmc_data {int flags; int error; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (struct tmio_mmc_host*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tmio_mmc_host*) ;
 int FUNC_4 (struct tmio_mmc_host*,int) ;
 int FUNC_5 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_6(struct tmio_mmc_host *VAR_13, unsigned int VAR_14)
{
 struct mmc_data *VAR_15;

 FUNC_1(&VAR_13->lock);
 VAR_15 = VAR_13->data;

 if (!VAR_15)
  goto out;

 if (VAR_14 & VAR_8 || VAR_14 & VAR_11 ||
     VAR_14 & VAR_12)
  VAR_15->error = -VAR_1;
 if (VAR_13->dma_on && (VAR_15->flags & VAR_3)) {
  u32 VAR_16 = FUNC_0(VAR_13, VAR_0);
  bool VAR_17 = 0;
  if (VAR_13->pdata->flags & VAR_6) {
   if (VAR_16 & VAR_10)
    VAR_17 = 1;
  } else {
   if (!(VAR_16 & VAR_7))
    VAR_17 = 1;
  }

  if (VAR_17) {
   FUNC_4(VAR_13, VAR_9);
   FUNC_3(VAR_13);
  }
 } else if (VAR_13->dma_on && (VAR_15->flags & VAR_2)) {
  FUNC_4(VAR_13, VAR_9);
  FUNC_3(VAR_13);
 } else {
  FUNC_5(VAR_13);
  FUNC_4(VAR_13, VAR_4 | VAR_5);
 }
out:
 FUNC_2(&VAR_13->lock);
}
