
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_pkt_attrib {int encrypt; int bdecrypted; } ;
struct TYPE_3__ {struct rx_pkt_attrib attrib; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
struct security_priv {int hw_decrypted; scalar_t__ sw_decrypt; } ;
struct _adapter {struct security_priv securitypriv; } ;






 int FUNC_0 (struct _adapter*,int *) ;
 int FUNC_1 (struct _adapter*,int *) ;
 int FUNC_2 (struct _adapter*,int *) ;

union recv_frame *FUNC_3(struct _adapter *VAR_0,
       union recv_frame *VAR_1)
{
 struct rx_pkt_attrib *VAR_2 = &VAR_1->u.hdr.attrib;
 struct security_priv *VAR_3 = &VAR_0->securitypriv;
 union recv_frame *VAR_4 = VAR_1;

 if ((VAR_2->encrypt > 0) && ((VAR_2->bdecrypted == 0) ||
     VAR_3->sw_decrypt)) {
  VAR_3->hw_decrypted = 0;
  switch (VAR_2->encrypt) {
  case 128:
  case 129:
   FUNC_2(VAR_0, (u8 *)VAR_1);
   break;
  case 130:
   FUNC_1(VAR_0, (u8 *)VAR_1);
   break;
  case 131:
   FUNC_0(VAR_0, (u8 *)VAR_1);
   break;
  default:
    break;
  }
 } else if (VAR_2->bdecrypted == 1) {
  VAR_3->hw_decrypted = 1;
 }
 return VAR_4;
}
