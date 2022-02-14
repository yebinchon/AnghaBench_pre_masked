
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfcmrvl_private {int dummy; } ;
struct nci_uart {scalar_t__ drv_data; } ;


 int FUNC_0 (struct nfcmrvl_private*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct nci_uart *VAR_0, struct sk_buff *VAR_1)
{
 return FUNC_0((struct nfcmrvl_private *)VAR_0->drv_data,
          VAR_1);
}
