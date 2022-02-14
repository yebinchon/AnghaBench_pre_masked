
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rx_pkt_attrib {int to_fr_ds; int qos; size_t priority; int hdrlen; scalar_t__ icv_len; scalar_t__ iv_len; scalar_t__ encrypt; int ra; scalar_t__ privacy; scalar_t__ order; scalar_t__ amsdu; int ack_policy; int ta; int bssid; int src; int dst; } ;
struct TYPE_4__ {int * preorder_ctrl; struct sta_info* psta; struct rx_pkt_attrib attrib; int * rx_data; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
struct TYPE_6__ {int rxcache; } ;
struct sta_info {TYPE_3__ sta_recvpriv; int * recvreorder_ctrl; } ;
struct security_priv {int dummy; } ;
struct _adapter {struct security_priv securitypriv; } ;
typedef int sint ;


 int VAR_0 ;
 int FUNC_0 (struct security_priv*,struct sta_info*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (struct _adapter*,union recv_frame*,struct sta_info**) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (union recv_frame*,int ,int *) ;
 int FUNC_15 (struct _adapter*,union recv_frame*,struct sta_info**) ;
 int FUNC_16 (struct _adapter*,union recv_frame*,struct sta_info**) ;

__attribute__((used)) static sint FUNC_17(struct _adapter *VAR_3,
         union recv_frame *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 u8 *VAR_7, *VAR_8, *VAR_9;
 struct sta_info *VAR_10 = ((void*)0);
 u8 *VAR_11 = VAR_4->u.hdr.rx_data;
 struct rx_pkt_attrib *VAR_12 = &VAR_4->u.hdr.attrib;
 struct security_priv *VAR_13 = &VAR_3->securitypriv;

 VAR_6 = FUNC_6(VAR_11);
 VAR_8 = FUNC_9(VAR_11);
 VAR_7 = FUNC_11(VAR_11);
 VAR_9 = FUNC_10(VAR_11);
 if (VAR_9 == ((void*)0))
  return VAR_1;
 FUNC_13(VAR_12->dst, VAR_8, VAR_0);
 FUNC_13(VAR_12->src, VAR_7, VAR_0);
 FUNC_13(VAR_12->bssid, VAR_9, VAR_0);
 switch (VAR_12->to_fr_ds) {
 case 0:
  FUNC_13(VAR_12->ra, VAR_8, VAR_0);
  FUNC_13(VAR_12->ta, VAR_7, VAR_0);
  VAR_5 = FUNC_16(VAR_3, VAR_4, &VAR_10);
  break;
 case 1:
  FUNC_13(VAR_12->ra, VAR_8, VAR_0);
  FUNC_13(VAR_12->ta, VAR_9, VAR_0);
  VAR_5 = FUNC_8(VAR_3, VAR_4, &VAR_10);
  break;
 case 2:
  FUNC_13(VAR_12->ra, VAR_9, VAR_0);
  FUNC_13(VAR_12->ta, VAR_7, VAR_0);
  VAR_5 = FUNC_15(VAR_3, VAR_4, &VAR_10);
  break;
 case 3:
  FUNC_13(VAR_12->ra, FUNC_3(VAR_11), VAR_0);
  FUNC_13(VAR_12->ta, FUNC_4(VAR_11), VAR_0);
  return VAR_1;
 default:
  return VAR_1;
 }
 if (VAR_5 == VAR_1)
  return VAR_1;
 if (VAR_10 == ((void*)0))
  return VAR_1;
 VAR_4->u.hdr.psta = VAR_10;
 VAR_12->amsdu = 0;

 if (VAR_12->qos == 1) {
  VAR_12->priority = FUNC_5((VAR_11 + 24));
  VAR_12->ack_policy = FUNC_2((VAR_11 + 24));
  VAR_12->amsdu = FUNC_1((VAR_11 + 24));
  VAR_12->hdrlen = VAR_12->to_fr_ds == 3 ? 32 : 26;
 } else {
  VAR_12->priority = 0;
  VAR_12->hdrlen = (VAR_12->to_fr_ds == 3) ? 30 : 24;
 }

 if (VAR_12->order)
  VAR_12->hdrlen += 4;
 VAR_4->u.hdr.preorder_ctrl =
    &VAR_10->recvreorder_ctrl[VAR_12->priority];


 if (FUNC_14(VAR_4, VAR_6, &VAR_10->sta_recvpriv.rxcache) ==
     VAR_1)
  return VAR_1;

 if (VAR_12->privacy) {
  FUNC_0(VAR_13, VAR_10, VAR_12->encrypt,
          FUNC_12(VAR_12->ra));
  FUNC_7(VAR_12->iv_len, VAR_12->icv_len,
          VAR_12->encrypt);
 } else {
  VAR_12->encrypt = 0;
  VAR_12->iv_len = VAR_12->icv_len = 0;
 }
 return VAR_2;
}
