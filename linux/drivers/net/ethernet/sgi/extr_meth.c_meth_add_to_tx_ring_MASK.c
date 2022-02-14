
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct meth_private {size_t tx_write; int tx_count; struct sk_buff** tx_skbs; } ;
struct TYPE_3__ {int tx_info; } ;
struct TYPE_4__ {TYPE_1__ eth; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct meth_private*,struct sk_buff*) ;
 int FUNC_2 (struct meth_private*,struct sk_buff*) ;
 int FUNC_3 (struct meth_private*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct meth_private *VAR_2, struct sk_buff *VAR_3)
{

 VAR_2->tx_skbs[VAR_2->tx_write] = VAR_3;
 if (VAR_3->len <= 120) {

  FUNC_3(VAR_2, VAR_3);
 } else if (FUNC_0((unsigned long)VAR_3->data) !=
     FUNC_0((unsigned long)VAR_3->data + VAR_3->len - 1)) {

  FUNC_2(VAR_2, VAR_3);
 } else {

  FUNC_1(VAR_2, VAR_3);
 }
 VAR_2->tx_write = (VAR_2->tx_write + 1) & (VAR_0 - 1);
 VAR_1->eth.tx_info = VAR_2->tx_write;
 VAR_2->tx_count++;
}
