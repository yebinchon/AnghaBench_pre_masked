
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xlgmac_pkt_info {int vlan_ctag; void* errors; void* attributes; int rss_hash_type; int rss_hash; } ;
struct xlgmac_ring {int cur; int dma_desc_count; struct xlgmac_pkt_info pkt_info; } ;
struct TYPE_3__ {int rx_split_header_packets; } ;
struct xlgmac_pdata {TYPE_1__ stats; struct net_device* netdev; } ;
struct xlgmac_dma_desc {int desc0; int desc3; int desc1; int desc2; } ;
struct TYPE_4__ {int hdr_len; int len; } ;
struct xlgmac_desc_data {TYPE_2__ rx; struct xlgmac_dma_desc* dma_desc; } ;
struct xlgmac_channel {int name; struct xlgmac_ring* rx_ring; struct xlgmac_pdata* pdata; } ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 struct xlgmac_desc_data* FUNC_0 (struct xlgmac_ring*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ,int,int) ;
 void* FUNC_3 (void*,int ,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct xlgmac_pdata*,int ,struct net_device*,char*,int,...) ;
 scalar_t__ FUNC_7 (struct xlgmac_pdata*) ;
 int VAR_42 ;
 int FUNC_8 (struct xlgmac_pdata*,struct xlgmac_ring*,int) ;
 int FUNC_9 (struct xlgmac_pkt_info*,struct xlgmac_dma_desc*) ;

__attribute__((used)) static int FUNC_10(struct xlgmac_channel *VAR_43)
{
 struct xlgmac_pdata *VAR_44 = VAR_43->pdata;
 struct xlgmac_ring *VAR_45 = VAR_43->rx_ring;
 struct net_device *VAR_46 = VAR_44->netdev;
 struct xlgmac_desc_data *VAR_47;
 struct xlgmac_dma_desc *VAR_48;
 struct xlgmac_pkt_info *VAR_49;
 unsigned int VAR_50, VAR_51, VAR_52;

 VAR_47 = FUNC_0(VAR_45, VAR_45->cur);
 VAR_48 = VAR_47->dma_desc;
 VAR_49 = &VAR_45->pkt_info;


 if (FUNC_1(VAR_48->desc3,
       VAR_23,
       VAR_22))
  return 1;


 FUNC_4();

 if (FUNC_7(VAR_44))
  FUNC_8(VAR_44, VAR_45, VAR_45->cur);

 if (FUNC_1(VAR_48->desc3,
       VAR_11,
       VAR_10)) {

  FUNC_9(VAR_49, VAR_48);

  VAR_49->attributes = FUNC_3(
     VAR_49->attributes,
     VAR_31,
     VAR_28,
     1);
  VAR_49->attributes = FUNC_3(
    VAR_49->attributes,
    VAR_30,
    VAR_29,
    0);
  return 0;
 }


 VAR_49->attributes = FUNC_3(
    VAR_49->attributes,
    VAR_31,
    VAR_28,
    0);


 if (FUNC_1(VAR_48->desc3,
       VAR_9,
       VAR_8))
  VAR_49->attributes = FUNC_3(
    VAR_49->attributes,
    VAR_30,
    VAR_29,
    1);


 if (FUNC_1(VAR_48->desc3,
       VAR_17,
       VAR_16)) {
  VAR_47->rx.hdr_len = FUNC_1(VAR_48->desc2,
       VAR_7,
       VAR_6);
  if (VAR_47->rx.hdr_len)
   VAR_44->stats.rx_split_header_packets++;
 }


 if (FUNC_1(VAR_48->desc3,
       VAR_27,
       VAR_26)) {
  VAR_49->attributes = FUNC_3(
    VAR_49->attributes,
    VAR_37,
    VAR_36,
    1);

  VAR_49->rss_hash = FUNC_5(VAR_48->desc1);

  VAR_52 = FUNC_1(VAR_48->desc3,
           VAR_19,
       VAR_18);
  switch (VAR_52) {
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_49->rss_hash_type = VAR_3;
   break;
  default:
   VAR_49->rss_hash_type = VAR_2;
  }
 }


 VAR_47->rx.len = FUNC_1(VAR_48->desc3,
     VAR_25,
     VAR_24);

 if (!FUNC_1(VAR_48->desc3,
        VAR_21,
        VAR_20)) {

  VAR_49->attributes = FUNC_3(
    VAR_49->attributes,
    VAR_35,
    VAR_34,
    1);
  return 0;
 }


 VAR_49->attributes = FUNC_3(
   VAR_49->attributes,
   VAR_35,
   VAR_34,
   0);


 if (VAR_46->features & VAR_1)
  VAR_49->attributes = FUNC_3(
    VAR_49->attributes,
    VAR_33,
    VAR_32,
    1);


 VAR_50 = FUNC_1(VAR_48->desc3,
         VAR_13,
         VAR_12);
 VAR_51 = FUNC_1(VAR_48->desc3,
          VAR_15,
          VAR_14);
 FUNC_6(VAR_44, VAR_42, VAR_46, "err=%u, etlt=%#x\n", VAR_50, VAR_51);

 if (!VAR_50 || !VAR_51) {

  if ((VAR_51 == 0x09) &&
      (VAR_46->features & VAR_0)) {
   VAR_49->attributes = FUNC_3(
     VAR_49->attributes,
     VAR_39,
     VAR_38,
     1);
   VAR_49->vlan_ctag =
    FUNC_1(VAR_48->desc0,
             VAR_5,
         VAR_4);
   FUNC_6(VAR_44, VAR_42, VAR_46, "vlan-ctag=%#06x\n",
      VAR_49->vlan_ctag);
  }
 } else {
  if ((VAR_51 == 0x05) || (VAR_51 == 0x06))
   VAR_49->attributes = FUNC_3(
     VAR_49->attributes,
     VAR_33,
     VAR_32,
     0);
  else
   VAR_49->errors = FUNC_3(
     VAR_49->errors,
     VAR_41,
     VAR_40,
     1);
 }

 FUNC_2("%s - descriptor=%u (cur=%d)\n", VAR_43->name,
    VAR_45->cur & (VAR_45->dma_desc_count - 1), VAR_45->cur);

 return 0;
}
