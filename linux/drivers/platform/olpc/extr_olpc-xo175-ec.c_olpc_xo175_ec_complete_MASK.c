
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct power_supply {int dummy; } ;
struct TYPE_15__ {int command; } ;
struct TYPE_12__ {int channel; int byte; } ;
struct TYPE_13__ {TYPE_3__ resp; } ;
struct TYPE_11__ {int status; } ;
struct olpc_xo175_ec {int resp_len; int expected_resp_len; int* resp_data; int* logbuf; int logbuf_len; TYPE_8__* pwrbtn; int cmd_state_lock; int cmd_done; void* cmd_state; scalar_t__ cmd_running; TYPE_6__ cmd; int gpio_cmd; TYPE_4__ rx_buf; TYPE_2__ msg; TYPE_1__* spi; } ;
struct device {int dummy; } ;
struct TYPE_14__ {int parent; } ;
struct TYPE_16__ {TYPE_5__ dev; } ;
struct TYPE_10__ {struct device dev; } ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_6__*,int ,int) ;
 int FUNC_9 (struct olpc_xo175_ec*) ;
 int FUNC_10 (struct olpc_xo175_ec*) ;
 int FUNC_11 (struct olpc_xo175_ec*,TYPE_6__*,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct power_supply*) ;
 struct power_supply* FUNC_14 (char*) ;
 int FUNC_15 (struct power_supply*) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_18(void *VAR_9)
{
 struct olpc_xo175_ec *VAR_10 = VAR_9;
 struct device *VAR_11 = &VAR_10->spi->dev;
 struct power_supply *VAR_12;
 unsigned long VAR_13;
 u8 VAR_14;
 u8 VAR_15;
 int VAR_16;

 VAR_16 = VAR_10->msg.status;
 if (VAR_16) {
  FUNC_2(VAR_11, "SPI transfer failed: %d\n", VAR_16);

  FUNC_16(&VAR_10->cmd_state_lock, VAR_13);
  if (VAR_10->cmd_running) {
   VAR_10->resp_len = 0;
   VAR_10->cmd_state = VAR_3;
   FUNC_0(&VAR_10->cmd_done);
  }
  FUNC_17(&VAR_10->cmd_state_lock, VAR_13);

  if (VAR_16 != -VAR_5)
   FUNC_10(VAR_10);

  return;
 }

 VAR_14 = VAR_10->rx_buf.resp.channel;
 VAR_15 = VAR_10->rx_buf.resp.byte;

 switch (VAR_14) {
 case 138:
  FUNC_16(&VAR_10->cmd_state_lock, VAR_13);

  if (!VAR_10->cmd_running) {

   FUNC_2(VAR_11, "spurious FIFO read packet\n");
   FUNC_17(&VAR_10->cmd_state_lock, VAR_13);
   return;
  }

  VAR_10->cmd_state = VAR_2;
  if (!VAR_10->expected_resp_len)
   FUNC_0(&VAR_10->cmd_done);
  FUNC_10(VAR_10);

  FUNC_17(&VAR_10->cmd_state_lock, VAR_13);
  return;

 case 137:
  FUNC_16(&VAR_10->cmd_state_lock, VAR_13);

  if (!VAR_10->cmd_running) {

   FUNC_2(VAR_11, "spurious SWITCH packet\n");
   FUNC_8(&VAR_10->cmd, 0, sizeof(VAR_10->cmd));
   VAR_10->cmd.command = VAR_0;
  }

  VAR_10->cmd_state = VAR_1;


  FUNC_4(VAR_10->gpio_cmd, 0);
  FUNC_11(VAR_10, &VAR_10->cmd, sizeof(VAR_10->cmd));

  FUNC_17(&VAR_10->cmd_state_lock, VAR_13);
  return;

 case 142:
  FUNC_16(&VAR_10->cmd_state_lock, VAR_13);

  if (!VAR_10->cmd_running) {
   FUNC_2(VAR_11, "spurious response packet\n");
  } else if (VAR_10->resp_len >= VAR_10->expected_resp_len) {
   FUNC_2(VAR_11, "too many response packets\n");
  } else {
   VAR_10->resp_data[VAR_10->resp_len++] = VAR_15;
   if (VAR_10->resp_len == VAR_10->expected_resp_len) {
    VAR_10->cmd_state = VAR_4;
    FUNC_0(&VAR_10->cmd_done);
   }
  }

  FUNC_17(&VAR_10->cmd_state_lock, VAR_13);
  break;

 case 143:
  FUNC_16(&VAR_10->cmd_state_lock, VAR_13);

  if (!VAR_10->cmd_running) {
   FUNC_2(VAR_11, "spurious cmd error packet\n");
  } else {
   VAR_10->resp_data[0] = VAR_15;
   VAR_10->resp_len = 1;
   VAR_10->cmd_state = VAR_3;
   FUNC_0(&VAR_10->cmd_done);
  }
  FUNC_17(&VAR_10->cmd_state_lock, VAR_13);
  break;

 case 139:
  FUNC_3(VAR_11, "keyboard is not supported\n");
  break;

 case 136:
  FUNC_3(VAR_11, "touchpad is not supported\n");
  break;

 case 140:
  FUNC_1(VAR_11, "got event %.2x\n", VAR_15);
  switch (VAR_15) {
  case 135:
   VAR_12 = FUNC_14("olpc-ac");
   if (VAR_12) {
    FUNC_13(VAR_12);
    FUNC_15(VAR_12);
   }
   break;
  case 131:
  case 134:
  case 132:
  case 133:
   VAR_12 = FUNC_14("olpc-battery");
   if (VAR_12) {
    FUNC_13(VAR_12);
    FUNC_15(VAR_12);
   }
   break;
  case 130:
   FUNC_5(VAR_10->pwrbtn, VAR_6, 1);
   FUNC_6(VAR_10->pwrbtn);
   FUNC_5(VAR_10->pwrbtn, VAR_6, 0);
   FUNC_6(VAR_10->pwrbtn);

  case 129:
  case 128:
   FUNC_12(VAR_10->pwrbtn->dev.parent,
      VAR_8);
   break;
  default:
   FUNC_1(VAR_11, "ignored unknown event %.2x\n", VAR_15);
   break;
  }
  break;

 case 141:
  if (VAR_15 == '\n') {
   FUNC_9(VAR_10);
  } else if (FUNC_7(VAR_15)) {
   VAR_10->logbuf[VAR_10->logbuf_len++] = VAR_15;
   if (VAR_10->logbuf_len == VAR_7)
    FUNC_9(VAR_10);
  }
  break;

 default:
  FUNC_3(VAR_11, "unknown channel: %d, %.2x\n", VAR_14, VAR_15);
  break;
 }


 FUNC_10(VAR_10);
}
