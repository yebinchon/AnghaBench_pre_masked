
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int cmd_running; int interrupt_urb; int run_command_work; int flags; scalar_t__ key_entry_inuse; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vnt_private*) ;
 int FUNC_7 (struct vnt_private*) ;
 int FUNC_8 (struct vnt_private*) ;
 int FUNC_9 (struct vnt_private*,int) ;
 int FUNC_10 (struct vnt_private*) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_3)
{
 struct vnt_private *VAR_4 = VAR_3->priv;
 int VAR_5;

 if (!VAR_4)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_9(VAR_4, VAR_5);


 VAR_4->key_entry_inuse = 0;

 if (!FUNC_3(VAR_1, &VAR_4->flags))
  FUNC_10(VAR_4);

 FUNC_1(VAR_3);

 FUNC_2(VAR_0, &VAR_4->flags);

 FUNC_0(&VAR_4->run_command_work);

 VAR_4->cmd_running = 0;

 FUNC_8(VAR_4);
 FUNC_7(VAR_4);
 FUNC_6(VAR_4);

 FUNC_5(VAR_4->interrupt_urb);
 FUNC_4(VAR_4->interrupt_urb);
}
