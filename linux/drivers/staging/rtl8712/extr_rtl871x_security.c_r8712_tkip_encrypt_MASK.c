
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union pn48 {int val; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct xmit_priv {scalar_t__ frag_len; } ;
struct pkt_attrib {scalar_t__ encrypt; scalar_t__ nr_frags; int hdrlen; int iv_len; scalar_t__ last_txcmdsz; scalar_t__ icv_len; int * ta; int * ra; struct sta_info* psta; } ;
struct xmit_frame {int * buf_addr; struct pkt_attrib attrib; } ;
struct TYPE_2__ {int * skey; } ;
struct sta_info {TYPE_1__ x_UncstKey; } ;
struct arc4context {int dummy; } ;
struct _adapter {int stapriv; struct xmit_priv xmitpriv; } ;
typedef int addr_t ;
typedef int __le32 ;


 int FUNC_0 (int *,union pn48) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct arc4context*,int *,int *,int) ;
 int FUNC_3 (struct arc4context*,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (scalar_t__*,int *,int *,scalar_t__) ;
 int FUNC_7 (int *,int *,scalar_t__*,scalar_t__) ;
 struct sta_info* FUNC_8 (int *,int *) ;

u32 FUNC_9(struct _adapter *VAR_4, u8 *VAR_5)
{
 u16 VAR_6;
 u32 VAR_7;
 u8 VAR_8[16];
 u8 VAR_9[16];
 u8 VAR_10[4];
 struct arc4context VAR_11;
 u32 VAR_12, VAR_13;

 u8 *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 union pn48 VAR_18;
 struct sta_info *VAR_19;
 struct pkt_attrib *VAR_20 = &((struct xmit_frame *)VAR_5)->attrib;
 struct xmit_priv *VAR_21 = &VAR_4->xmitpriv;
 u32 VAR_22 = VAR_2;

 if (((struct xmit_frame *)VAR_5)->buf_addr == ((void*)0))
  return VAR_1;

 VAR_14 = ((struct xmit_frame *)VAR_5)->buf_addr + VAR_0;

 if (VAR_20->encrypt == VAR_3) {
  if (VAR_20->psta)
   VAR_19 = VAR_20->psta;
  else
   VAR_19 = FUNC_8(&VAR_4->stapriv,
      &VAR_20->ra[0]);
  if (VAR_19 != ((void*)0)) {
   VAR_17 = &VAR_19->x_UncstKey.skey[0];
   for (VAR_12 = 0; VAR_12 < VAR_20->nr_frags;
        VAR_12++) {
    VAR_16 = VAR_14 + VAR_20->hdrlen;
    VAR_15 = VAR_14 + VAR_20->iv_len +
       VAR_20->hdrlen;
    FUNC_0(VAR_16, VAR_18);
    VAR_6 = (u16)(VAR_18.val);
    VAR_7 = (u32)(VAR_18.val >> 16);
    FUNC_6((u16 *)&VAR_9[0], VAR_17,
           &VAR_20->ta[0], VAR_7);
    FUNC_7(&VAR_8[0], VAR_17, (u16 *)&VAR_9[0],
           VAR_6);
    if ((VAR_12 + 1) == VAR_20->nr_frags) {

     VAR_13 = VAR_20->last_txcmdsz -
          VAR_20->hdrlen -
          VAR_20->iv_len -
          VAR_20->icv_len;
     *((__le32 *)VAR_10) = FUNC_4(
      FUNC_5(VAR_15, VAR_13));
     FUNC_3(&VAR_11, VAR_8, 16);
     FUNC_2(&VAR_11, VAR_15,
       VAR_15, VAR_13);
     FUNC_2(&VAR_11, VAR_15 +
       VAR_13, VAR_10, 4);
    } else {
     VAR_13 = VAR_21->frag_len -
       VAR_20->hdrlen -
       VAR_20->iv_len -
       VAR_20->icv_len;
     *((__le32 *)VAR_10) = FUNC_4(FUNC_5(
       VAR_15, VAR_13));
     FUNC_3(&VAR_11, VAR_8, 16);
     FUNC_2(&VAR_11, VAR_15,
        VAR_15, VAR_13);
     FUNC_2(&VAR_11,
       VAR_15 + VAR_13, VAR_10,
       4);
     VAR_14 += VAR_21->frag_len;
     VAR_14 = (u8 *)FUNC_1((addr_t)(VAR_14));
    }
   }
  } else {
   VAR_22 = VAR_1;
  }
 }
 return VAR_22;
}
