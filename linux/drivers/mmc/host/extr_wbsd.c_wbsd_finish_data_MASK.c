
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wbsd_host {scalar_t__ dma; TYPE_2__* mrq; int mmc; } ;
struct mmc_data {int bytes_xfered; int blksz; int error; int flags; scalar_t__ stop; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int blocks; int blksz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (struct wbsd_host*,struct mmc_data*) ;
 int FUNC_9 (struct wbsd_host*,int ) ;
 int FUNC_10 (struct wbsd_host*,TYPE_2__*) ;
 int FUNC_11 (struct wbsd_host*,scalar_t__) ;
 int FUNC_12 (struct wbsd_host*,int ,int ) ;

__attribute__((used)) static void FUNC_13(struct wbsd_host *VAR_6, struct mmc_data *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 u8 VAR_10;

 FUNC_0(VAR_6->mrq == ((void*)0));




 if (VAR_7->stop)
  FUNC_11(VAR_6, VAR_7->stop);





 do {
  VAR_10 = FUNC_9(VAR_6, VAR_5);
 } while (VAR_10 & (VAR_2 | VAR_3));




 if (VAR_6->dma >= 0) {



  FUNC_12(VAR_6, VAR_4, 0);




  VAR_8 = FUNC_1();
  FUNC_3(VAR_6->dma);
  FUNC_2(VAR_6->dma);
  VAR_9 = FUNC_4(VAR_6->dma);
  FUNC_7(VAR_8);

  VAR_7->bytes_xfered = VAR_6->mrq->data->blocks *
   VAR_6->mrq->data->blksz - VAR_9;
  VAR_7->bytes_xfered -= VAR_7->bytes_xfered % VAR_7->blksz;




  if (VAR_9) {
   FUNC_6("%s: Incomplete DMA transfer. "
    "%d bytes left.\n",
    FUNC_5(VAR_6->mmc), VAR_9);

   if (!VAR_7->error)
    VAR_7->error = -VAR_0;
  } else {




   if (VAR_7->flags & VAR_1)
    FUNC_8(VAR_6, VAR_7);
  }

  if (VAR_7->error) {
   if (VAR_7->bytes_xfered)
    VAR_7->bytes_xfered -= VAR_7->blksz;
  }
 }

 FUNC_10(VAR_6, VAR_6->mrq);
}
