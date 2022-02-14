
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct rocker_tlv {int dummy; } ;
struct rocker_port {int tx_ring; struct rocker* rocker; } ;
struct rocker_desc_info {int dummy; } ;
struct rocker {int dummy; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct net_device*,char*) ;
 struct rocker_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct rocker_desc_info*,struct sk_buff*) ;
 int FUNC_6 (struct rocker_desc_info*) ;
 struct rocker_desc_info* FUNC_7 (int *) ;
 int FUNC_8 (struct rocker*,int *,struct rocker_desc_info*) ;
 int FUNC_9 (struct rocker_desc_info*,struct rocker_tlv*) ;
 int FUNC_10 (struct rocker_desc_info*,struct rocker_tlv*) ;
 struct rocker_tlv* FUNC_11 (struct rocker_desc_info*,int ) ;
 int FUNC_12 (struct rocker_port*,struct rocker_desc_info*,int ,int ) ;
 int FUNC_13 (struct rocker_port*,struct rocker_desc_info*) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 TYPE_2__* FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_20(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct rocker_port *VAR_6 = FUNC_3(VAR_5);
 struct rocker *VAR_7 = VAR_6->rocker;
 struct rocker_desc_info *VAR_8;
 struct rocker_tlv *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_7(&VAR_6->tx_ring);
 if (FUNC_19(!VAR_8)) {
  if (FUNC_1())
   FUNC_2(VAR_5, "tx ring full when queue awake\n");
  return VAR_0;
 }

 FUNC_5(VAR_8, VAR_4);

 VAR_9 = FUNC_11(VAR_8, VAR_2);
 if (!VAR_9)
  goto out;
 VAR_11 = FUNC_12(VAR_6, VAR_8,
       VAR_4->data, FUNC_16(VAR_4));
 if (VAR_11)
  goto nest_cancel;
 if (FUNC_18(VAR_4)->nr_frags > VAR_3) {
  VAR_11 = FUNC_17(VAR_4);
  if (VAR_11)
   goto unmap_frags;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_18(VAR_4)->nr_frags; VAR_10++) {
  const skb_frag_t *VAR_12 = &FUNC_18(VAR_4)->frags[VAR_10];

  VAR_11 = FUNC_12(VAR_6, VAR_8,
        FUNC_14(VAR_12),
        FUNC_15(VAR_12));
  if (VAR_11)
   goto unmap_frags;
 }
 FUNC_10(VAR_8, VAR_9);

 FUNC_6(VAR_8);
 FUNC_8(VAR_7, &VAR_6->tx_ring, VAR_8);

 VAR_8 = FUNC_7(&VAR_6->tx_ring);
 if (!VAR_8)
  FUNC_4(VAR_5);

 return VAR_1;

unmap_frags:
 FUNC_13(VAR_6, VAR_8);
nest_cancel:
 FUNC_9(VAR_8, VAR_9);
out:
 FUNC_0(VAR_4);
 VAR_5->stats.tx_dropped++;

 return VAR_1;
}
