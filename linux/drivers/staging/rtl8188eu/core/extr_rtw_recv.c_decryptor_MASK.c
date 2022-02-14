
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct security_priv {int dot11PrivacyKeyIndex; int dot118021XGrpKeyid; int hw_decrypted; int busetkipkey; } ;
struct rx_pkt_attrib {int bdecrypted; int encrypt; int hdrlen; int key_index; } ;
struct recv_frame {TYPE_1__* pkt; struct rx_pkt_attrib attrib; } ;
struct TYPE_4__ {int free_recv_queue; } ;
struct adapter {TYPE_2__ recvpriv; struct security_priv securitypriv; } ;
struct TYPE_3__ {int* data; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct adapter*,int*) ;
 int FUNC_3 (struct recv_frame*,int *) ;
 scalar_t__ FUNC_4 (struct adapter*,int*) ;
 scalar_t__ FUNC_5 (struct adapter*,int*) ;

__attribute__((used)) static struct recv_frame *FUNC_6(struct adapter *VAR_5,
        struct recv_frame *VAR_6)
{
 struct rx_pkt_attrib *VAR_7 = &VAR_6->attrib;
 struct security_priv *VAR_8 = &VAR_5->securitypriv;
 struct recv_frame *VAR_9 = VAR_6;
 u32 VAR_10 = VAR_2;

 FUNC_1(VAR_4, VAR_3, ("prxstat->decrypted=%x prxattrib->encrypt=0x%03x\n", VAR_7->bdecrypted, VAR_7->encrypt));

 if (VAR_7->encrypt > 0) {
  u8 *VAR_11 = VAR_6->pkt->data + VAR_7->hdrlen;

  VAR_7->key_index = (((VAR_11[3]) >> 6) & 0x3);

  if (VAR_7->key_index > VAR_0) {
   FUNC_0("prxattrib->key_index(%d)>WEP_KEYS\n", VAR_7->key_index);

   switch (VAR_7->encrypt) {
   case 128:
   case 129:
    VAR_7->key_index = VAR_8->dot11PrivacyKeyIndex;
    break;
   case 130:
   case 131:
   default:
    VAR_7->key_index = VAR_8->dot118021XGrpKeyid;
    break;
   }
  }
 }

 if ((VAR_7->encrypt > 0) && (VAR_7->bdecrypted == 0)) {
  VAR_8->hw_decrypted = 0;

  switch (VAR_7->encrypt) {
  case 128:
  case 129:
   VAR_10 = FUNC_5(VAR_5, (u8 *)VAR_6);
   break;
  case 130:
   VAR_10 = FUNC_4(VAR_5, (u8 *)VAR_6);
   break;
  case 131:
   VAR_10 = FUNC_2(VAR_5, (u8 *)VAR_6);
   break;
  default:
   break;
  }
 } else if (VAR_7->bdecrypted == 1 && VAR_7->encrypt > 0 &&
     (VAR_8->busetkipkey == 1 || VAR_7->encrypt != 130))
   VAR_8->hw_decrypted = 1;

 if (VAR_10 == VAR_1) {
  FUNC_3(VAR_9, &VAR_5->recvpriv.free_recv_queue);
  VAR_9 = ((void*)0);
 }

 return VAR_9;
}
