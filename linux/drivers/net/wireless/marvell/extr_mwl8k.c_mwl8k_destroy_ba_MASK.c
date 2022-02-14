
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {void* length; void* code; } ;
struct TYPE_3__ {void* ba_context; } ;
struct mwl8k_cmd_bastream {TYPE_2__ header; TYPE_1__ destroy_params; void* action; } ;
struct ieee80211_hw {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct mwl8k_cmd_bastream*) ;
 struct mwl8k_cmd_bastream* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ieee80211_hw*,TYPE_2__*) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_3,
        u8 VAR_4)
{
 struct mwl8k_cmd_bastream *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return;

 VAR_5->header.code = FUNC_0(VAR_2);
 VAR_5->header.length = FUNC_0(sizeof(*VAR_5));
 VAR_5->action = FUNC_1(VAR_1);

 VAR_5->destroy_params.ba_context = FUNC_1(VAR_4);
 FUNC_4(VAR_3, &VAR_5->header);

 FUNC_5(VAR_3->wiphy, "Deleted BA stream index %d\n", VAR_4);

 FUNC_2(VAR_5);
}
