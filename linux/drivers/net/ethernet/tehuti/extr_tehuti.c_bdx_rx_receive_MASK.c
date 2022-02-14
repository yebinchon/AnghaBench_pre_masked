
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int ip_summed; int protocol; scalar_t__ data; } ;
struct TYPE_4__ {int pktsz; } ;
struct rxf_fifo {TYPE_1__ m; } ;
struct rxdb {int dummy; } ;
struct TYPE_6__ {int wptr; int rptr; int memsz; int reg_RPTR; scalar_t__ va; int reg_WPTR; } ;
struct rxd_fifo {TYPE_3__ m; } ;
struct rxd_desc {int va_lo; int rxd_vlan; int len; int rxd_val1; } ;
struct rx_map {int dma; struct sk_buff* skb; } ;
struct TYPE_5__ {int rx_bytes; int rx_packets; int rx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct bdx_priv {struct rxf_fifo rxf_fifo0; int pdev; struct net_device* ndev; struct rxdb* rxdb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,...) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct bdx_priv*,int ,int,struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct bdx_priv*,int ) ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 int FUNC_10 (struct bdx_priv*,int ,int) ;
 int FUNC_11 (struct bdx_priv*,struct rxd_desc*) ;
 int FUNC_12 (struct bdx_priv*,struct rxf_fifo*) ;
 struct rx_map* FUNC_13 (struct rxdb*,int ) ;
 int FUNC_14 (struct rxdb*,int ) ;
 int FUNC_15 (struct sk_buff*,struct net_device*) ;
 int FUNC_16 (scalar_t__,scalar_t__,int) ;
 struct sk_buff* FUNC_17 (struct net_device*,scalar_t__) ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (int ,int ,int ,int ) ;
 int FUNC_20 (struct rxd_desc*,int ,int,int) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,int) ;
 int FUNC_23 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_24 (int) ;

__attribute__((used)) static int FUNC_25(struct bdx_priv *VAR_7, struct rxd_fifo *VAR_8, int VAR_9)
{
 struct net_device *VAR_10 = VAR_7->ndev;
 struct sk_buff *VAR_11, *VAR_12;
 struct rxd_desc *VAR_13;
 struct rx_map *VAR_14;
 struct rxf_fifo *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18 = 0;
 int VAR_19 = VAR_1;
 struct rxdb *VAR_20 = ((void*)0);

 u32 VAR_21;
 u16 VAR_22;
 u16 VAR_23;

 VAR_3;
 VAR_19 = VAR_9;

 VAR_8->m.wptr = FUNC_8(VAR_7, VAR_8->m.reg_WPTR) & VAR_6;

 VAR_17 = VAR_8->m.wptr - VAR_8->m.rptr;
 if (VAR_17 < 0)
  VAR_17 = VAR_8->m.memsz + VAR_17;

 while (VAR_17 > 0) {

  VAR_13 = (struct rxd_desc *)(VAR_8->m.va + VAR_8->m.rptr);
  VAR_21 = FUNC_2(VAR_13->rxd_val1);

  VAR_22 = FUNC_1(VAR_13->len);

  VAR_23 = FUNC_1(VAR_13->rxd_vlan);

  FUNC_20(VAR_13, VAR_21, VAR_22, VAR_23);

  VAR_16 = FUNC_4(VAR_21) << 3;
  FUNC_0(VAR_16 <= 0);
  VAR_17 -= VAR_16;
  if (VAR_17 < 0)
   break;

  VAR_8->m.rptr += VAR_16;

  VAR_16 = VAR_8->m.rptr - VAR_8->m.memsz;
  if (FUNC_24(VAR_16 >= 0)) {
   VAR_8->m.rptr = VAR_16;
   if (VAR_16 > 0) {
    FUNC_3("wrapped desc rptr=%d tmp_len=%d\n",
        VAR_8->m.rptr, VAR_16);
    FUNC_16(VAR_8->m.va + VAR_8->m.memsz, VAR_8->m.va, VAR_16);
   }
  }

  if (FUNC_24(FUNC_5(VAR_21))) {
   FUNC_3("rxd_err = 0x%x\n", FUNC_5(VAR_21));
   VAR_10->stats.rx_errors++;
   FUNC_11(VAR_7, VAR_13);
   continue;
  }

  VAR_15 = &VAR_7->rxf_fifo0;
  VAR_20 = VAR_7->rxdb;
  VAR_14 = FUNC_13(VAR_20, VAR_13->va_lo);
  VAR_11 = VAR_14->skb;

  if (VAR_22 < VAR_0 &&
      (VAR_12 = FUNC_17(VAR_7->ndev, VAR_22 + VAR_4))) {
   FUNC_23(VAR_12, VAR_4);

   FUNC_18(VAR_7->pdev,
          VAR_14->dma, VAR_15->m.pktsz,
          VAR_5);
   FUNC_16(VAR_12->data, VAR_11->data, VAR_22);
   FUNC_11(VAR_7, VAR_13);
   VAR_11 = VAR_12;
  } else {
   FUNC_19(VAR_7->pdev,
      VAR_14->dma, VAR_15->m.pktsz,
      VAR_5);
   FUNC_14(VAR_20, VAR_13->va_lo);
  }

  VAR_10->stats.rx_bytes += VAR_22;

  FUNC_22(VAR_11, VAR_22);
  VAR_11->protocol = FUNC_15(VAR_11, VAR_10);


  if (FUNC_6(VAR_21) == 0)
   FUNC_21(VAR_11);
  else
   VAR_11->ip_summed = VAR_2;

  FUNC_7(VAR_7, VAR_21, VAR_23, VAR_11);

  if (++VAR_18 >= VAR_19)
   break;
 }

 VAR_10->stats.rx_packets += VAR_18;


 FUNC_10(VAR_7, VAR_8->m.reg_RPTR, VAR_8->m.rptr & VAR_6);

 FUNC_12(VAR_7, &VAR_7->rxf_fifo0);

 FUNC_9(VAR_18);
}
