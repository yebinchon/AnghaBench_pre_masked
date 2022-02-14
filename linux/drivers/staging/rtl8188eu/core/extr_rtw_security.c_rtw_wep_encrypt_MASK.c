
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xmit_priv {int frag_len; } ;
struct pkt_attrib {scalar_t__ encrypt; int nr_frags; int last_txcmdsz; int hdrlen; } ;
struct xmit_frame {int* buf_addr; int pkt_offset; struct pkt_attrib attrib; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct security_priv {int dot11PrivacyKeyIndex; int * dot11DefKeylen; TYPE_1__* dot11DefKey; } ;
struct lib80211_crypto_ops {scalar_t__ (* set_key ) (int ,int ,int *,void*) ;int (* deinit ) (void*) ;scalar_t__ (* encrypt_mpdu ) (struct sk_buff*,int ,void*) ;void* (* init ) (int const) ;} ;
struct adapter {struct xmit_priv xmitpriv; struct security_priv securitypriv; } ;
struct TYPE_2__ {int skey; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct lib80211_crypto_ops* FUNC_2 (char*) ;
 int FUNC_3 (int*,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (size_t,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int*,int) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 void* FUNC_9 (int const) ;
 scalar_t__ FUNC_10 (int ,int ,int *,void*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,void*) ;
 int FUNC_12 (void*) ;

void FUNC_13(struct adapter *VAR_4, u8 *VAR_5)
{
 int VAR_6, VAR_7;
 u8 *VAR_8;
 u8 VAR_9 = 0;
 struct pkt_attrib *VAR_10 = &((struct xmit_frame *)VAR_5)->attrib;
 struct security_priv *VAR_11 = &VAR_4->securitypriv;
 struct xmit_priv *VAR_12 = &VAR_4->xmitpriv;
 const int VAR_13 = VAR_11->dot11PrivacyKeyIndex;
 void *VAR_14;
 struct sk_buff *VAR_15;
 struct lib80211_crypto_ops *VAR_16;

 if (((struct xmit_frame *)VAR_5)->buf_addr == ((void*)0))
  return;

 if ((VAR_10->encrypt != VAR_3) && (VAR_10->encrypt != VAR_2))
  return;

 VAR_9 = VAR_1 +
   (((struct xmit_frame *)VAR_5)->pkt_offset * VAR_0);

 VAR_8 = ((struct xmit_frame *)VAR_5)->buf_addr + VAR_9;

 VAR_16 = FUNC_2("WEP");

 if (!VAR_16)
  return;

 VAR_14 = VAR_16->init(VAR_13);
 if (!VAR_14)
  return;

 if (VAR_16->set_key(VAR_11->dot11DefKey[VAR_13].skey,
    VAR_11->dot11DefKeylen[VAR_13], ((void*)0), VAR_14) < 0)
  goto free_crypto_private;

 for (VAR_6 = 0; VAR_6 < VAR_10->nr_frags; VAR_6++) {
  if (VAR_6 + 1 == VAR_10->nr_frags)
   VAR_7 = VAR_10->last_txcmdsz;
  else
   VAR_7 = VAR_12->frag_len;
  VAR_15 = FUNC_0(VAR_7);
  if (!VAR_15)
   goto free_crypto_private;

  FUNC_7(VAR_15, VAR_8, VAR_7);

  FUNC_4(VAR_15->data + 4, VAR_15->data, VAR_10->hdrlen);
  FUNC_6(VAR_15, 4);
  FUNC_8(VAR_15, VAR_15->len - 4);

  if (VAR_16->encrypt_mpdu(VAR_15, VAR_10->hdrlen, VAR_14)) {
   FUNC_1(VAR_15);
   goto free_crypto_private;
  }

  FUNC_3(VAR_8, VAR_15->data, VAR_15->len);

  VAR_8 += VAR_15->len;
  VAR_8 = (u8 *)FUNC_5((size_t)(VAR_8), 4);

  FUNC_1(VAR_15);
 }

free_crypto_private:
 VAR_16->deinit(VAR_14);
}
