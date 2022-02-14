
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nfc_se {int type; } ;
struct nfc_hci_dev {int ndev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfc_se* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct nfc_hci_dev *VAR_6, u32 VAR_7)
{
 struct nfc_se *VAR_8;
 u8 VAR_9 = VAR_3;

 VAR_8 = FUNC_0(VAR_6->ndev, VAR_7);

 switch (VAR_8->type) {
 case 128:
  return FUNC_1(VAR_6, VAR_5,
         VAR_4, &VAR_9, 1);
 case 129:
  return FUNC_1(VAR_6, VAR_2,
         VAR_1, &VAR_9, 1);
 default:
  return -VAR_0;
 }
}
