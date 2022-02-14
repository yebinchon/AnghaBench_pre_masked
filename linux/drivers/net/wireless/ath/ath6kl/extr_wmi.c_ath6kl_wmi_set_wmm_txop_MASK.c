
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_set_wmm_txop_cmd {int txop_enable; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum wmi_txop_cfg { ____Placeholder_wmi_txop_cfg } wmi_txop_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;

int FUNC_2(struct wmi *VAR_6, u8 VAR_7, enum wmi_txop_cfg VAR_8)
{
 struct sk_buff *VAR_9;
 struct wmi_set_wmm_txop_cmd *VAR_10;
 int VAR_11;

 if (!((VAR_8 == VAR_4) || (VAR_8 == VAR_5)))
  return -VAR_0;

 VAR_9 = FUNC_1(sizeof(struct wmi_set_wmm_txop_cmd));
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = (struct wmi_set_wmm_txop_cmd *) VAR_9->data;
 VAR_10->txop_enable = VAR_8;

 VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_9, VAR_3,
      VAR_2);
 return VAR_11;
}
