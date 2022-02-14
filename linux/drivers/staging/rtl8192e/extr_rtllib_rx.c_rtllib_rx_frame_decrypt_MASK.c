
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int* data; scalar_t__ cb; } ;
struct rtllib_hdr_4addr {int addr2; int frame_ctl; } ;
struct rtllib_device {int dev; scalar_t__ need_sw_enc; scalar_t__ hwsec_active; } ;
struct lib80211_crypt_data {int refcnt; int priv; TYPE_1__* ops; } ;
struct cb_desc {int bHwSec; } ;
struct TYPE_2__ {int (* decrypt_mpdu ) (struct sk_buff*,int,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int,int ) ;

__attribute__((used)) static inline int
FUNC_6(struct rtllib_device *VAR_1, struct sk_buff *VAR_2,
   struct lib80211_crypt_data *VAR_3)
{
 struct rtllib_hdr_4addr *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3 == ((void*)0) || VAR_3->ops->decrypt_mpdu == ((void*)0))
  return 0;

 if (VAR_1->hwsec_active) {
  struct cb_desc *VAR_7 = (struct cb_desc *)
      (VAR_2->cb + VAR_0);

  VAR_7->bHwSec = 1;

  if (VAR_1->need_sw_enc)
   VAR_7->bHwSec = 0;
 }

 VAR_4 = (struct rtllib_hdr_4addr *) VAR_2->data;
 VAR_6 = FUNC_4(FUNC_2(VAR_4->frame_ctl));

 FUNC_1(&VAR_3->refcnt);
 VAR_5 = VAR_3->ops->decrypt_mpdu(VAR_2, VAR_6, VAR_3->priv);
 FUNC_0(&VAR_3->refcnt);
 if (VAR_5 < 0) {
  FUNC_3(VAR_1->dev, "decryption failed (SA= %pM) res=%d\n",
      VAR_4->addr2, VAR_5);
  if (VAR_5 == -2)
   FUNC_3(VAR_1->dev,
       "Decryption failed ICV mismatch (key %d)\n",
       VAR_2->data[VAR_6 + 3] >> 6);
  return -1;
 }

 return VAR_5;
}
