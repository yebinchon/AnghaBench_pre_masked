
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; struct net_device* dev; scalar_t__ data; } ;
struct scatterlist {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_secy {int icv_len; } ;
struct TYPE_3__ {int tfm; } ;
struct macsec_rx_sa {TYPE_1__ key; } ;
struct macsec_eth_header {int tci_an; int packet_number; } ;
struct aead_request {int dummy; } ;
typedef int sci_t ;
struct TYPE_4__ {int valid; struct aead_request* req; int has_sci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int) ;
 int FUNC_3 (struct aead_request*,int ,int ,struct sk_buff*) ;
 int FUNC_4 (struct aead_request*,struct scatterlist*,struct scatterlist*,int,unsigned char*) ;
 int FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct aead_request* FUNC_9 (int ,unsigned char**,struct scatterlist**,int) ;
 int VAR_5 ;
 int FUNC_10 (unsigned char*,int ,int ) ;
 int FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct scatterlist*,int) ;
 int FUNC_15 (struct sk_buff*,int ,struct sk_buff**) ;
 struct sk_buff* FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (struct sk_buff*,struct scatterlist*,int ,int) ;
 struct sk_buff* FUNC_18 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_20(struct sk_buff *VAR_6,
          struct net_device *VAR_7,
          struct macsec_rx_sa *VAR_8,
          sci_t VAR_9,
          struct macsec_secy *VAR_10)
{
 int VAR_11;
 struct scatterlist *VAR_12;
 struct sk_buff *VAR_13;
 unsigned char *VAR_14;
 struct aead_request *VAR_15;
 struct macsec_eth_header *VAR_16;
 u16 VAR_17 = VAR_10->icv_len;

 FUNC_12(VAR_6)->valid = 0;
 VAR_6 = FUNC_16(VAR_6, VAR_3);
 if (!VAR_6)
  return FUNC_0(-VAR_2);

 VAR_11 = FUNC_15(VAR_6, 0, &VAR_13);
 if (FUNC_19(VAR_11 < 0)) {
  FUNC_8(VAR_6);
  return FUNC_0(VAR_11);
 }
 VAR_15 = FUNC_9(VAR_8->key.tfm, &VAR_14, &VAR_12, VAR_11);
 if (!VAR_15) {
  FUNC_8(VAR_6);
  return FUNC_0(-VAR_2);
 }

 VAR_16 = (struct macsec_eth_header *)VAR_6->data;
 FUNC_10(VAR_14, VAR_9, FUNC_13(VAR_16->packet_number));

 FUNC_14(VAR_12, VAR_11);
 VAR_11 = FUNC_17(VAR_6, VAR_12, 0, VAR_6->len);
 if (FUNC_19(VAR_11 < 0)) {
  FUNC_1(VAR_15);
  FUNC_8(VAR_6);
  return FUNC_0(VAR_11);
 }

 if (VAR_16->tci_an & VAR_4) {



  int VAR_18 = VAR_6->len - FUNC_11(FUNC_12(VAR_6)->has_sci);

  FUNC_4(VAR_15, VAR_12, VAR_12, VAR_18, VAR_14);
  FUNC_2(VAR_15, FUNC_11(FUNC_12(VAR_6)->has_sci));
  VAR_6 = FUNC_18(VAR_6, VAR_3);
  if (!VAR_6) {
   FUNC_1(VAR_15);
   return FUNC_0(-VAR_2);
  }
 } else {

  FUNC_4(VAR_15, VAR_12, VAR_12, VAR_17, VAR_14);
  FUNC_2(VAR_15, VAR_6->len - VAR_17);
 }

 FUNC_12(VAR_6)->req = VAR_15;
 VAR_6->dev = VAR_7;
 FUNC_3(VAR_15, 0, VAR_5, VAR_6);

 FUNC_6(VAR_7);
 VAR_11 = FUNC_5(VAR_15);
 if (VAR_11 == -VAR_1) {
  return FUNC_0(VAR_11);
 } else if (VAR_11 != 0) {



  if (VAR_11 != -VAR_0) {
   FUNC_8(VAR_6);
   VAR_6 = FUNC_0(VAR_11);
  }
 } else {
  FUNC_12(VAR_6)->valid = 1;
 }
 FUNC_7(VAR_7);

 FUNC_1(VAR_15);

 return VAR_6;
}
