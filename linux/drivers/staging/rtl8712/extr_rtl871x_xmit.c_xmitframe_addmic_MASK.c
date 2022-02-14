
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xmit_priv {scalar_t__ frag_len; } ;
struct pkt_attrib {scalar_t__ encrypt; scalar_t__ nr_frags; int hdrlen; int iv_len; scalar_t__ last_txcmdsz; scalar_t__ icv_len; scalar_t__ priority; int * ra; struct sta_info* psta; } ;
struct xmit_frame {int* buf_addr; struct pkt_attrib attrib; } ;
struct TYPE_6__ {int * skey; } ;
struct sta_info {TYPE_3__ tkiptxmickey; } ;
struct security_priv {size_t XGrpKeyid; scalar_t__ sw_encrypt; TYPE_2__* XGrptxmickey; } ;
struct qos_priv {int qos_option; } ;
struct mic_data {int dummy; } ;
struct TYPE_4__ {struct qos_priv qospriv; } ;
struct _adapter {int stapriv; struct xmit_priv xmitpriv; struct security_priv securitypriv; TYPE_1__ mlmepriv; } ;
typedef int addr_t ;
struct TYPE_5__ {int * skey; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int*,int*,int) ;
 struct sta_info* FUNC_4 (int *,int *) ;
 int FUNC_5 (struct mic_data*,int*) ;
 int FUNC_6 (struct mic_data*,int*,scalar_t__) ;
 int FUNC_7 (struct mic_data*,int *) ;

__attribute__((used)) static int FUNC_8(struct _adapter *VAR_3,
       struct xmit_frame *VAR_4)
{
 u32 VAR_5, VAR_6;
 u8 *VAR_7, *VAR_8, VAR_9[8];
 struct mic_data VAR_10;
 struct sta_info *VAR_11;
 struct qos_priv *VAR_12 = &(VAR_3->mlmepriv.qospriv);
 struct pkt_attrib *VAR_13 = &VAR_4->attrib;
 struct security_priv *VAR_14 = &VAR_3->securitypriv;
 struct xmit_priv *VAR_15 = &VAR_3->xmitpriv;
 u8 VAR_16[4] = {0x0, 0x0, 0x0, 0x0};
 bool VAR_17 = FUNC_1(VAR_13->ra);

 if (VAR_13->psta)
  VAR_11 = VAR_13->psta;
 else
  VAR_11 = FUNC_4(&VAR_3->stapriv,
         &VAR_13->ra[0]);
 if (VAR_13->encrypt == VAR_2) {

  if (VAR_11 != ((void*)0)) {
   u8 VAR_18[16] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0};
   VAR_7 = VAR_4->buf_addr + VAR_1;
   if (VAR_17) {
    if (!FUNC_2(VAR_14->XGrptxmickey
       [VAR_14->XGrpKeyid].skey,
       VAR_18, 16))
     return -VAR_0;

    FUNC_7(&VAR_10,
      VAR_14->
      XGrptxmickey[VAR_14->
     XGrpKeyid].skey);
   } else {
    if (!FUNC_2(&VAR_11->tkiptxmickey.skey[0],
         VAR_18, 16))
     return -VAR_0;

    FUNC_7(&VAR_10,
          &VAR_11->tkiptxmickey.skey[0]);
   }
   if (VAR_7[1] & 1) {
    FUNC_6(&VAR_10,
         &VAR_7[16], 6);
    if (VAR_7[1] & 2)
     FUNC_6(&VAR_10,
          &VAR_7[24], 6);
    else
     FUNC_6(&VAR_10,
          &VAR_7[10], 6);
   } else {
    FUNC_6(&VAR_10,
         &VAR_7[4], 6);
    if (VAR_7[1] & 2)
     FUNC_6(&VAR_10,
          &VAR_7[16], 6);
    else
     FUNC_6(&VAR_10,
          &VAR_7[10], 6);
   }
   if (VAR_12->qos_option == 1)
    VAR_16[0] = (u8)VAR_4->attrib.priority;
   FUNC_6(&VAR_10, &VAR_16[0], 4);
   VAR_8 = VAR_7;
   for (VAR_5 = 0; VAR_5 < VAR_13->nr_frags;
        VAR_5++) {
    VAR_8 = (u8 *)FUNC_0((addr_t)(VAR_8));
    VAR_8 += VAR_13->hdrlen + VAR_13->iv_len;
    if ((VAR_5 + 1) == VAR_13->nr_frags) {
     VAR_6 = VAR_13->last_txcmdsz -
        VAR_13->hdrlen -
        VAR_13->iv_len -
        ((VAR_14->sw_encrypt)
        ? VAR_13->icv_len : 0);
     FUNC_6(&VAR_10, VAR_8,
          VAR_6);
     VAR_8 = VAR_8 + VAR_6;
    } else {
     VAR_6 = VAR_15->frag_len -
         VAR_13->hdrlen - VAR_13->iv_len -
         ((VAR_14->sw_encrypt) ?
         VAR_13->icv_len : 0);
     FUNC_6(&VAR_10, VAR_8,
          VAR_6);
     VAR_8 = VAR_8 + VAR_6 +
        VAR_13->icv_len;
    }
   }
   FUNC_5(&VAR_10, &(VAR_9[0]));



   FUNC_3(VAR_8, &(VAR_9[0]), 8);
   VAR_13->last_txcmdsz += 8;
   VAR_8 = VAR_8 - VAR_13->last_txcmdsz + 8;
  }
 }
 return 0;
}
