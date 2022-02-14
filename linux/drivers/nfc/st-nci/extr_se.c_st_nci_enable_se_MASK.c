
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nci_dev {int nfc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nci_dev*,int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct nci_dev*,int ,int ) ;
 int FUNC_4 (struct nci_dev*) ;

int FUNC_5(struct nci_dev *VAR_4, u32 VAR_5)
{
 int VAR_6;

 FUNC_2("st_nci_enable_se\n");






 VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_3);
 if (VAR_6 == VAR_1) {
  FUNC_4(VAR_4);
  VAR_6 = FUNC_0(VAR_4, VAR_0,
    VAR_2, ((void*)0), 0);
 }

 if (VAR_6 < 0) {




  FUNC_1(VAR_4->nfc_dev, VAR_5);
  return VAR_6;
 }

 return 0;
}
