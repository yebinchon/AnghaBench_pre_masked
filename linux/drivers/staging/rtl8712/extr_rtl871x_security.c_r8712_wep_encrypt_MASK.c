
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef size_t u32 ;
struct xmit_priv {size_t frag_len; } ;
struct pkt_attrib {scalar_t__ encrypt; size_t nr_frags; int hdrlen; int iv_len; size_t last_txcmdsz; size_t icv_len; } ;
struct xmit_frame {unsigned char* buf_addr; struct pkt_attrib attrib; } ;
struct security_priv {size_t PrivacyKeyIndex; size_t* DefKeylen; TYPE_1__* DefKey; } ;
struct arc4context {int dummy; } ;
struct _adapter {struct xmit_priv xmitpriv; struct security_priv securitypriv; } ;
typedef int addr_t ;
typedef int __le32 ;
struct TYPE_2__ {unsigned char* skey; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct arc4context*,unsigned char*,unsigned char*,int) ;
 int FUNC_2 (struct arc4context*,unsigned char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;

void FUNC_6(struct _adapter *VAR_3, u8 *VAR_4)
{
 unsigned char VAR_5[4];
 struct arc4context VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u8 *VAR_11, *VAR_12, *VAR_13;
 u8 VAR_14[16];
 struct pkt_attrib *VAR_15 = &((struct xmit_frame *)
           VAR_4)->attrib;
 struct security_priv *VAR_16 = &VAR_3->securitypriv;
 struct xmit_priv *VAR_17 = &VAR_3->xmitpriv;

 if (((struct xmit_frame *)VAR_4)->buf_addr == ((void*)0))
  return;
 VAR_11 = ((struct xmit_frame *)VAR_4)->buf_addr + VAR_0;

 if ((VAR_15->encrypt == VAR_2) || (VAR_15->encrypt == VAR_1)) {
  VAR_10 = VAR_16->PrivacyKeyIndex;
  VAR_9 = VAR_16->DefKeylen[VAR_10];
  for (VAR_7 = 0; VAR_7 < VAR_15->nr_frags;
       VAR_7++) {
   VAR_13 = VAR_11 + VAR_15->hdrlen;
   FUNC_5(&VAR_14[0], VAR_13, 3);
   FUNC_5(&VAR_14[3], &VAR_16->DefKey[
    VAR_16->PrivacyKeyIndex].skey[0],
    VAR_9);
   VAR_12 = VAR_11 + VAR_15->iv_len + VAR_15->hdrlen;
   if ((VAR_7 + 1) == VAR_15->nr_frags) {
    VAR_8 = VAR_15->last_txcmdsz -
     VAR_15->hdrlen -
     VAR_15->iv_len -
     VAR_15->icv_len;
    *((__le32 *)VAR_5) = FUNC_3(FUNC_4(
      VAR_12, VAR_8));
    FUNC_2(&VAR_6, VAR_14, 3 + VAR_9);
    FUNC_1(&VAR_6, VAR_12, VAR_12,
      VAR_8);
    FUNC_1(&VAR_6, VAR_12 + VAR_8,
      VAR_5, 4);
   } else {
    VAR_8 = VAR_17->frag_len -
      VAR_15->hdrlen - VAR_15->iv_len -
      VAR_15->icv_len;
    *((__le32 *)VAR_5) = FUNC_3(FUNC_4(
      VAR_12, VAR_8));
    FUNC_2(&VAR_6, VAR_14, 3 + VAR_9);
    FUNC_1(&VAR_6, VAR_12, VAR_12,
      VAR_8);
    FUNC_1(&VAR_6, VAR_12 + VAR_8,
      VAR_5, 4);
    VAR_11 += VAR_17->frag_len;
    VAR_11 = (u8 *)FUNC_0((addr_t)(VAR_11));
   }
  }
 }
}
