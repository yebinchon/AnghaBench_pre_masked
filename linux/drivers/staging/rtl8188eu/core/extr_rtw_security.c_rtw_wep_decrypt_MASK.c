
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct sk_buff {char* data; int len; } ;
struct security_priv {int * dot11DefKeylen; TYPE_1__* dot11DefKey; } ;
struct rx_pkt_attrib {scalar_t__ encrypt; int key_index; int hdrlen; } ;
struct recv_frame {struct sk_buff* pkt; struct rx_pkt_attrib attrib; } ;
struct lib80211_crypto_ops {scalar_t__ (* set_key ) (int ,int ,int *,void*) ;int (* deinit ) (void*) ;scalar_t__ (* decrypt_mpdu ) (struct sk_buff*,int,void*) ;void* (* init ) (int const) ;} ;
struct adapter {struct security_priv securitypriv; } ;
struct TYPE_2__ {int skey; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct lib80211_crypto_ops* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 void* FUNC_5 (int const) ;
 scalar_t__ FUNC_6 (int ,int ,int *,void*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int,void*) ;
 int FUNC_8 (void*) ;

int FUNC_9(struct adapter *VAR_4, u8 *VAR_5)
{
 struct rx_pkt_attrib *VAR_6 = &(((struct recv_frame *)VAR_5)->attrib);

 if ((VAR_6->encrypt == VAR_3) || (VAR_6->encrypt == VAR_2)) {
  struct security_priv *VAR_7 = &VAR_4->securitypriv;
  struct sk_buff *VAR_8 = ((struct recv_frame *)VAR_5)->pkt;
  u8 *VAR_9 = VAR_8->data;
  void *VAR_10 = ((void*)0);
  int VAR_11 = VAR_1;
  const int VAR_12 = VAR_6->key_index;
  struct lib80211_crypto_ops *VAR_13 = FUNC_0("WEP");
  char VAR_14[4], VAR_15[4];

  if (!VAR_13) {
   VAR_11 = VAR_0;
   goto exit;
  }

  FUNC_1(VAR_14, VAR_9 + VAR_6->hdrlen, 4);
  FUNC_1(VAR_15, VAR_9 + VAR_8->len - 4, 4);

  VAR_10 = VAR_13->init(VAR_12);
  if (!VAR_10) {
   VAR_11 = VAR_0;
   goto exit;
  }
  if (VAR_13->set_key(VAR_7->dot11DefKey[VAR_12].skey,
     VAR_7->dot11DefKeylen[VAR_12], ((void*)0), VAR_10) < 0) {
   VAR_11 = VAR_0;
   goto exit;
  }
  if (VAR_13->decrypt_mpdu(VAR_8, VAR_6->hdrlen, VAR_10)) {
   VAR_11 = VAR_0;
   goto exit;
  }

  FUNC_2(VAR_9, VAR_9 + 4, VAR_6->hdrlen);
  FUNC_3(VAR_8, 4);
  FUNC_4(VAR_8, 4);

  FUNC_1(VAR_9 + VAR_6->hdrlen, VAR_14, 4);
  FUNC_1(VAR_9 + VAR_8->len - 4, VAR_15, 4);

exit:
  if (VAR_13 && VAR_10)
   VAR_13->deinit(VAR_10);
  return VAR_11;
 }

 return VAR_0;
}
