
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfcmrvl_private {TYPE_1__* if_ops; int flags; } ;
struct nci_dev {int dummy; } ;
struct TYPE_2__ {int (* nci_close ) (struct nfcmrvl_private*) ;} ;


 int VAR_0 ;
 struct nfcmrvl_private* FUNC_0 (struct nci_dev*) ;
 int FUNC_1 (struct nfcmrvl_private*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct nci_dev *VAR_1)
{
 struct nfcmrvl_private *VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_2(VAR_0, &VAR_2->flags))
  return 0;

 VAR_2->if_ops->nci_close(VAR_2);

 return 0;
}
