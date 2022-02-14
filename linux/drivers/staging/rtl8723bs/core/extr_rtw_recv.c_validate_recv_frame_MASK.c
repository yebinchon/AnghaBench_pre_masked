
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rx_pkt_attrib {int qos; scalar_t__* iv_len; int hdrlen; int order; int privacy; int mdata; int mfrag; int pw_save; int seq_num; int frag_num; int to_fr_ds; } ;
struct TYPE_6__ {scalar_t__* rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef scalar_t__ u8 ;
typedef int u16 ;
struct recv_priv {int rx_drop; } ;
struct TYPE_9__ {int core_rx_pre_unknown; int core_rx_pre_data_handled; int core_rx_pre_data_err; int core_rx_pre_data; int core_rx_pre_ctrl_err; int core_rx_pre_ctrl; int core_rx_pre_mgmt_err; int core_rx_pre_mgmt; int core_rx_pre_ver_err; } ;
struct adapter {TYPE_4__ rx_logs; struct recv_priv recvpriv; } ;
typedef int sint ;
struct TYPE_8__ {int core_rx_pre_mgmt_err_80211w; } ;
struct TYPE_10__ {TYPE_3__ rx_logs; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (scalar_t__*) ;
 int FUNC_11 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_12 (int ,int ,char*) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (scalar_t__*) ;
 int FUNC_14 (scalar_t__*) ;
 int FUNC_15 (int*,scalar_t__*,int) ;
 int FUNC_16 (unsigned short) ;
 TYPE_5__* VAR_6 ;
 int FUNC_17 (struct adapter*,int ,scalar_t__*) ;
 int FUNC_18 (struct adapter*,union recv_frame*) ;
 int FUNC_19 (struct adapter*,union recv_frame*) ;
 int FUNC_20 (struct adapter*,union recv_frame*) ;
 int FUNC_21 (struct adapter*,union recv_frame*) ;

sint FUNC_22(struct adapter *VAR_7, union recv_frame *VAR_8)
{




 u8 VAR_9;
 u8 VAR_10;
 sint VAR_11 = VAR_3;
 u8 VAR_12;

 struct rx_pkt_attrib *VAR_13 = &VAR_8->u.hdr.attrib;

 u8 *VAR_14 = VAR_8->u.hdr.rx_data;
 u8 VAR_15 = (unsigned char) (*VAR_14)&0x3;


 if (VAR_15 != 0) {
  FUNC_12(VAR_5, VAR_4, ("validate_recv_data_frame fail! (ver!= 0)\n"));
  VAR_11 = VAR_2;
  FUNC_2(VAR_7->rx_logs.core_rx_pre_ver_err);
  goto exit;
 }

 VAR_9 = FUNC_5(VAR_14);
 VAR_10 = FUNC_4(VAR_14);

 VAR_13->to_fr_ds = FUNC_14(VAR_14);

 VAR_13->frag_num = FUNC_3(VAR_14);
 VAR_13->seq_num = FUNC_11(VAR_14);

 VAR_13->pw_save = FUNC_10(VAR_14);
 VAR_13->mfrag = FUNC_7(VAR_14);
 VAR_13->mdata = FUNC_6(VAR_14);
 VAR_13->privacy = FUNC_9(VAR_14);
 VAR_13->order = FUNC_8(VAR_14);
 FUNC_17(VAR_7, VAR_0, &(VAR_12));
 if (VAR_12 == 1)
  FUNC_13(VAR_14);
 else if ((VAR_12 == 2) && (VAR_9 == 128))
  FUNC_13(VAR_14);
 else if ((VAR_12 == 3) && (VAR_9 == 129))
  FUNC_13(VAR_14);

 switch (VAR_9) {
 case 128:
  FUNC_2(VAR_7->rx_logs.core_rx_pre_mgmt);
  if (FUNC_18(VAR_7, VAR_8) == VAR_2) {
   VAR_11 = VAR_2;
   FUNC_2(VAR_6->rx_logs.core_rx_pre_mgmt_err_80211w);
   break;
  }

  VAR_11 = FUNC_21(VAR_7, VAR_8);
  if (VAR_11 == VAR_2) {
   FUNC_12(VAR_5, VAR_4, ("validate_recv_mgnt_frame fail\n"));
   FUNC_2(VAR_7->rx_logs.core_rx_pre_mgmt_err);
  }
  VAR_11 = VAR_2;
  break;
 case 130:
  FUNC_2(VAR_7->rx_logs.core_rx_pre_ctrl);
  VAR_11 = FUNC_19(VAR_7, VAR_8);
  if (VAR_11 == VAR_2) {
   FUNC_12(VAR_5, VAR_4, ("validate_recv_ctrl_frame fail\n"));
   FUNC_2(VAR_7->rx_logs.core_rx_pre_ctrl_err);
  }
  VAR_11 = VAR_2;
  break;
 case 129:
  FUNC_2(VAR_7->rx_logs.core_rx_pre_data);

  VAR_13->qos = (VAR_10 & FUNC_0(7)) ? 1:0;
  VAR_11 = FUNC_20(VAR_7, VAR_8);
  if (VAR_11 == VAR_2) {
   struct recv_priv *VAR_16 = &VAR_7->recvpriv;

   VAR_16->rx_drop++;
   FUNC_2(VAR_7->rx_logs.core_rx_pre_data_err);
  } else if (VAR_11 == VAR_3) {
  } else
   FUNC_2(VAR_7->rx_logs.core_rx_pre_data_handled);
  break;
 default:
  FUNC_2(VAR_7->rx_logs.core_rx_pre_unknown);
  FUNC_12(VAR_5, VAR_4, ("validate_recv_data_frame fail! type = 0x%x\n", VAR_9));



  VAR_11 = VAR_2;
  break;
 }

exit:
 return VAR_11;
}
