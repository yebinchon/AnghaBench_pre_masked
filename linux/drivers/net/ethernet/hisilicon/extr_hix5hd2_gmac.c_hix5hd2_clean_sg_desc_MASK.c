
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct sg_desc {TYPE_2__* frags; int linear_len; int linear_addr; } ;
struct TYPE_4__ {struct sg_desc* desc; } ;
struct hix5hd2_priv {int dev; TYPE_1__ tx_ring; } ;
typedef void* dma_addr_t ;
struct TYPE_6__ {int nr_frags; } ;
struct TYPE_5__ {int size; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int,int ) ;
 int FUNC_1 (int ,void*,int,int ) ;
 void* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct hix5hd2_priv *VAR_1,
      struct sk_buff *VAR_2, u32 VAR_3)
{
 struct sg_desc *VAR_4;
 dma_addr_t VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_4 = VAR_1->tx_ring.desc + VAR_3;

 VAR_5 = FUNC_2(VAR_4->linear_addr);
 VAR_6 = FUNC_2(VAR_4->linear_len);
 FUNC_1(VAR_1->dev, VAR_5, VAR_6, VAR_0);

 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_2)->nr_frags; VAR_7++) {
  VAR_5 = FUNC_2(VAR_4->frags[VAR_7].addr);
  VAR_6 = FUNC_2(VAR_4->frags[VAR_7].size);
  FUNC_0(VAR_1->dev, VAR_5, VAR_6, VAR_0);
 }
}
