
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u16 ;
struct sk_buff {int len; int pkt_type; struct net_device* dev; scalar_t__ data; } ;
struct TYPE_14__ {char src_mac; int vlan_id; } ;
struct TYPE_15__ {TYPE_3__ rx; } ;
struct TYPE_16__ {int flags; int ext_flags; TYPE_4__ next_hop; int vlan_id; } ;
struct TYPE_17__ {TYPE_5__ l3; } ;
struct qeth_hdr {TYPE_6__ hdr; } ;
struct TYPE_13__ {scalar_t__ sniffer; } ;
struct qeth_card {TYPE_2__ options; TYPE_7__* dev; } ;
struct net_device {int dev_addr; } ;
struct af_iucv_trans_hdr {scalar_t__ magic; } ;
struct TYPE_19__ {int daddr; } ;
struct TYPE_18__ {TYPE_1__* header_ops; int dev_addr; int broadcast; } ;
struct TYPE_12__ {int (* create ) (struct sk_buff*,TYPE_7__*,int ,unsigned char*,char*,int ) ;} ;
struct TYPE_11__ {int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int VAR_5 ;
 int FUNC_1 (struct qeth_card*,int ) ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,scalar_t__,int ,char*,int ) ;
 int FUNC_4 (unsigned char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned char*) ;
 TYPE_10__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,unsigned char*) ;
 TYPE_9__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct qeth_card*,struct sk_buff*,int) ;
 int VAR_12 ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,TYPE_7__*,int ,unsigned char*,char*,int ) ;
 int FUNC_13 (struct sk_buff*,TYPE_7__*,int ,unsigned char*,char*,int ) ;

__attribute__((used)) static void FUNC_14(struct qeth_card *VAR_13, struct sk_buff *VAR_14,
    struct qeth_hdr *VAR_15)
{
 struct af_iucv_trans_hdr *VAR_16 = (struct af_iucv_trans_hdr *) VAR_14->data;
 struct net_device *VAR_17 = VAR_14->dev;

 if (FUNC_0(VAR_13) && VAR_16->magic == VAR_2) {
  FUNC_3(VAR_14, VAR_17, VAR_2, VAR_17->dev_addr,
    "FAKELL", VAR_14->len);
  return;
 }

 if (!(VAR_15->hdr.l3.flags & VAR_11)) {
  u16 VAR_18 = (VAR_15->hdr.l3.flags & VAR_10) ? VAR_4 :
         VAR_3;
  unsigned char VAR_19[VAR_0];

  FUNC_11(VAR_14);
  switch (VAR_15->hdr.l3.flags & VAR_6) {
  case 128:
   if (VAR_18 == VAR_3)
    FUNC_6(FUNC_7(VAR_14)->daddr, VAR_19);
   else
    FUNC_8(&FUNC_9(VAR_14)->daddr, VAR_19);
   FUNC_1(VAR_13, VAR_12);
   break;
  case 129:
   FUNC_4(VAR_19, VAR_13->dev->broadcast);
   FUNC_1(VAR_13, VAR_12);
   break;
  default:
   if (VAR_13->options.sniffer)
    VAR_14->pkt_type = VAR_5;
   FUNC_4(VAR_19, VAR_13->dev->dev_addr);
  }

  if (VAR_15->hdr.l3.ext_flags & VAR_8)
   VAR_13->dev->header_ops->create(VAR_14, VAR_13->dev, VAR_18,
    VAR_19, &VAR_15->hdr.l3.next_hop.rx.src_mac,
    VAR_14->len);
  else
   VAR_13->dev->header_ops->create(VAR_14, VAR_13->dev, VAR_18,
    VAR_19, "FAKELL", VAR_14->len);
 }


 if (!VAR_13->options.sniffer &&
     (VAR_15->hdr.l3.ext_flags & (VAR_9 |
          VAR_7))) {
  u16 VAR_20 = (VAR_15->hdr.l3.ext_flags & VAR_9) ?
    VAR_15->hdr.l3.vlan_id :
    VAR_15->hdr.l3.next_hop.rx.vlan_id;
  FUNC_2(VAR_14, FUNC_5(VAR_1), VAR_20);
 }

 FUNC_10(VAR_13, VAR_14, VAR_15->hdr.l3.ext_flags);
}
