
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sdio_func {TYPE_2__* card; } ;
struct TYPE_3__ {scalar_t__ bus_width; } ;
struct mmc_host {int caps; TYPE_1__ ios; } ;
struct if_sdio_card {scalar_t__ model; int ioport; struct sdio_func* func; } ;
struct TYPE_4__ {int quirks; struct mmc_host* host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct if_sdio_card*) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*,int ,int*) ;
 int FUNC_5 (struct sdio_func*,int ,int ,int*) ;
 int FUNC_6 (struct sdio_func*,scalar_t__,int*) ;
 int FUNC_7 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_8(struct if_sdio_card *VAR_7)
{
 struct sdio_func *VAR_8 = VAR_7->func;
 struct mmc_host *VAR_9 = VAR_8->card->host;
 int VAR_10;

 FUNC_1(VAR_8);

 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10)
  goto release;




 if ((VAR_7->model == VAR_4) &&
     (VAR_9->caps & VAR_2) &&
     (VAR_9->ios.bus_width == VAR_1)) {
  u8 VAR_11;

  VAR_8->card->quirks |= VAR_3;
  VAR_11 = FUNC_4(VAR_8, VAR_6, &VAR_10);
  if (VAR_10)
   goto disable;

  VAR_11 |= VAR_5;
  FUNC_5(VAR_8, VAR_11, VAR_6, &VAR_10);
  if (VAR_10)
   goto disable;
 }

 VAR_7->ioport = FUNC_6(VAR_8, VAR_0, &VAR_10);
 if (VAR_10)
  goto disable;

 VAR_7->ioport |= FUNC_6(VAR_8, VAR_0 + 1, &VAR_10) << 8;
 if (VAR_10)
  goto disable;

 VAR_7->ioport |= FUNC_6(VAR_8, VAR_0 + 2, &VAR_10) << 16;
 if (VAR_10)
  goto disable;

 FUNC_7(VAR_8);
 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_8);
  goto disable;
 }

 return 0;

disable:
 FUNC_2(VAR_8);
release:
 FUNC_7(VAR_8);
 return VAR_10;
}
