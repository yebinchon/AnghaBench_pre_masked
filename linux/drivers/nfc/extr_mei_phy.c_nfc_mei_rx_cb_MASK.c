
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct nfc_mei_phy {scalar_t__ hard_fault; int hdev; } ;
struct mei_cl_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct nfc_mei_phy* FUNC_3 (struct mei_cl_device*) ;
 int FUNC_4 (struct nfc_mei_phy*,int ,int ) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct mei_cl_device *VAR_3)
{
 struct nfc_mei_phy *VAR_4 = FUNC_3(VAR_3);
 struct sk_buff *VAR_5;
 int VAR_6;

 if (!VAR_4)
  return;

 if (VAR_4->hard_fault != 0)
  return;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_4(VAR_4, VAR_5->data, VAR_2);
 if (VAR_6 < VAR_1) {
  FUNC_2(VAR_5);
  return;
 }

 FUNC_7(VAR_5, VAR_6);
 FUNC_6(VAR_5, VAR_1);

 FUNC_0("mei frame read", VAR_5);

 FUNC_5(VAR_4->hdev, VAR_5);
}
