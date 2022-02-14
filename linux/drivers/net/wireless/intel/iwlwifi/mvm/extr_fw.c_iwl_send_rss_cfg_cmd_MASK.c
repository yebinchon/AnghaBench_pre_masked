
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rss_config_cmd {int hash_mask; int* indirection_table; int secret_key; int flags; } ;
struct iwl_mvm {TYPE_1__* trans; } ;
typedef int cmd ;
struct TYPE_2__ {int num_rx_queues; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int,struct iwl_rss_config_cmd*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_8)
{
 int VAR_9;
 struct iwl_rss_config_cmd VAR_10 = {
  .flags = FUNC_2(VAR_0),
  .hash_mask = FUNC_1(VAR_2) |
        FUNC_1(VAR_3) |
        FUNC_1(VAR_1) |
        FUNC_1(VAR_5) |
        FUNC_1(VAR_6) |
        FUNC_1(VAR_4),
 };

 if (VAR_8->trans->num_rx_queues == 1)
  return 0;


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_10.indirection_table); VAR_9++)
  VAR_10.indirection_table[VAR_9] =
   1 + (VAR_9 % (VAR_8->trans->num_rx_queues - 1));
 FUNC_4(VAR_10.secret_key, sizeof(VAR_10.secret_key));

 return FUNC_3(VAR_8, VAR_7, 0, sizeof(VAR_10), &VAR_10);
}
