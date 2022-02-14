
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wmi_delete_cipher_key_cmd {scalar_t__ key_index; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct wmi*,scalar_t__,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;

int FUNC_2(struct wmi *VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct sk_buff *VAR_8;
 struct wmi_delete_cipher_key_cmd *VAR_9;
 int VAR_10;

 if (VAR_7 > VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_1(sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = (struct wmi_delete_cipher_key_cmd *) VAR_8->data;
 VAR_9->key_index = VAR_7;

 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_8, VAR_3,
      VAR_2);

 return VAR_10;
}
