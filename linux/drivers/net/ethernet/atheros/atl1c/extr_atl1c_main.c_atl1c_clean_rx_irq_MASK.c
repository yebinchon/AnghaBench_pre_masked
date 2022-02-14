
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int protocol; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct atl1c_rrd_ring {int next_to_clean; } ;
struct atl1c_rfd_ring {struct atl1c_buffer* buffer_info; } ;
struct atl1c_recv_ret_status {int word3; int word0; int vlan_tag; } ;
struct atl1c_buffer {struct sk_buff* skb; int length; int dma; } ;
struct atl1c_adapter {struct atl1c_rrd_ring rrd_ring; struct atl1c_rfd_ring rfd_ring; struct net_device* netdev; struct pci_dev* pdev; } ;


 struct atl1c_recv_ret_status* FUNC_0 (struct atl1c_rrd_ring*,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (struct atl1c_adapter*) ;
 int FUNC_5 (struct atl1c_rfd_ring*,struct atl1c_recv_ret_status*,int) ;
 int FUNC_6 (struct atl1c_rrd_ring*,struct atl1c_recv_ret_status*,int) ;
 int FUNC_7 (struct atl1c_adapter*,struct sk_buff*,struct atl1c_recv_ret_status*) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct atl1c_adapter*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_16 (struct sk_buff*,int) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct atl1c_adapter *VAR_12,
     int *VAR_13, int VAR_14)
{
 u16 VAR_15, VAR_16;
 u16 VAR_17 = 0;
 u16 VAR_18;
 struct pci_dev *VAR_19 = VAR_12->pdev;
 struct net_device *VAR_20 = VAR_12->netdev;
 struct atl1c_rfd_ring *VAR_21 = &VAR_12->rfd_ring;
 struct atl1c_rrd_ring *VAR_22 = &VAR_12->rrd_ring;
 struct sk_buff *VAR_23;
 struct atl1c_recv_ret_status *VAR_24;
 struct atl1c_buffer *VAR_25;

 while (1) {
  if (*VAR_13 >= VAR_14)
   break;
  VAR_24 = FUNC_0(VAR_22, VAR_22->next_to_clean);
  if (FUNC_12(FUNC_2(VAR_24->word3))) {
   VAR_15 = (VAR_24->word0 >> VAR_8) &
    VAR_7;
   if (FUNC_17(VAR_15 != 1))

    if (FUNC_13(VAR_12))
     FUNC_8(&VAR_19->dev,
      "Multi rfd not support yet!\n");
   goto rrs_checked;
  } else {
   break;
  }
rrs_checked:
  FUNC_6(VAR_22, VAR_24, VAR_15);
  if (VAR_24->word3 & (VAR_6 | VAR_3)) {
   FUNC_5(VAR_21, VAR_24, VAR_15);
   if (FUNC_13(VAR_12))
    FUNC_8(&VAR_19->dev,
      "wrong packet! rrs word3 is %x\n",
      VAR_24->word3);
   continue;
  }

  VAR_18 = FUNC_11((VAR_24->word3 >> VAR_5) &
    VAR_4);

  if (FUNC_12(VAR_15 == 1)) {
   VAR_16 = (VAR_24->word0 >> VAR_10) &
     VAR_9;
   VAR_25 = &VAR_21->buffer_info[VAR_16];
   FUNC_15(VAR_19, VAR_25->dma,
    VAR_25->length, VAR_2);
   VAR_23 = VAR_25->skb;
  } else {

   if (FUNC_13(VAR_12))
    FUNC_8(&VAR_19->dev,
     "Multi rfd not support yet!\n");
   break;
  }
  FUNC_5(VAR_21, VAR_24, VAR_15);
  FUNC_16(VAR_23, VAR_18 - VAR_0);
  VAR_23->protocol = FUNC_9(VAR_23, VAR_20);
  FUNC_7(VAR_12, VAR_23, VAR_24);
  if (VAR_24->word3 & VAR_11) {
   u16 VAR_26;

   FUNC_1(VAR_24->vlan_tag, VAR_26);
   VAR_26 = FUNC_11(VAR_26);
   FUNC_3(VAR_23, FUNC_10(VAR_1), VAR_26);
  }
  FUNC_14(VAR_23);

  (*VAR_13)++;
  VAR_17++;
 }
 if (VAR_17)
  FUNC_4(VAR_12);
}
