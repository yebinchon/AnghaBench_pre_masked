
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {size_t nr_args; int * args; scalar_t__ data_len; int command; } ;
struct olpc_xo175_ec {int cmd_running; scalar_t__ cmd_state; size_t expected_resp_len; size_t resp_len; int cmd_state_lock; int gpio_cmd; int * resp_data; TYPE_1__* spi; int cmd_done; TYPE_2__ cmd; int suspended; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ,size_t) ;
 int FUNC_2 (struct device*,char*,size_t,...) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,size_t) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 size_t FUNC_8 (size_t,size_t) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct olpc_xo175_ec*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int FUNC_16(u8 VAR_6, u8 *VAR_7, size_t VAR_8, u8 *VAR_9,
     size_t VAR_10, void *VAR_11)
{
 struct olpc_xo175_ec *VAR_12 = VAR_11;
 struct device *VAR_13 = &VAR_12->spi->dev;
 unsigned long VAR_14;
 size_t VAR_15;
 int VAR_16 = 0;

 FUNC_1(VAR_13, "CMD %x, %zd bytes expected\n", VAR_6, VAR_10);

 if (VAR_8 > 5) {
  FUNC_2(VAR_13, "command len %zd too big!\n", VAR_10);
  return -VAR_3;
 }


 if (FUNC_0(VAR_12->suspended))
  return -VAR_2;


 VAR_16 = FUNC_11(VAR_6);
 if (VAR_16 < 0) {
  FUNC_3(VAR_13, "unknown command 0x%x\n", VAR_6);






  if (VAR_10 > sizeof(VAR_12->resp_data)) {
   FUNC_2(VAR_13, "response too big: %zd!\n", VAR_10);
   return -VAR_3;
  }
  VAR_15 = VAR_10;
 } else {
  VAR_15 = (size_t)VAR_16;
  VAR_16 = 0;
 }
 VAR_10 = FUNC_8(VAR_10, VAR_15);

 FUNC_13(&VAR_12->cmd_state_lock, VAR_14);


 FUNC_5(&VAR_12->cmd_done);
 VAR_12->cmd_running = 1;
 VAR_12->cmd_state = VAR_1;
 FUNC_7(&VAR_12->cmd, 0, sizeof(VAR_12->cmd));
 VAR_12->cmd.command = VAR_6;
 VAR_12->cmd.nr_args = VAR_8;
 VAR_12->cmd.data_len = 0;
 FUNC_6(VAR_12->cmd.args, VAR_7, VAR_8);
 VAR_12->expected_resp_len = VAR_15;
 VAR_12->resp_len = 0;


 FUNC_4(VAR_12->gpio_cmd, 1);

 FUNC_14(&VAR_12->cmd_state_lock, VAR_14);


 if (!FUNC_15(&VAR_12->cmd_done,
   FUNC_9(4000))) {
  FUNC_2(VAR_13, "EC cmd error: timeout in STATE %d\n",
    VAR_12->cmd_state);
  FUNC_4(VAR_12->gpio_cmd, 0);
  FUNC_12(VAR_12->spi);
  FUNC_10(VAR_12);
  return -VAR_5;
 }

 FUNC_13(&VAR_12->cmd_state_lock, VAR_14);


 if (VAR_12->cmd_state == VAR_0) {

  FUNC_2(VAR_13, "command 0x%x returned error 0x%x\n",
      VAR_6, VAR_12->resp_data[0]);
  VAR_16 = -VAR_4;
 } else if (VAR_12->resp_len != VAR_15) {
  FUNC_2(VAR_13, "command 0x%x returned %d bytes, expected %zd bytes\n",
      VAR_6, VAR_12->resp_len, VAR_15);
  VAR_16 = -VAR_4;
 } else {






  FUNC_6(VAR_9, VAR_12->resp_data, VAR_10);
 }


 FUNC_4(VAR_12->gpio_cmd, 0);
 VAR_12->cmd_running = 0;

 FUNC_14(&VAR_12->cmd_state_lock, VAR_14);

 return VAR_16;
}
