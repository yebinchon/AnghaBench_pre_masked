
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct octnet_buf_free_info {int dptr; struct lio* lio; struct sk_buff* skb; } ;
struct lio {TYPE_2__* oct_dev; } ;
struct TYPE_4__ {TYPE_1__* pci_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct octnet_buf_free_info *VAR_2;
 struct sk_buff *VAR_3;
 struct lio *VAR_4;

 VAR_2 = (struct octnet_buf_free_info *)VAR_1;
 VAR_3 = VAR_2->skb;
 VAR_4 = VAR_2->lio;

 FUNC_0(&VAR_4->oct_dev->pci_dev->dev, VAR_2->dptr, VAR_3->len,
    VAR_0);

 FUNC_1(VAR_3);
}
