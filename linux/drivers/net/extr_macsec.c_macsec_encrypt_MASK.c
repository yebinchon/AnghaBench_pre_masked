
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {size_t len; int dev; } ;
struct scatterlist {int dummy; } ;
struct TYPE_6__ {int OutPktsTooLong; } ;
struct pcpu_secy_stats {int syncp; TYPE_2__ stats; } ;
struct net_device {int dummy; } ;
struct macsec_tx_sc {size_t encoding_sa; scalar_t__ encrypt; int * sa; } ;
struct TYPE_7__ {int tfm; } ;
struct macsec_tx_sa {TYPE_3__ key; } ;
struct macsec_secy {int operational; int icv_len; int sci; struct macsec_tx_sc tx_sc; } ;
struct macsec_eth_header {int dummy; } ;
struct macsec_dev {int stats; TYPE_1__* real_dev; struct macsec_secy secy; } ;
struct ethhdr {int dummy; } ;
struct aead_request {int dummy; } ;
struct TYPE_8__ {struct macsec_tx_sa* tx_sa; struct aead_request* req; } ;
struct TYPE_5__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int) ;
 int FUNC_3 (struct aead_request*,int ,int ,struct sk_buff*) ;
 int FUNC_4 (struct aead_request*,struct scatterlist*,struct scatterlist*,int,unsigned char*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct aead_request*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct ethhdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 struct aead_request* FUNC_12 (int ,unsigned char**,struct scatterlist**,int) ;
 int VAR_9 ;
 int FUNC_13 (int) ;
 int FUNC_14 (unsigned char*,int ,scalar_t__) ;
 int FUNC_15 (struct macsec_eth_header*,struct macsec_secy*,scalar_t__,int) ;
 int FUNC_16 (int) ;
 struct macsec_dev* FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct macsec_eth_header*,size_t) ;
 TYPE_4__* FUNC_19 (struct sk_buff*) ;
 struct macsec_tx_sa* FUNC_20 (int ) ;
 int FUNC_21 (struct macsec_tx_sa*) ;
 int FUNC_22 (struct macsec_eth_header*,struct ethhdr*,int) ;
 int FUNC_23 (struct macsec_secy*) ;
 int FUNC_24 (struct scatterlist*,int) ;
 struct sk_buff* FUNC_25 (struct sk_buff*,scalar_t__,scalar_t__,int ) ;
 int FUNC_26 (struct sk_buff*,int ,struct sk_buff**) ;
 scalar_t__ FUNC_27 (struct sk_buff*) ;
 struct macsec_eth_header* FUNC_28 (struct sk_buff*,int ) ;
 int FUNC_29 (struct sk_buff*,int) ;
 scalar_t__ FUNC_30 (struct sk_buff*) ;
 int FUNC_31 (struct sk_buff*,struct scatterlist*,int ,size_t) ;
 struct sk_buff* FUNC_32 (struct sk_buff*,int ) ;
 struct pcpu_secy_stats* FUNC_33 (int ) ;
 scalar_t__ FUNC_34 (struct macsec_tx_sa*,struct macsec_secy*) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 scalar_t__ FUNC_37 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_38(struct sk_buff *VAR_10,
          struct net_device *VAR_11)
{
 int VAR_12;
 struct scatterlist *VAR_13;
 struct sk_buff *VAR_14;
 unsigned char *VAR_15;
 struct ethhdr *VAR_16;
 struct macsec_eth_header *VAR_17;
 size_t VAR_18;
 struct aead_request *VAR_19;
 struct macsec_secy *VAR_20;
 struct macsec_tx_sc *VAR_21;
 struct macsec_tx_sa *VAR_22;
 struct macsec_dev *VAR_23 = FUNC_17(VAR_11);
 bool VAR_24;
 u32 VAR_25;

 VAR_20 = &VAR_23->secy;
 VAR_21 = &VAR_20->tx_sc;


 VAR_22 = FUNC_20(VAR_21->sa[VAR_21->encoding_sa]);
 if (!VAR_22) {
  VAR_20->operational = 0;
  FUNC_10(VAR_10);
  return FUNC_0(-VAR_1);
 }

 if (FUNC_37(FUNC_27(VAR_10) < VAR_7 ||
       FUNC_30(VAR_10) < VAR_8)) {
  struct sk_buff *VAR_26 = FUNC_25(VAR_10,
             VAR_7,
             VAR_8,
             VAR_6);
  if (FUNC_11(VAR_26)) {
   FUNC_5(VAR_10);
   VAR_10 = VAR_26;
  } else {
   FUNC_21(VAR_22);
   FUNC_10(VAR_10);
   return FUNC_0(-VAR_3);
  }
 } else {
  VAR_10 = FUNC_32(VAR_10, VAR_6);
  if (!VAR_10) {
   FUNC_21(VAR_22);
   return FUNC_0(-VAR_3);
  }
 }

 VAR_18 = VAR_10->len;
 VAR_16 = FUNC_9(VAR_10);
 VAR_24 = FUNC_23(VAR_20);
 VAR_17 = FUNC_28(VAR_10, FUNC_13(VAR_24));
 FUNC_22(VAR_17, VAR_16, 2 * VAR_4);

 VAR_25 = FUNC_34(VAR_22, VAR_20);
 if (VAR_25 == 0) {
  FUNC_21(VAR_22);
  FUNC_10(VAR_10);
  return FUNC_0(-VAR_2);
 }
 FUNC_15(VAR_17, VAR_20, VAR_25, VAR_24);
 FUNC_18(VAR_17, VAR_18 - 2 * VAR_4);

 FUNC_29(VAR_10, VAR_20->icv_len);

 if (VAR_10->len - VAR_5 > FUNC_17(VAR_11)->real_dev->mtu) {
  struct pcpu_secy_stats *VAR_27 = FUNC_33(VAR_23->stats);

  FUNC_35(&VAR_27->syncp);
  VAR_27->stats.OutPktsTooLong++;
  FUNC_36(&VAR_27->syncp);

  FUNC_21(VAR_22);
  FUNC_10(VAR_10);
  return FUNC_0(-VAR_1);
 }

 VAR_12 = FUNC_26(VAR_10, 0, &VAR_14);
 if (FUNC_37(VAR_12 < 0)) {
  FUNC_21(VAR_22);
  FUNC_10(VAR_10);
  return FUNC_0(VAR_12);
 }

 VAR_19 = FUNC_12(VAR_22->key.tfm, &VAR_15, &VAR_13, VAR_12);
 if (!VAR_19) {
  FUNC_21(VAR_22);
  FUNC_10(VAR_10);
  return FUNC_0(-VAR_3);
 }

 FUNC_14(VAR_15, VAR_20->sci, VAR_25);

 FUNC_24(VAR_13, VAR_12);
 VAR_12 = FUNC_31(VAR_10, VAR_13, 0, VAR_10->len);
 if (FUNC_37(VAR_12 < 0)) {
  FUNC_1(VAR_19);
  FUNC_21(VAR_22);
  FUNC_10(VAR_10);
  return FUNC_0(VAR_12);
 }

 if (VAR_21->encrypt) {
  int VAR_28 = VAR_10->len - FUNC_16(VAR_24) -
     VAR_20->icv_len;
  FUNC_4(VAR_19, VAR_13, VAR_13, VAR_28, VAR_15);
  FUNC_2(VAR_19, FUNC_16(VAR_24));
 } else {
  FUNC_4(VAR_19, VAR_13, VAR_13, 0, VAR_15);
  FUNC_2(VAR_19, VAR_10->len - VAR_20->icv_len);
 }

 FUNC_19(VAR_10)->req = VAR_19;
 FUNC_19(VAR_10)->tx_sa = VAR_22;
 FUNC_3(VAR_19, 0, VAR_9, VAR_10);

 FUNC_7(VAR_10->dev);
 VAR_12 = FUNC_6(VAR_19);
 if (VAR_12 == -VAR_0) {
  return FUNC_0(VAR_12);
 } else if (VAR_12 != 0) {
  FUNC_8(VAR_10->dev);
  FUNC_10(VAR_10);
  FUNC_1(VAR_19);
  FUNC_21(VAR_22);
  return FUNC_0(-VAR_1);
 }

 FUNC_8(VAR_10->dev);
 FUNC_1(VAR_19);
 FUNC_21(VAR_22);

 return VAR_10;
}
