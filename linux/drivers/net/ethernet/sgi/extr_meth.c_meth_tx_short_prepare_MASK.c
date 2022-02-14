
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dt; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_6__ {TYPE_2__ data; TYPE_1__ header; } ;
typedef TYPE_3__ tx_packet ;
struct sk_buff {int len; } ;
struct meth_private {size_t tx_write; TYPE_3__* tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct sk_buff*,int,int) ;

__attribute__((used)) static void FUNC_2(struct meth_private *VAR_2,
      struct sk_buff *VAR_3)
{
 tx_packet *VAR_4 = &VAR_2->tx_ring[VAR_2->tx_write];
 int VAR_5 = (VAR_3->len < VAR_0) ? VAR_0 : VAR_3->len;

 VAR_4->header.raw = VAR_1 | (VAR_5-1) | ((128-VAR_5) << 16);

 FUNC_1(VAR_3, VAR_4->data.dt + (120 - VAR_5), VAR_3->len);
 if (VAR_3->len < VAR_5)
  FUNC_0(VAR_4->data.dt + 120 - VAR_5 + VAR_3->len, 0, VAR_5-VAR_3->len);
}
