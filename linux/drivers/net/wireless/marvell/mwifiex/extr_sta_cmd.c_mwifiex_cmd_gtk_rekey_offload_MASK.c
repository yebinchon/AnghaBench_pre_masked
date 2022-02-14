
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_gtk_rekey_params {void* replay_ctr_high; void* replay_ctr_low; int kck; int kek; void* action; } ;
struct TYPE_2__ {struct host_cmd_ds_gtk_rekey_params rekey; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;
struct cfg80211_gtk_rekey_data {scalar_t__ replay_ctr; int kck; int kek; } ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_5,
      struct host_cmd_ds_command *VAR_6,
      u16 VAR_7,
      struct cfg80211_gtk_rekey_data *VAR_8)
{
 struct host_cmd_ds_gtk_rekey_params *VAR_9 = &VAR_6->params.rekey;
 u64 VAR_10;

 VAR_6->command = FUNC_1(VAR_1);
 VAR_6->size = FUNC_1(sizeof(*VAR_9) + VAR_4);

 VAR_9->action = FUNC_1(VAR_7);
 if (VAR_7 == VAR_0) {
  FUNC_3(VAR_9->kek, VAR_8->kek, VAR_3);
  FUNC_3(VAR_9->kck, VAR_8->kck, VAR_2);
  VAR_10 = FUNC_0((__be64 *)VAR_8->replay_ctr);
  VAR_9->replay_ctr_low = FUNC_2((u32)VAR_10);
  VAR_9->replay_ctr_high =
   FUNC_2((u32)((u64)VAR_10 >> 32));
 }

 return 0;
}
