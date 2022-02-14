
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfcmrvl_private {int flags; TYPE_1__* if_ops; } ;
struct nci_dev {int dummy; } ;
struct TYPE_2__ {int (* nci_open ) (struct nfcmrvl_private*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct nfcmrvl_private* FUNC_1 (struct nci_dev*) ;
 int FUNC_2 (struct nfcmrvl_private*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct nci_dev *VAR_2)
{
 struct nfcmrvl_private *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (FUNC_3(VAR_0, &VAR_3->flags))
  return 0;


 FUNC_0(VAR_1, &VAR_3->flags);

 VAR_4 = VAR_3->if_ops->nci_open(VAR_3);

 if (VAR_4)
  FUNC_0(VAR_0, &VAR_3->flags);

 return VAR_4;
}
