
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_hci_dev {int llc; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfc_hci_dev* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,void*,size_t,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nfc_dev *VAR_2, void *VAR_3,
     size_t VAR_4)
{
 int VAR_5;
 struct nfc_hci_dev *VAR_6 = FUNC_0(VAR_2);

 VAR_5 = FUNC_1(VAR_6, VAR_0,
   VAR_1, VAR_3, VAR_4, ((void*)0), ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_6->llc);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_2(VAR_6->llc);
}
