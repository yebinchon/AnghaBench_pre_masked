
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct mmc_data {int blocks; size_t blksz; int flags; size_t bytes_xfered; int error; TYPE_1__* mrq; } ;
struct gb_sdio_host {int xfer_stop; int data_max; int xfer; } ;
typedef size_t off_t ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gb_sdio_host*,struct mmc_data*,size_t,size_t,size_t) ;
 int FUNC_1 (struct gb_sdio_host*,struct mmc_data*,size_t,size_t,size_t) ;
 size_t FUNC_2 (size_t,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gb_sdio_host *VAR_3, struct mmc_data *VAR_4)
{
 size_t VAR_5, VAR_6;
 off_t VAR_7 = 0;
 int VAR_8 = 0;
 u16 VAR_9;

 if (FUNC_3(VAR_4->mrq->cmd) && VAR_4->blocks > 1) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_5 = VAR_4->blksz * VAR_4->blocks;

 while (VAR_5) {

  FUNC_4(&VAR_3->xfer);
  if (VAR_3->xfer_stop) {
   VAR_3->xfer_stop = 0;
   FUNC_5(&VAR_3->xfer);
   VAR_8 = -VAR_0;
   goto out;
  }
  FUNC_5(&VAR_3->xfer);
  VAR_6 = FUNC_2(VAR_5, VAR_3->data_max);
  VAR_9 = VAR_6 / VAR_4->blksz;
  VAR_6 = VAR_9 * VAR_4->blksz;

  if (VAR_4->flags & VAR_2) {
   VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_9, VAR_7);
   if (VAR_8 < 0)
    goto out;
  } else {
   VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6, VAR_9, VAR_7);
   if (VAR_8 < 0)
    goto out;
  }
  VAR_4->bytes_xfered += VAR_6;
  VAR_5 -= VAR_6;
  VAR_7 += VAR_6;
 }

out:
 VAR_4->error = VAR_8;
 return VAR_8;
}
