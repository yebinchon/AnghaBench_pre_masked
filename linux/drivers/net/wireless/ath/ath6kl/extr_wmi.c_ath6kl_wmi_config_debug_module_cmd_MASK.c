
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath6kl_wmix_dbglog_cfg_module_cmd {void* config; void* valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

int FUNC_3(struct wmi *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct ath6kl_wmix_dbglog_cfg_module_cmd *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = (struct ath6kl_wmix_dbglog_cfg_module_cmd *) VAR_7->data;
 VAR_6->valid = FUNC_2(VAR_4);
 VAR_6->config = FUNC_2(VAR_5);

 VAR_8 = FUNC_0(VAR_3, VAR_7, VAR_2,
           VAR_1);
 return VAR_8;
}
