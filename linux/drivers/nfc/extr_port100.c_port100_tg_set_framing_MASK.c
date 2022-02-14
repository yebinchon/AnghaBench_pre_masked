
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct port100_protocol {scalar_t__ number; } ;
struct port100 {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct port100* FUNC_3 (struct nfc_digital_dev*) ;
 struct sk_buff* FUNC_4 (struct port100*,size_t) ;
 struct sk_buff* FUNC_5 (struct port100*,int ,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct port100_protocol*,size_t) ;
 struct port100_protocol** VAR_5 ;

__attribute__((used)) static int FUNC_7(struct nfc_digital_dev *VAR_6, int VAR_7)
{
 struct port100 *VAR_8 = FUNC_3(VAR_6);
 struct port100_protocol *VAR_9;
 struct sk_buff *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12;
 int VAR_13;
 size_t VAR_14;

 if (VAR_7 >= VAR_2)
  return -VAR_0;

 VAR_9 = VAR_5[VAR_7];

 VAR_13 = 0;
 while (VAR_9[VAR_13].number != VAR_4)
  VAR_13++;

 if (!VAR_13)
  return 0;

 VAR_14 = sizeof(struct port100_protocol) * VAR_13;

 VAR_10 = FUNC_4(VAR_8, VAR_14);
 if (!VAR_10)
  return -VAR_1;

 FUNC_6(VAR_10, VAR_9, VAR_14);

 VAR_11 = FUNC_5(VAR_8, VAR_3, VAR_10);

 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12 = VAR_11->data[0];

 FUNC_2(VAR_11);

 return VAR_12;
}
