
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sdhci_host {int flags; unsigned int bounce_buffer_size; int quirks; int pending_reset; TYPE_2__* mmc; int lock; struct mmc_request** mrqs_done; int clock; TYPE_1__* ops; scalar_t__ data_cmd; scalar_t__ cmd; int bounce_addr; int bounce_buffer; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {scalar_t__ host_cookie; unsigned int bytes_xfered; int sg_len; int sg; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_5__ {int (* set_clock ) (struct sdhci_host*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,unsigned int,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct mmc_data*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct mmc_request*) ;
 int FUNC_6 (char*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct sdhci_host*,int ) ;
 scalar_t__ FUNC_8 (struct sdhci_host*,struct mmc_request*) ;
 int FUNC_9 (int ,int ,int ,unsigned int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct sdhci_host*,int ) ;

__attribute__((used)) static bool FUNC_13(struct sdhci_host *VAR_8)
{
 unsigned long VAR_9;
 struct mmc_request *VAR_10;
 int VAR_11;

 FUNC_10(&VAR_8->lock, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_10 = VAR_8->mrqs_done[VAR_11];
  if (VAR_10)
   break;
 }

 if (!VAR_10) {
  FUNC_11(&VAR_8->lock, VAR_9);
  return 1;
 }






 if (VAR_8->flags & VAR_5) {
  struct mmc_data *VAR_12 = VAR_10->data;

  if (VAR_12 && VAR_12->host_cookie == VAR_0) {
   if (VAR_8->bounce_buffer) {




    if (FUNC_3(VAR_12) == VAR_2) {
     unsigned int VAR_13 = VAR_12->bytes_xfered;

     if (VAR_13 > VAR_8->bounce_buffer_size) {
      FUNC_6("%s: bounce buffer is %u bytes but DMA claims to have transferred %u bytes\n",
             FUNC_4(VAR_8->mmc),
             VAR_8->bounce_buffer_size,
             VAR_12->bytes_xfered);

      VAR_13 = VAR_8->bounce_buffer_size;
     }
     FUNC_0(
      VAR_8->mmc->parent,
      VAR_8->bounce_addr,
      VAR_8->bounce_buffer_size,
      VAR_2);
     FUNC_9(VAR_12->sg,
      VAR_12->sg_len,
      VAR_8->bounce_buffer,
      VAR_13);
    } else {

     FUNC_0(
      VAR_8->mmc->parent,
      VAR_8->bounce_addr,
      VAR_8->bounce_buffer_size,
      FUNC_3(VAR_12));
    }
   } else {

    FUNC_1(FUNC_2(VAR_8->mmc), VAR_12->sg,
          VAR_12->sg_len,
          FUNC_3(VAR_12));
   }
   VAR_12->host_cookie = VAR_1;
  }
 }





 if (FUNC_8(VAR_8, VAR_10)) {






  if (VAR_8->cmd || VAR_8->data_cmd) {
   FUNC_11(&VAR_8->lock, VAR_9);
   return 1;
  }


  if (VAR_8->quirks & VAR_4)

   VAR_8->ops->set_clock(VAR_8, VAR_8->clock);



  FUNC_7(VAR_8, VAR_6);
  FUNC_7(VAR_8, VAR_7);

  VAR_8->pending_reset = 0;
 }

 VAR_8->mrqs_done[VAR_11] = ((void*)0);

 FUNC_11(&VAR_8->lock, VAR_9);

 FUNC_5(VAR_8->mmc, VAR_10);

 return 0;
}
