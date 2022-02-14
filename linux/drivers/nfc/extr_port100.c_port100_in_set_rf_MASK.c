
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int* data; } ;
struct port100_in_rf_setting {int dummy; } ;
struct port100 {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int * VAR_4 ;
 struct port100* FUNC_3 (struct nfc_digital_dev*) ;
 struct sk_buff* FUNC_4 (struct port100*,int) ;
 struct sk_buff* FUNC_5 (struct port100*,int ,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct nfc_digital_dev *VAR_5, u8 VAR_6)
{
 struct port100 *VAR_7 = FUNC_3(VAR_5);
 struct sk_buff *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;

 if (VAR_6 >= VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_7, sizeof(struct port100_in_rf_setting));
 if (!VAR_8)
  return -VAR_1;

 FUNC_6(VAR_8, &VAR_4[VAR_6],
       sizeof(struct port100_in_rf_setting));

 VAR_9 = FUNC_5(VAR_7, VAR_3, VAR_8);

 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = VAR_9->data[0];

 FUNC_2(VAR_9);

 return VAR_10;
}
