
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xmit_priv {scalar_t__ frag_len; } ;
struct pkt_attrib {scalar_t__ encrypt; scalar_t__ nr_frags; scalar_t__ last_txcmdsz; scalar_t__ hdrlen; scalar_t__ iv_len; scalar_t__ icv_len; int * ra; struct sta_info* psta; } ;
struct xmit_frame {int * buf_addr; struct pkt_attrib attrib; } ;
struct TYPE_2__ {int * skey; } ;
struct sta_info {TYPE_1__ x_UncstKey; } ;
struct _adapter {int stapriv; struct xmit_priv xmitpriv; } ;
typedef scalar_t__ sint ;
typedef int addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,scalar_t__,int *,scalar_t__) ;
 struct sta_info* FUNC_2 (int *,int *) ;

u32 FUNC_3(struct _adapter *VAR_4, u8 *VAR_5)
{

 sint VAR_6, VAR_7;
 u8 *VAR_8, *VAR_9;
 struct sta_info *VAR_10;
 struct pkt_attrib *VAR_11 = &((struct xmit_frame *)
           VAR_5)->attrib;
 struct xmit_priv *VAR_12 = &VAR_4->xmitpriv;
 u32 VAR_13 = VAR_3;

 if (((struct xmit_frame *)VAR_5)->buf_addr == ((void*)0))
  return VAR_2;
 VAR_8 = ((struct xmit_frame *)VAR_5)->buf_addr + VAR_0;

 if (VAR_11->encrypt == VAR_1) {
  if (VAR_11->psta)
   VAR_10 = VAR_11->psta;
  else
   VAR_10 = FUNC_2(&VAR_4->stapriv,
      &VAR_11->ra[0]);
  if (VAR_10 != ((void*)0)) {
   VAR_9 = &VAR_10->x_UncstKey.skey[0];
   for (VAR_6 = 0; VAR_6 < VAR_11->nr_frags;
        VAR_6++) {
    if ((VAR_6 + 1) == VAR_11->nr_frags) {
     VAR_7 = VAR_11->last_txcmdsz -
       VAR_11->hdrlen -
       VAR_11->iv_len -
       VAR_11->icv_len;
     FUNC_1(VAR_9, VAR_11->hdrlen,
         VAR_8, VAR_7);
    } else {
     VAR_7 = VAR_12->frag_len -
       VAR_11->hdrlen -
       VAR_11->iv_len -
       VAR_11->icv_len;
     FUNC_1(VAR_9, VAR_11->hdrlen,
         VAR_8, VAR_7);
     VAR_8 += VAR_12->frag_len;
     VAR_8 = (u8 *)FUNC_0((addr_t)(VAR_8));
    }
   }
  } else {
   VAR_13 = VAR_2;
  }
 }
 return VAR_13;
}
