
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct wmi_dbglog_cfg_cmd {void* config_valid; void* config_enable; void* module_valid; void* module_enable; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct ath10k*,int ,char*,int ,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct ath10k *VAR_5, u64 VAR_6,
        u32 VAR_7)
{
 struct wmi_dbglog_cfg_cmd *VAR_8;
 struct sk_buff *VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_5(VAR_5, sizeof(*VAR_8));
 if (!VAR_9)
  return FUNC_0(-VAR_4);

 VAR_8 = (struct wmi_dbglog_cfg_cmd *)VAR_9->data;

 if (VAR_6) {
  VAR_10 = FUNC_1(VAR_7,
    VAR_0);
 } else {

  VAR_10 = FUNC_1(VAR_2,
    VAR_0);
  VAR_6 = ~0;
 }

 VAR_8->module_enable = FUNC_2(VAR_6);
 VAR_8->module_valid = FUNC_2(~0);
 VAR_8->config_enable = FUNC_2(VAR_10);
 VAR_8->config_valid = FUNC_2(VAR_1);

 FUNC_4(VAR_5, VAR_3,
     "wmi dbglog cfg modules %08x %08x config %08x %08x\n",
     FUNC_3(VAR_8->module_enable),
     FUNC_3(VAR_8->module_valid),
     FUNC_3(VAR_8->config_enable),
     FUNC_3(VAR_8->config_valid));
 return VAR_9;
}
