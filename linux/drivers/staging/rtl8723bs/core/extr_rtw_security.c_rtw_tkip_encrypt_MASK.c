
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union pn48 {int val; } ;
typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct xmit_priv {scalar_t__ frag_len; } ;
struct TYPE_4__ {int* skey; } ;
struct pkt_attrib {scalar_t__ encrypt; scalar_t__ nr_frags; int hdrlen; int iv_len; scalar_t__ last_txcmdsz; scalar_t__ icv_len; int ra; int * ta; TYPE_2__ dot118021x_UncstKey; } ;
struct xmit_frame {int* buf_addr; struct pkt_attrib attrib; } ;
struct security_priv {size_t dot118021XGrpKeyid; TYPE_1__* dot118021XGrpKey; } ;
struct arc4context {int dummy; } ;
struct adapter {struct xmit_priv xmitpriv; struct security_priv securitypriv; } ;
typedef scalar_t__ sint ;
typedef int __le32 ;
struct TYPE_3__ {int* skey; } ;
typedef int SIZE_PTR ;


 int FUNC_0 (int*,union pn48) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (struct security_priv*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct arc4context*,int*,int*,int) ;
 int FUNC_6 (struct arc4context*,int*,int) ;
 int FUNC_7 (int*,scalar_t__) ;
 int FUNC_8 (scalar_t__*,int*,int *,int) ;
 int FUNC_9 (int*,int*,scalar_t__*,scalar_t__) ;

u32 FUNC_10(struct adapter *VAR_7, u8 *VAR_8)
{
 u16 VAR_9;
 u32 VAR_10;
 u8 VAR_11[16];
 u8 VAR_12[16];
 u8 VAR_13[4];
 u8 VAR_14 = 0;
 struct arc4context VAR_15;
 sint VAR_16, VAR_17;
 u32 VAR_18;

 u8 *VAR_19, *VAR_20, *VAR_21, *VAR_22;
 union pn48 VAR_23;

 struct pkt_attrib *VAR_24 = &((struct xmit_frame *)VAR_8)->attrib;
 struct security_priv *VAR_25 = &VAR_7->securitypriv;
 struct xmit_priv *VAR_26 = &VAR_7->xmitpriv;
 u32 VAR_27 = VAR_2;

 if (((struct xmit_frame *)VAR_8)->buf_addr == ((void*)0))
  return VAR_1;

 VAR_14 = VAR_0;
 VAR_19 = ((struct xmit_frame *)VAR_8)->buf_addr + VAR_14;


 if (VAR_24->encrypt == VAR_3) {
  {







   FUNC_3(VAR_6, VAR_4, ("rtw_tkip_encrypt: stainfo!= NULL!!!\n"));

   if (FUNC_1(VAR_24->ra))
    VAR_22 = VAR_25->dot118021XGrpKey[VAR_25->dot118021XGrpKeyid].skey;
   else

    VAR_22 = VAR_24->dot118021x_UncstKey.skey;

   VAR_18 = 16;

   for (VAR_16 = 0; VAR_16 < VAR_24->nr_frags; VAR_16++) {
    VAR_21 = VAR_19+VAR_24->hdrlen;
    VAR_20 = VAR_19+VAR_24->iv_len+VAR_24->hdrlen;

    FUNC_0(VAR_21, VAR_23);

    VAR_9 = (u16)(VAR_23.val);
    VAR_10 = (u32)(VAR_23.val>>16);

    FUNC_8((u16 *)&VAR_12[0], VAR_22, &VAR_24->ta[0], VAR_10);

    FUNC_9(&VAR_11[0], VAR_22, (u16 *)&VAR_12[0], VAR_9);

    if ((VAR_16+1) == VAR_24->nr_frags) {
     VAR_17 = VAR_24->last_txcmdsz-VAR_24->hdrlen-VAR_24->iv_len-VAR_24->icv_len;
     FUNC_3(VAR_6, VAR_5, ("pattrib->iv_len =%x, pattrib->icv_len =%x\n", VAR_24->iv_len, VAR_24->icv_len));
     *((__le32 *)VAR_13) = FUNC_7(VAR_20, VAR_17);

     FUNC_6(&VAR_15, VAR_11, 16);
     FUNC_5(&VAR_15, VAR_20, VAR_20, VAR_17);
     FUNC_5(&VAR_15, VAR_20+VAR_17, VAR_13, 4);

    } else {
     VAR_17 = VAR_26->frag_len-VAR_24->hdrlen-VAR_24->iv_len-VAR_24->icv_len;
     *((__le32 *)VAR_13) = FUNC_7(VAR_20, VAR_17);
     FUNC_6(&VAR_15, VAR_11, 16);
     FUNC_5(&VAR_15, VAR_20, VAR_20, VAR_17);
     FUNC_5(&VAR_15, VAR_20+VAR_17, VAR_13, 4);

     VAR_19 += VAR_26->frag_len;
     VAR_19 = (u8 *)FUNC_2((SIZE_PTR)(VAR_19));
    }
   }

   FUNC_4(VAR_25, VAR_24->ra);
  }
 }
 return VAR_27;
}
