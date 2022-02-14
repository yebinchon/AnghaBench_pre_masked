
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rx_pkt_attrib {scalar_t__ encrypt; size_t key_index; int hdrlen; int iv_len; int icv_len; int bdecrypted; int * ra; scalar_t__ priority; int * ta; } ;
struct TYPE_7__ {int len; scalar_t__* rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_8__ {TYPE_3__ hdr; } ;
union recv_frame {TYPE_4__ u; } ;
typedef scalar_t__ uint ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__* skey; } ;
struct sta_info {TYPE_2__ dot11tkiprxmickey; } ;
struct security_priv {int binstallGrpkey; int bcheck_grpkey; TYPE_1__* dot118021XGrprxmickey; } ;
struct mlme_ext_info {size_t key_index; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {int stapriv; struct mlme_ext_priv mlmeextpriv; struct security_priv securitypriv; } ;
typedef int sint ;
struct TYPE_5__ {scalar_t__* skey; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (union recv_frame*,int) ;
 struct sta_info* FUNC_4 (int *,int *) ;
 int FUNC_5 (struct adapter*,scalar_t__) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__*,int,scalar_t__*,unsigned char) ;

sint FUNC_7(struct adapter *VAR_6, union recv_frame *VAR_7)
{

 sint VAR_8, VAR_9 = VAR_1;
 u32 VAR_10;
 u8 VAR_11[8];
 u8 VAR_12 = 0, VAR_13 = 1;
 u8 *VAR_14, *VAR_15, *VAR_16;
 u8 *VAR_17;

 struct sta_info *VAR_18;
 struct rx_pkt_attrib *VAR_19 = &VAR_7->u.hdr.attrib;
 struct security_priv *VAR_20 = &VAR_6->securitypriv;

 struct mlme_ext_priv *VAR_21 = &VAR_6->mlmeextpriv;
 struct mlme_ext_info *VAR_22 = &(VAR_21->mlmext_info);

 VAR_18 = FUNC_4(&VAR_6->stapriv, &VAR_19->ta[0]);

 if (VAR_19->encrypt == VAR_2) {
  FUNC_2(VAR_5, VAR_4, ("\n recvframe_chkmic:prxattrib->encrypt == _TKIP_\n"));
  FUNC_2(VAR_5, VAR_4, ("\n recvframe_chkmic:da = 0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x\n",
   VAR_19->ra[0], VAR_19->ra[1], VAR_19->ra[2], VAR_19->ra[3], VAR_19->ra[4], VAR_19->ra[5]));


  if (VAR_18) {
   if (FUNC_1(VAR_19->ra)) {



    VAR_17 = &VAR_20->dot118021XGrprxmickey[VAR_19->key_index].skey[0];

    FUNC_2(VAR_5, VAR_4, ("\n recvframe_chkmic: bcmc key\n"));



    if (VAR_20->binstallGrpkey == 0) {
     VAR_9 = VAR_0;
     FUNC_2(VAR_5, VAR_3, ("\n recvframe_chkmic:didn't install group key!!!!!!!!!!\n"));
     FUNC_0("\n recvframe_chkmic:didn't install group key!!!!!!!!!!\n");
     goto exit;
    }
   } else {
    VAR_17 = &VAR_18->dot11tkiprxmickey.skey[0];
    FUNC_2(VAR_5, VAR_3, ("\n recvframe_chkmic: unicast key\n"));
   }

   VAR_10 = VAR_7->u.hdr.len-VAR_19->hdrlen-VAR_19->iv_len-VAR_19->icv_len-8;
   VAR_14 = VAR_7->u.hdr.rx_data;
   VAR_15 = VAR_14+VAR_19->hdrlen+VAR_19->iv_len;

   FUNC_2(VAR_5, VAR_4, ("\n prxattrib->iv_len =%d prxattrib->icv_len =%d\n", VAR_19->iv_len, VAR_19->icv_len));


   FUNC_6(VAR_17, VAR_14, VAR_15, VAR_10, &VAR_11[0], (unsigned char)VAR_19->priority);

   VAR_16 = VAR_15+VAR_10;

   VAR_12 = 0;

   for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
    if (VAR_11[VAR_8] != *(VAR_16+VAR_8)) {
     FUNC_2(VAR_5, VAR_3, ("recvframe_chkmic:miccode[%d](%02x) != *(pframemic+%d)(%02x) ", VAR_8, VAR_11[VAR_8], VAR_8, *(VAR_16+VAR_8)));
     VAR_12 = 1;
    }
   }


   if (VAR_12 == 1) {

    FUNC_2(VAR_5, VAR_3, ("\n *(pframemic-8)-*(pframemic-1) = 0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x\n",
     *(VAR_16-8), *(VAR_16-7), *(VAR_16-6), *(VAR_16-5), *(VAR_16-4), *(VAR_16-3), *(VAR_16-2), *(VAR_16-1)));
    FUNC_2(VAR_5, VAR_3, ("\n *(pframemic-16)-*(pframemic-9) = 0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x\n",
     *(VAR_16-16), *(VAR_16-15), *(VAR_16-14), *(VAR_16-13), *(VAR_16-12), *(VAR_16-11), *(VAR_16-10), *(VAR_16-9)));

    {
     uint VAR_23;
     FUNC_2(VAR_5, VAR_3, ("\n ======demp packet (len =%d) ======\n", VAR_7->u.hdr.len));
     for (VAR_23 = 0; VAR_23 < VAR_7->u.hdr.len; VAR_23 = VAR_23+8) {
      FUNC_2(VAR_5, VAR_3, ("0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x",
       *(VAR_7->u.hdr.rx_data+VAR_23), *(VAR_7->u.hdr.rx_data+VAR_23+1),
       *(VAR_7->u.hdr.rx_data+VAR_23+2), *(VAR_7->u.hdr.rx_data+VAR_23+3),
       *(VAR_7->u.hdr.rx_data+VAR_23+4), *(VAR_7->u.hdr.rx_data+VAR_23+5),
       *(VAR_7->u.hdr.rx_data+VAR_23+6), *(VAR_7->u.hdr.rx_data+VAR_23+7)));
     }
     FUNC_2(VAR_5, VAR_3, ("\n ======demp packet end [len =%d]======\n", VAR_7->u.hdr.len));
     FUNC_2(VAR_5, VAR_3, ("\n hrdlen =%d,\n", VAR_19->hdrlen));
    }

    FUNC_2(VAR_5, VAR_3, ("ra = 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x psecuritypriv->binstallGrpkey =%d ",
     VAR_19->ra[0], VAR_19->ra[1], VAR_19->ra[2],
     VAR_19->ra[3], VAR_19->ra[4], VAR_19->ra[5], VAR_20->binstallGrpkey));



    if ((FUNC_1(VAR_19->ra) == 1) && (VAR_19->key_index != VAR_22->key_index))
     VAR_13 = 0;

    if ((VAR_19->bdecrypted == 1) && (VAR_13 == 1)) {
     FUNC_5(VAR_6, (u8)FUNC_1(VAR_19->ra));
     FUNC_2(VAR_5, VAR_3, (" mic error :prxattrib->bdecrypted =%d ", VAR_19->bdecrypted));
     FUNC_0(" mic error :prxattrib->bdecrypted =%d\n", VAR_19->bdecrypted);
    } else {
     FUNC_2(VAR_5, VAR_3, (" mic error :prxattrib->bdecrypted =%d ", VAR_19->bdecrypted));
     FUNC_0(" mic error :prxattrib->bdecrypted =%d\n", VAR_19->bdecrypted);
    }

    VAR_9 = VAR_0;

   } else {

    if ((VAR_20->bcheck_grpkey == 0) && (FUNC_1(VAR_19->ra) == 1)) {
     VAR_20->bcheck_grpkey = 1;
     FUNC_2(VAR_5, VAR_3, ("psecuritypriv->bcheck_grpkey =true"));
    }
   }

  } else
   FUNC_2(VAR_5, VAR_3, ("recvframe_chkmic: rtw_get_stainfo == NULL!!!\n"));

  FUNC_3(VAR_7, 8);

 }

exit:
 return VAR_9;

}
