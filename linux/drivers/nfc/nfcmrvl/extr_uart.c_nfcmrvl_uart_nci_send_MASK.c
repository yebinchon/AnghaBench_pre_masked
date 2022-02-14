
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfcmrvl_private {struct nci_uart* drv_data; } ;
struct TYPE_2__ {int (* send ) (struct nci_uart*,struct sk_buff*) ;} ;
struct nci_uart {TYPE_1__ ops; } ;


 int FUNC_0 (struct nci_uart*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct nfcmrvl_private *VAR_0,
     struct sk_buff *VAR_1)
{
 struct nci_uart *VAR_2 = VAR_0->drv_data;

 return VAR_2->ops.send(VAR_2, VAR_1);
}
