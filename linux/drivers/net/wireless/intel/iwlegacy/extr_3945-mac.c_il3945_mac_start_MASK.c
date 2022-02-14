
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rfkill_poll; } ;
struct TYPE_3__ {int len; } ;
struct il_priv {int is_open; TYPE_2__ _3945; int status; int wait_command_queue; int mutex; TYPE_1__ ucode_code; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct ieee80211_hw *VAR_3)
{
 struct il_priv *VAR_4 = VAR_3->priv;
 int VAR_5;


 FUNC_7(&VAR_4->mutex);
 FUNC_1("enter\n");




 if (!VAR_4->ucode_code.len) {
  VAR_5 = FUNC_5(VAR_4);
  if (VAR_5) {
   FUNC_2("Could not read microcode: %d\n", VAR_5);
   FUNC_8(&VAR_4->mutex);
   goto out_release_irq;
  }
 }

 VAR_5 = FUNC_3(VAR_4);

 FUNC_8(&VAR_4->mutex);

 if (VAR_5)
  goto out_release_irq;

 FUNC_0("Start UP work.\n");



 VAR_5 = FUNC_10(VAR_4->wait_command_queue,
     FUNC_9(VAR_1, &VAR_4->status),
     VAR_2);
 if (!VAR_5) {
  if (!FUNC_9(VAR_1, &VAR_4->status)) {
   FUNC_2("Wait for START_ALIVE timeout after %dms.\n",
          FUNC_6(VAR_2));
   VAR_5 = -VAR_0;
   goto out_release_irq;
  }
 }



 FUNC_4(&VAR_4->_3945.rfkill_poll);

 VAR_4->is_open = 1;
 FUNC_1("leave\n");
 return 0;

out_release_irq:
 VAR_4->is_open = 0;
 FUNC_1("leave - failed\n");
 return VAR_5;
}
