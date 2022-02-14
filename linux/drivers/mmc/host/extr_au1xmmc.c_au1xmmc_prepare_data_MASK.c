
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scatterlist {int length; } ;
struct mmc_data {int blocks; int blksz; int flags; int sg_len; struct scatterlist* sg; } ;
struct TYPE_6__ {int len; int dir; } ;
struct TYPE_5__ {int len; scalar_t__ offset; scalar_t__ index; } ;
struct au1xmmc_host {int flags; TYPE_3__ dma; int mmc; TYPE_2__ pio; TYPE_1__* mrq; } ;
struct TYPE_4__ {scalar_t__ stop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct au1xmmc_host*) ;
 int VAR_3 ;
 int FUNC_1 (struct au1xmmc_host*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct au1xmmc_host*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_8 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_11(struct au1xmmc_host *VAR_12,
    struct mmc_data *VAR_13)
{
 int VAR_14 = VAR_13->blocks * VAR_13->blksz;

 if (VAR_13->flags & VAR_9)
  VAR_12->flags |= VAR_6;
 else
  VAR_12->flags |= VAR_8;

 if (VAR_12->mrq->stop)
  VAR_12->flags |= VAR_7;

 VAR_12->dma.dir = VAR_2;

 VAR_12->dma.len = FUNC_7(FUNC_9(VAR_12->mmc), VAR_13->sg,
       VAR_13->sg_len, VAR_12->dma.dir);

 if (VAR_12->dma.len == 0)
  return -VAR_3;

 FUNC_3(VAR_13->blksz - 1, FUNC_1(VAR_12));

 if (VAR_12->flags & (VAR_5 | VAR_4)) {
  int VAR_15;
  u32 VAR_16 = FUNC_0(VAR_12);

  FUNC_6(VAR_16);

  for (VAR_15 = 0; VAR_15 < VAR_12->dma.len; VAR_15++) {
   u32 VAR_17 = 0, VAR_18 = VAR_1;
   struct scatterlist *VAR_19 = &VAR_13->sg[VAR_15];
   int VAR_20 = VAR_19->length;

   int VAR_21 = (VAR_14 > VAR_20) ? VAR_20 : VAR_14;

   if (VAR_15 == VAR_12->dma.len - 1)
    VAR_18 = VAR_0;

   if (VAR_12->flags & VAR_8) {
    VAR_17 = FUNC_5(VAR_16,
     FUNC_10(VAR_19), VAR_21, VAR_18);
   } else {
    VAR_17 = FUNC_4(VAR_16,
     FUNC_10(VAR_19), VAR_21, VAR_18);
   }

   if (!VAR_17)
    goto dataerr;

   VAR_14 -= VAR_21;
  }
 } else {
  VAR_12->pio.index = 0;
  VAR_12->pio.offset = 0;
  VAR_12->pio.len = VAR_14;

  if (VAR_12->flags & VAR_8)
   FUNC_2(VAR_12, VAR_11);
  else
   FUNC_2(VAR_12, VAR_10);

 }

 return 0;

dataerr:
 FUNC_8(FUNC_9(VAR_12->mmc), VAR_13->sg, VAR_13->sg_len,
   VAR_12->dma.dir);
 return -VAR_3;
}
