
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xmit_priv {scalar_t__ frag_len; } ;
struct pkt_attrib {scalar_t__ encrypt; scalar_t__ nr_frags; int hdrlen; int iv_len; scalar_t__ last_txcmdsz; scalar_t__ icv_len; int ra; } ;
struct xmit_frame {int* buf_addr; struct pkt_attrib attrib; } ;
struct security_priv {int* dot11DefKeylen; size_t dot11PrivacyKeyIndex; TYPE_1__* dot11DefKey; } ;
struct arc4context {int dummy; } ;
struct adapter {struct xmit_priv xmitpriv; struct security_priv securitypriv; } ;
typedef scalar_t__ sint ;
typedef int __le32 ;
struct TYPE_2__ {int* skey; } ;
typedef int SIZE_PTR ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct security_priv*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct arc4context*,int*,...) ;
 int FUNC_3 (struct arc4context*,int*,int) ;
 int FUNC_4 (int*,scalar_t__) ;
 int FUNC_5 (int*,int*,int) ;

void FUNC_6(struct adapter *VAR_3, u8 *VAR_4)
{

 unsigned char VAR_5[4];
 struct arc4context VAR_6;

 sint VAR_7, VAR_8;
 u32 VAR_9;

 u8 *VAR_10, *VAR_11, *VAR_12;
 u8 VAR_13[16];
 u8 VAR_14 = 0;
 struct pkt_attrib *VAR_15 = &((struct xmit_frame *)VAR_4)->attrib;
 struct security_priv *VAR_16 = &VAR_3->securitypriv;
 struct xmit_priv *VAR_17 = &VAR_3->xmitpriv;

 if (((struct xmit_frame *)VAR_4)->buf_addr == ((void*)0))
  return;

 VAR_14 = VAR_0;
 VAR_10 = ((struct xmit_frame *)VAR_4)->buf_addr + VAR_14;


 if ((VAR_15->encrypt == VAR_2) || (VAR_15->encrypt == VAR_1)) {
  VAR_9 = VAR_16->dot11DefKeylen[VAR_16->dot11PrivacyKeyIndex];

  for (VAR_7 = 0; VAR_7 < VAR_15->nr_frags; VAR_7++) {
   VAR_12 = VAR_10+VAR_15->hdrlen;
   FUNC_5(&VAR_13[0], VAR_12, 3);
   FUNC_5(&VAR_13[3], &VAR_16->dot11DefKey[VAR_16->dot11PrivacyKeyIndex].skey[0], VAR_9);
   VAR_11 = VAR_10+VAR_15->iv_len+VAR_15->hdrlen;

   if ((VAR_7+1) == VAR_15->nr_frags) {

    VAR_8 = VAR_15->last_txcmdsz-VAR_15->hdrlen-VAR_15->iv_len-VAR_15->icv_len;

    *((__le32 *)VAR_5) = FUNC_4(VAR_11, VAR_8);

    FUNC_3(&VAR_6, VAR_13, 3+VAR_9);
    FUNC_2(&VAR_6, VAR_11, VAR_11, VAR_8);
    FUNC_2(&VAR_6, VAR_11+VAR_8, VAR_5, 4);

   } else {
    VAR_8 = VAR_17->frag_len-VAR_15->hdrlen-VAR_15->iv_len-VAR_15->icv_len;
    *((__le32 *)VAR_5) = FUNC_4(VAR_11, VAR_8);
    FUNC_3(&VAR_6, VAR_13, 3+VAR_9);
    FUNC_2(&VAR_6, VAR_11, VAR_11, VAR_8);
    FUNC_2(&VAR_6, VAR_11+VAR_8, VAR_5, 4);

    VAR_10 += VAR_17->frag_len;
    VAR_10 = (u8 *)FUNC_0((SIZE_PTR)(VAR_10));
   }
  }

  FUNC_1(VAR_16, VAR_15->ra);
 }
}
