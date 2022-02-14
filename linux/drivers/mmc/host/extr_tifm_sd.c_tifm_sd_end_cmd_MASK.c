
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tifm_sd {int bounce_buf; scalar_t__ no_dma; struct mmc_request* req; int timer; struct tifm_dev* dev; } ;
struct tifm_dev {int lock; scalar_t__ addr; int dev; } ;
struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int flags; int sg_len; int bytes_xfered; int blocks; int blksz; int * sg; } ;
struct TYPE_2__ {struct mmc_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct mmc_host* FUNC_7 (struct tifm_dev*) ;
 int FUNC_8 (struct tifm_dev*,int *,int,int ) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_9)
{
 struct tifm_sd *VAR_10 = (struct tifm_sd*)VAR_9;
 struct tifm_dev *VAR_11 = VAR_10->dev;
 struct mmc_host *VAR_12 = FUNC_7(VAR_11);
 struct mmc_request *VAR_13;
 struct mmc_data *VAR_14 = ((void*)0);
 unsigned long VAR_15;

 FUNC_5(&VAR_11->lock, VAR_15);

 FUNC_0(&VAR_10->timer);
 VAR_13 = VAR_10->req;
 VAR_10->req = ((void*)0);

 if (!VAR_13) {
  FUNC_3(" %s : no request to complete?\n",
         FUNC_1(&VAR_11->dev));
  FUNC_6(&VAR_11->lock, VAR_15);
  return;
 }

 VAR_14 = VAR_13->cmd->data;
 if (VAR_14) {
  if (VAR_10->no_dma) {
   FUNC_9((~VAR_8)
          & FUNC_4(VAR_11->addr + VAR_5),
          VAR_11->addr + VAR_5);
  } else {
   FUNC_8(VAR_11, &VAR_10->bounce_buf, 1,
          (VAR_14->flags & VAR_0)
          ? VAR_2 : VAR_1);
   FUNC_8(VAR_11, VAR_14->sg, VAR_14->sg_len,
          (VAR_14->flags & VAR_0)
          ? VAR_2 : VAR_1);
  }

  VAR_14->bytes_xfered = VAR_14->blocks
   - FUNC_4(VAR_11->addr + VAR_6) - 1;
  VAR_14->bytes_xfered *= VAR_14->blksz;
  VAR_14->bytes_xfered += VAR_14->blksz
   - FUNC_4(VAR_11->addr + VAR_4) + 1;
 }

 FUNC_9((~VAR_7) & FUNC_4(VAR_11->addr + VAR_3),
        VAR_11->addr + VAR_3);

 FUNC_6(&VAR_11->lock, VAR_15);
 FUNC_2(VAR_12, VAR_13);
}
