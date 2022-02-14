
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xmit_priv {scalar_t__ frag_len; } ;
struct TYPE_4__ {int * skey; } ;
struct pkt_attrib {scalar_t__ encrypt; scalar_t__ nr_frags; int hdrlen; int iv_len; scalar_t__ last_txcmdsz; scalar_t__ icv_len; scalar_t__ bswenc; scalar_t__ priority; scalar_t__ qos_en; TYPE_2__ dot11tkiptxmickey; int ra; } ;
struct xmit_frame {int* buf_addr; struct pkt_attrib attrib; } ;
struct security_priv {size_t dot118021XGrpKeyid; TYPE_1__* dot118021XGrptxmickey; } ;
struct mic_data {int dummy; } ;
struct adapter {struct xmit_priv xmitpriv; struct security_priv securitypriv; } ;
typedef scalar_t__ sint ;
typedef int s32 ;
struct TYPE_3__ {int * skey; } ;
typedef int SIZE_PTR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (struct mic_data*,int*) ;
 int FUNC_6 (struct mic_data*,int*,scalar_t__) ;
 int FUNC_7 (struct mic_data*,int *) ;

__attribute__((used)) static s32 FUNC_8(struct adapter *VAR_7, struct xmit_frame *VAR_8)
{
 sint VAR_9, VAR_10;
 u8 *VAR_11, *VAR_12, VAR_13[8];
 struct mic_data VAR_14;

 struct pkt_attrib *VAR_15 = &VAR_8->attrib;
 struct security_priv *VAR_16 = &VAR_7->securitypriv;
 struct xmit_priv *VAR_17 = &VAR_7->xmitpriv;
 u8 VAR_18[4] = {0x0, 0x0, 0x0, 0x0};
 u8 VAR_19 = 0;
 sint VAR_20 = FUNC_0(VAR_15->ra);
 VAR_19 = VAR_0;

 if (VAR_15->encrypt == VAR_3) {


  {
   u8 VAR_21[16] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

   VAR_11 = VAR_8->buf_addr + VAR_19;

   if (VAR_20) {
    if (!FUNC_3(VAR_16->dot118021XGrptxmickey[VAR_16->dot118021XGrpKeyid].skey, VAR_21, 16)) {


     return VAR_1;
    }

    FUNC_7(&VAR_14, VAR_16->dot118021XGrptxmickey[VAR_16->dot118021XGrpKeyid].skey);
   } else {
    if (!FUNC_3(&VAR_15->dot11tkiptxmickey.skey[0], VAR_21, 16)) {


     return VAR_1;
    }

    FUNC_7(&VAR_14, &VAR_15->dot11tkiptxmickey.skey[0]);
   }

   if (VAR_11[1]&1) {
    FUNC_6(&VAR_14, &VAR_11[16], 6);
    if (VAR_11[1]&2)
     FUNC_6(&VAR_14, &VAR_11[24], 6);
    else
    FUNC_6(&VAR_14, &VAR_11[10], 6);
   } else {
    FUNC_6(&VAR_14, &VAR_11[4], 6);
    if (VAR_11[1]&2)
     FUNC_6(&VAR_14, &VAR_11[16], 6);
    else
     FUNC_6(&VAR_14, &VAR_11[10], 6);

   }


   if (VAR_15->qos_en)
    VAR_18[0] = (u8)VAR_8->attrib.priority;


   FUNC_6(&VAR_14, &VAR_18[0], 4);

   VAR_12 = VAR_11;

   for (VAR_9 = 0; VAR_9 < VAR_15->nr_frags; VAR_9++) {
    VAR_12 = (u8 *)FUNC_1((SIZE_PTR)(VAR_12));
    FUNC_2(VAR_6, VAR_4, ("===curfragnum =%d, pframe = 0x%.2x, 0x%.2x, 0x%.2x, 0x%.2x, 0x%.2x, 0x%.2x, 0x%.2x, 0x%.2x,!!!\n",
     VAR_9, *VAR_12, *(VAR_12+1), *(VAR_12+2), *(VAR_12+3), *(VAR_12+4), *(VAR_12+5), *(VAR_12+6), *(VAR_12+7)));

    VAR_12 = VAR_12+VAR_15->hdrlen+VAR_15->iv_len;
    FUNC_2(VAR_6, VAR_4, ("curfragnum =%d pattrib->hdrlen =%d pattrib->iv_len =%d", VAR_9, VAR_15->hdrlen, VAR_15->iv_len));
    if ((VAR_9+1) == VAR_15->nr_frags) {
     VAR_10 = VAR_15->last_txcmdsz-VAR_15->hdrlen-VAR_15->iv_len-((VAR_15->bswenc) ? VAR_15->icv_len : 0);
     FUNC_6(&VAR_14, VAR_12, VAR_10);
     VAR_12 = VAR_12+VAR_10;
    } else {
     VAR_10 = VAR_17->frag_len-VAR_15->hdrlen-VAR_15->iv_len-((VAR_15->bswenc) ? VAR_15->icv_len : 0);
     FUNC_6(&VAR_14, VAR_12, VAR_10);
     VAR_12 = VAR_12+VAR_10+VAR_15->icv_len;
     FUNC_2(VAR_6, VAR_4, ("curfragnum =%d length =%d pattrib->icv_len =%d", VAR_9, VAR_10, VAR_15->icv_len));
    }
   }
   FUNC_5(&VAR_14, &(VAR_13[0]));
   FUNC_2(VAR_6, VAR_4, ("xmitframe_addmic: before add mic code!!!\n"));
   FUNC_2(VAR_6, VAR_4, ("xmitframe_addmic: pattrib->last_txcmdsz =%d!!!\n", VAR_15->last_txcmdsz));
   FUNC_2(VAR_6, VAR_4, ("xmitframe_addmic: mic[0]= 0x%.2x , mic[1]= 0x%.2x , mic[2]= 0x%.2x , mic[3]= 0x%.2x\n  mic[4]= 0x%.2x , mic[5]= 0x%.2x , mic[6]= 0x%.2x , mic[7]= 0x%.2x !!!!\n",

    VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[3], VAR_13[4], VAR_13[5], VAR_13[6], VAR_13[7]));


   FUNC_4(VAR_12, &(VAR_13[0]), 8);
   VAR_15->last_txcmdsz += 8;

   FUNC_2(VAR_6, VAR_5, ("\n ========last pkt ========\n"));
   VAR_12 = VAR_12-VAR_15->last_txcmdsz+8;
   for (VAR_9 = 0; VAR_9 < VAR_15->last_txcmdsz; VAR_9 = VAR_9+8)
     FUNC_2(VAR_6, VAR_5, (" %.2x,  %.2x,  %.2x,  %.2x,  %.2x,  %.2x,  %.2x,  %.2x ",
     *(VAR_12+VAR_9), *(VAR_12+VAR_9+1), *(VAR_12+VAR_9+2), *(VAR_12+VAR_9+3),
     *(VAR_12+VAR_9+4), *(VAR_12+VAR_9+5), *(VAR_12+VAR_9+6), *(VAR_12+VAR_9+7)));
   }





 }
 return VAR_2;
}
