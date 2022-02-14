
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dev; } ;
struct if_sdio_packet {scalar_t__ model; struct if_sdio_packet* next; struct if_sdio_packet* packets; int workqueue; int priv; } ;
struct if_sdio_card {scalar_t__ model; struct if_sdio_card* next; struct if_sdio_card* packets; int workqueue; int priv; } ;
struct cmd_header {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,struct cmd_header*,int,int ,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct if_sdio_packet*) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct cmd_header*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 struct if_sdio_packet* FUNC_9 (struct sdio_func*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_10(struct sdio_func *VAR_4)
{
 struct if_sdio_card *VAR_5;
 struct if_sdio_packet *VAR_6;

 VAR_5 = FUNC_9(VAR_4);


 FUNC_7(&VAR_4->dev);

 if (VAR_3 && (VAR_5->model == VAR_1)) {




  struct cmd_header VAR_7;

  FUNC_6(&VAR_7, 0, sizeof(VAR_7));

  FUNC_3("send function SHUTDOWN command\n");
  if (FUNC_0(VAR_5->priv, VAR_0,
    &VAR_7, sizeof(VAR_7), VAR_2,
    (unsigned long) &VAR_7))
   FUNC_8("CMD_FUNC_SHUTDOWN cmd failed\n");
 }


 FUNC_3("call remove card\n");
 FUNC_5(VAR_5->priv);
 FUNC_4(VAR_5->priv);

 FUNC_1(VAR_5->workqueue);

 while (VAR_5->packets) {
  VAR_6 = VAR_5->packets;
  VAR_5->packets = VAR_5->packets->next;
  FUNC_2(VAR_6);
 }

 FUNC_2(VAR_5);
}
