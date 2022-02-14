
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; scalar_t__ cb; } ;
struct rtllib_hdr_4addr {int addr2; int frame_ctl; } ;
struct rtllib_device {int dev; scalar_t__ need_sw_enc; scalar_t__ hwsec_active; } ;
struct lib80211_crypt_data {int refcnt; int priv; TYPE_1__* ops; } ;
struct cb_desc {int bHwSec; } ;
struct TYPE_2__ {int (* decrypt_msdu ) (struct sk_buff*,int,int,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int,int,int ) ;

__attribute__((used)) static inline int
FUNC_6(struct rtllib_device *VAR_1, struct sk_buff *VAR_2,
        int VAR_3, struct lib80211_crypt_data *VAR_4)
{
 struct rtllib_hdr_4addr *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_4 == ((void*)0) || VAR_4->ops->decrypt_msdu == ((void*)0))
  return 0;
 if (VAR_1->hwsec_active) {
  struct cb_desc *VAR_8 = (struct cb_desc *)
      (VAR_2->cb + VAR_0);

  VAR_8->bHwSec = 1;

  if (VAR_1->need_sw_enc)
   VAR_8->bHwSec = 0;
 }

 VAR_5 = (struct rtllib_hdr_4addr *) VAR_2->data;
 VAR_7 = FUNC_4(FUNC_2(VAR_5->frame_ctl));

 FUNC_1(&VAR_4->refcnt);
 VAR_6 = VAR_4->ops->decrypt_msdu(VAR_2, VAR_3, VAR_7, VAR_4->priv);
 FUNC_0(&VAR_4->refcnt);
 if (VAR_6 < 0) {
  FUNC_3(VAR_1->dev,
      "MSDU decryption/MIC verification failed (SA= %pM keyidx=%d)\n",
      VAR_5->addr2, VAR_3);
  return -1;
 }

 return 0;
}
