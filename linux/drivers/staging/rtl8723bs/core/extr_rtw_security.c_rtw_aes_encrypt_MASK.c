
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xmit_priv {scalar_t__ frag_len; } ;
struct TYPE_4__ {int* skey; } ;
struct pkt_attrib {scalar_t__ encrypt; scalar_t__ nr_frags; scalar_t__ last_txcmdsz; scalar_t__ hdrlen; scalar_t__ iv_len; scalar_t__ icv_len; int ra; TYPE_2__ dot118021x_UncstKey; } ;
struct xmit_frame {int* buf_addr; struct pkt_attrib attrib; } ;
struct security_priv {size_t dot118021XGrpKeyid; TYPE_1__* dot118021XGrpKey; } ;
struct adapter {struct xmit_priv xmitpriv; struct security_priv securitypriv; } ;
typedef scalar_t__ sint ;
struct TYPE_3__ {int* skey; } ;
typedef int SIZE_PTR ;


 int FUNC_0 (struct security_priv*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int*,scalar_t__,int*,scalar_t__) ;

u32 FUNC_5(struct adapter *VAR_6, u8 *VAR_7)
{






 sint VAR_8, VAR_9;
 u32 VAR_10;
 u8 *VAR_11, *VAR_12;
 u8 VAR_13 = 0;

 struct pkt_attrib *VAR_14 = &((struct xmit_frame *)VAR_7)->attrib;
 struct security_priv *VAR_15 = &VAR_6->securitypriv;
 struct xmit_priv *VAR_16 = &VAR_6->xmitpriv;


 u32 VAR_17 = VAR_3;

 if (((struct xmit_frame *)VAR_7)->buf_addr == ((void*)0))
  return VAR_2;

 VAR_13 = VAR_0;
 VAR_11 = ((struct xmit_frame *)VAR_7)->buf_addr + VAR_13;


 if (VAR_14->encrypt == VAR_1) {
  FUNC_3(VAR_5, VAR_4, ("rtw_aes_encrypt: stainfo!= NULL!!!\n"));

  if (FUNC_1(VAR_14->ra))
   VAR_12 = VAR_15->dot118021XGrpKey[VAR_15->dot118021XGrpKeyid].skey;
  else

   VAR_12 = VAR_14->dot118021x_UncstKey.skey;

  VAR_10 = 16;

  for (VAR_8 = 0; VAR_8 < VAR_14->nr_frags; VAR_8++) {
   if ((VAR_8+1) == VAR_14->nr_frags) {
    VAR_9 = VAR_14->last_txcmdsz-VAR_14->hdrlen-VAR_14->iv_len-VAR_14->icv_len;

    FUNC_4(VAR_12, VAR_14->hdrlen, VAR_11, VAR_9);
   } else {
    VAR_9 = VAR_16->frag_len-VAR_14->hdrlen-VAR_14->iv_len-VAR_14->icv_len;

    FUNC_4(VAR_12, VAR_14->hdrlen, VAR_11, VAR_9);
    VAR_11 += VAR_16->frag_len;
    VAR_11 = (u8 *)FUNC_2((SIZE_PTR)(VAR_11));
   }
  }

  FUNC_0(VAR_15, VAR_14->ra);
 }
 return VAR_17;
}
