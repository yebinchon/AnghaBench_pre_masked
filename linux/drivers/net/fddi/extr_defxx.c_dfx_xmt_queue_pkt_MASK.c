
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
typedef void* u32 ;
struct sk_buff {int len; int * data; } ;
struct net_device {int name; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_13__ {struct sk_buff* p_skb; } ;
typedef TYPE_4__ XMT_DRIVER_DESCR ;
struct TYPE_11__ {size_t xmt_prod; size_t xmt_comp; } ;
struct TYPE_12__ {int lword; TYPE_2__ index; } ;
struct TYPE_15__ {scalar_t__ link_available; int lock; TYPE_3__ rcv_xmt_reg; TYPE_4__* xmt_drv_descr_blk; TYPE_1__* descr_block_virt; int bus_dev; int xmt_discards; int xmt_length_errors; } ;
struct TYPE_14__ {void* long_1; void* long_0; } ;
struct TYPE_10__ {TYPE_5__* xmt_data; } ;
typedef TYPE_5__ PI_XMT_DESCR ;
typedef TYPE_6__ DFX_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 TYPE_6__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_14(struct sk_buff *VAR_15,
         struct net_device *VAR_16)
 {
 DFX_board_t *VAR_17 = FUNC_6(VAR_16);
 u8 VAR_18;
 PI_XMT_DESCR *VAR_19;
 XMT_DRIVER_DESCR *VAR_20;
 dma_addr_t VAR_21;
 unsigned long VAR_22;

 FUNC_7(VAR_16);
 if (!FUNC_0(VAR_15->len, VAR_5, VAR_4))
 {
  FUNC_9("%s: Invalid packet length - %u bytes\n",
   VAR_16->name, VAR_15->len);
  VAR_17->xmt_length_errors++;
  FUNC_8(VAR_16);
  FUNC_1(VAR_15);
  return VAR_7;
 }
 if (VAR_17->link_available == VAR_8)
  {
  if (FUNC_2(VAR_17) == VAR_11)
   VAR_17->link_available = VAR_9;
  else
   {
   VAR_17->xmt_discards++;
   FUNC_1(VAR_15);
   FUNC_8(VAR_16);
   return VAR_7;
   }
  }



 FUNC_11(VAR_15, 3);
 VAR_15->data[0] = VAR_0;
 VAR_15->data[1] = VAR_1;
 VAR_15->data[2] = VAR_2;

 VAR_21 = FUNC_4(VAR_17->bus_dev, VAR_15->data, VAR_15->len,
      VAR_3);
 if (FUNC_5(VAR_17->bus_dev, VAR_21)) {
  FUNC_10(VAR_15, 3);
  return VAR_6;
 }

 FUNC_12(&VAR_17->lock, VAR_22);



 VAR_18 = VAR_17->rcv_xmt_reg.index.xmt_prod;
 VAR_19 = &(VAR_17->descr_block_virt->xmt_data[VAR_18]);
 VAR_20 = &(VAR_17->xmt_drv_descr_blk[VAR_18++]);
 VAR_19->long_0 = (u32) (VAR_13 | VAR_12 | ((VAR_15->len) << VAR_14));
 VAR_19->long_1 = (u32)VAR_21;
 if (VAR_18 == VAR_17->rcv_xmt_reg.index.xmt_comp)
 {
  FUNC_10(VAR_15,3);
  FUNC_13(&VAR_17->lock, VAR_22);
  return VAR_6;
 }
 VAR_20->p_skb = VAR_15;



 VAR_17->rcv_xmt_reg.index.xmt_prod = VAR_18;
 FUNC_3(VAR_17, VAR_10, VAR_17->rcv_xmt_reg.lword);
 FUNC_13(&VAR_17->lock, VAR_22);
 FUNC_8(VAR_16);
 return VAR_7;
 }
