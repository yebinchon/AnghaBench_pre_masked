
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_7__ {int * tx_buf; int * rx_buf; } ;
struct olpc_xo175_ec {int tx_buf; TYPE_2__ xfer; int rx_buf; TYPE_3__* pwrbtn; scalar_t__ logbuf_len; int cmd_done; int cmd_state; int cmd_state_lock; struct spi_device* spi; int gpio_cmd; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {char* name; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 TYPE_3__* FUNC_5 (int *) ;
 struct olpc_xo175_ec* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int *,struct olpc_xo175_ec*) ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_11 (struct olpc_xo175_ec*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,char*,int,int *,int ,int *,int ) ;
 int * VAR_11 ;
 int FUNC_14 (struct spi_device*,struct olpc_xo175_ec*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_12)
{
 struct olpc_xo175_ec *VAR_13;
 int VAR_14;

 if (VAR_8) {
  FUNC_2(&VAR_12->dev, "OLPC EC already registered.\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_6(&VAR_12->dev, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->gpio_cmd = FUNC_4(&VAR_12->dev, "cmd", VAR_6);
 if (FUNC_0(VAR_13->gpio_cmd)) {
  FUNC_2(&VAR_12->dev, "failed to get cmd gpio: %ld\n",
     FUNC_1(VAR_13->gpio_cmd));
  return FUNC_1(VAR_13->gpio_cmd);
 }

 VAR_13->spi = VAR_12;

 FUNC_15(&VAR_13->cmd_state_lock);
 VAR_13->cmd_state = VAR_0;
 FUNC_7(&VAR_13->cmd_done);

 VAR_13->logbuf_len = 0;


 VAR_13->pwrbtn = FUNC_5(&VAR_12->dev);
 if (!VAR_13->pwrbtn)
  return -VAR_3;
 VAR_13->pwrbtn->name = "Power Button";
 VAR_13->pwrbtn->dev.parent = &VAR_12->dev;
 FUNC_9(VAR_13->pwrbtn, VAR_4, VAR_7);
 VAR_14 = FUNC_8(VAR_13->pwrbtn);
 if (VAR_14) {
  FUNC_2(&VAR_12->dev, "error registering input device: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_14(VAR_12, VAR_13);

 VAR_13->xfer.rx_buf = &VAR_13->rx_buf;
 VAR_13->xfer.tx_buf = &VAR_13->tx_buf;

 FUNC_11(VAR_13);

 FUNC_10(&VAR_9, VAR_13);
 VAR_8 = FUNC_13(&VAR_12->dev, "olpc-ec", -1,
       ((void*)0), 0, ((void*)0), 0);


 FUNC_12(VAR_2);

 if (VAR_11 == ((void*)0))
  VAR_11 = VAR_10;

 FUNC_3(&VAR_12->dev, "OLPC XO-1.75 Embedded Controller driver\n");

 return 0;
}
