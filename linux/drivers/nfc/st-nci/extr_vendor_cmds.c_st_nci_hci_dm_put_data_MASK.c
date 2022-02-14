
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int dummy; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nci_dev*,int ,int ,void*,size_t,int *) ;
 struct nci_dev* FUNC_1 (struct nfc_dev*) ;

__attribute__((used)) static int FUNC_2(struct nfc_dev *VAR_2, void *VAR_3,
      size_t VAR_4)
{
 struct nci_dev *VAR_5 = FUNC_1(VAR_2);

 return FUNC_0(VAR_5, VAR_0,
    VAR_1, VAR_3,
    VAR_4, ((void*)0));
}
