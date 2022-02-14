
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct nci_dev {TYPE_2__* hci_dev; } ;
struct TYPE_4__ {TYPE_1__* pipes; } ;
struct TYPE_3__ {size_t gate; size_t host; } ;





 int FUNC_0 (struct nci_dev*,size_t,struct sk_buff*) ;
 int FUNC_1 (struct nci_dev*,size_t,struct sk_buff*) ;
 int FUNC_2 (struct nci_dev*,size_t,size_t,struct sk_buff*) ;

void FUNC_3(struct nci_dev *VAR_0, u8 VAR_1,
     u8 VAR_2, struct sk_buff *VAR_3)
{
 u8 VAR_4 = VAR_0->hci_dev->pipes[VAR_1].gate;
 u8 VAR_5 = VAR_0->hci_dev->pipes[VAR_1].host;

 switch (VAR_4) {
 case 130:
  FUNC_0(VAR_0, VAR_2, VAR_3);
 break;
 case 129:
  FUNC_1(VAR_0, VAR_2, VAR_3);
 break;
 case 128:
  FUNC_2(VAR_0, VAR_5, VAR_2, VAR_3);
 break;
 }
}
