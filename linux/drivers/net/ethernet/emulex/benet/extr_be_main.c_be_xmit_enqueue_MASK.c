
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ data_len; int data; } ;
struct device {int dummy; } ;
struct be_wrb_params {int dummy; } ;
struct be_tx_obj {int dummy; } ;
struct TYPE_5__ {int dma_map_errors; } ;
struct be_adapter {TYPE_2__ drv_stats; TYPE_1__* pdev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {int nr_frags; int * frags; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_tx_obj*) ;
 int FUNC_1 (struct be_tx_obj*,int ,int) ;
 int FUNC_2 (struct be_adapter*,struct be_tx_obj*,struct be_wrb_params*,struct sk_buff*,int) ;
 int FUNC_3 (struct be_tx_obj*,struct sk_buff*) ;
 int FUNC_4 (struct be_adapter*,struct be_tx_obj*,int,int,int) ;
 int FUNC_5 (struct device*,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,int const*,int ,int,int ) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_3__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_12(struct be_adapter *VAR_1, struct be_tx_obj *VAR_2,
      struct sk_buff *VAR_3,
      struct be_wrb_params *VAR_4)
{
 u32 VAR_5, VAR_6 = 0, VAR_7 = FUNC_11(VAR_3);
 struct device *VAR_8 = &VAR_1->pdev->dev;
 bool VAR_9 = 0;
 u32 VAR_10;
 dma_addr_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_0(VAR_2);

 if (VAR_3->len > VAR_3->data_len) {
  VAR_12 = FUNC_9(VAR_3);

  VAR_11 = FUNC_5(VAR_8, VAR_3->data, VAR_12, VAR_0);
  if (FUNC_6(VAR_8, VAR_11))
   goto dma_err;
  VAR_9 = 1;
  FUNC_1(VAR_2, VAR_11, VAR_12);
  VAR_6 += VAR_12;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_10(VAR_3)->nr_frags; VAR_5++) {
  const skb_frag_t *VAR_13 = &FUNC_10(VAR_3)->frags[VAR_5];
  VAR_12 = FUNC_8(VAR_13);

  VAR_11 = FUNC_7(VAR_8, VAR_13, 0, VAR_12, VAR_0);
  if (FUNC_6(VAR_8, VAR_11))
   goto dma_err;
  FUNC_1(VAR_2, VAR_11, VAR_12);
  VAR_6 += VAR_12;
 }

 FUNC_2(VAR_1, VAR_2, VAR_4, VAR_3, VAR_10);

 FUNC_3(VAR_2, VAR_3);
 return VAR_7;

dma_err:
 VAR_1->drv_stats.dma_map_errors++;
 FUNC_4(VAR_1, VAR_2, VAR_10, VAR_9, VAR_6);
 return 0;
}
