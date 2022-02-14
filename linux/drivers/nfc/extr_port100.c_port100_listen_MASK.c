
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct port100 {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;
typedef int nfc_digital_cmd_complete_t ;


 int VAR_0 ;
 struct port100* FUNC_0 (struct nfc_digital_dev*) ;
 struct sk_buff* FUNC_1 (struct port100*,int ) ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int ,int ,void*) ;

__attribute__((used)) static int FUNC_3(struct nfc_digital_dev *VAR_1, u16 VAR_2,
     nfc_digital_cmd_complete_t VAR_3, void *VAR_4)
{
 struct port100 *VAR_5 = FUNC_0(VAR_1);
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_1(VAR_5, 0);
 if (!VAR_6)
  return -VAR_0;

 return FUNC_2(VAR_1, VAR_6, VAR_2, VAR_3, VAR_4);
}
