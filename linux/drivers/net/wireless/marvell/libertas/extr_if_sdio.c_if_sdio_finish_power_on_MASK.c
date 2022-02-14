
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dev; } ;
struct lbs_private {int fw_ready; int dev; } ;
struct if_sdio_card {scalar_t__ model; int started; int pwron_waitq; scalar_t__ rx_unit; struct sdio_func* func; struct lbs_private* priv; } ;
struct cmd_header {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct lbs_private*,int ,struct cmd_header*,int,int ,unsigned long) ;
 int VAR_6 ;
 int FUNC_1 (struct if_sdio_card*) ;
 scalar_t__ FUNC_2 (struct if_sdio_card*) ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct cmd_header*,int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*,int ) ;
 int FUNC_10 (struct sdio_func*) ;
 int FUNC_11 (struct sdio_func*) ;
 int FUNC_12 (struct sdio_func*,int ) ;
 int FUNC_13 (struct sdio_func*,int,int ,int*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct if_sdio_card *VAR_8)
{
 struct sdio_func *VAR_9 = VAR_8->func;
 struct lbs_private *VAR_10 = VAR_8->priv;
 int VAR_11;

 FUNC_8(VAR_9);
 FUNC_12(VAR_8->func, VAR_1);





 if ((VAR_8->model != VAR_3)
   && (VAR_8->model != VAR_4))
  VAR_8->rx_unit = FUNC_2(VAR_8);
 else
  VAR_8->rx_unit = 0;
 VAR_11 = FUNC_9(VAR_9, VAR_6);
 if (VAR_11)
  goto release;




 FUNC_13(VAR_9, 0x0f, VAR_2, &VAR_11);
 if (VAR_11)
  goto release_irq;

 FUNC_10(VAR_9);




 VAR_10->fw_ready = 1;




 if (VAR_8->model == VAR_5) {
  struct cmd_header VAR_12;

  FUNC_5(&VAR_12, 0, sizeof(VAR_12));

  FUNC_3("send function INIT command\n");
  if (FUNC_0(VAR_10, VAR_0, &VAR_12, sizeof(VAR_12),
    VAR_7, (unsigned long) &VAR_12))
   FUNC_6(VAR_10->dev, "CMD_FUNC_INIT cmd failed\n");
 }

 FUNC_14(&VAR_8->pwron_waitq);

 if (!VAR_8->started) {
  VAR_11 = FUNC_4(VAR_10);
  FUNC_1(VAR_8);
  if (VAR_11 == 0) {
   VAR_8->started = 1;


   FUNC_7(&VAR_9->dev);
  }
 }

 return;

release_irq:
 FUNC_11(VAR_9);
release:
 FUNC_10(VAR_9);
}
