
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rx_pkt_attrib {int hdrlen; int iv_len; scalar_t__ bdecrypted; int privacy; int * ta; } ;
struct recv_frame_hdr {struct rx_pkt_attrib attrib; } ;
struct TYPE_6__ {struct recv_frame_hdr hdr; } ;
union recv_frame {TYPE_3__ u; } ;
typedef int uint ;
typedef int u8 ;
typedef int u16 ;
struct sta_priv {int dummy; } ;
struct sta_info {scalar_t__ ieee8021x_blocked; } ;
struct TYPE_5__ {int free_recv_queue; } ;
struct TYPE_4__ {int dot11AuthAlgrthm; } ;
struct adapter {TYPE_2__ recvpriv; TYPE_1__ securitypriv; struct sta_priv stapriv; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (union recv_frame*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (union recv_frame*,int *) ;
 struct sta_info* FUNC_5 (struct sta_priv*,int *) ;

union recv_frame *FUNC_6(struct adapter *VAR_3, union recv_frame *VAR_4)
{
 u8 *VAR_5 = ((void*)0);
 u8 *VAR_6;
 uint VAR_7;
 struct recv_frame_hdr *VAR_8;
 struct sta_info *VAR_9;
 struct sta_priv *VAR_10;
 union recv_frame *VAR_11;
 u16 VAR_12 = 0;
 u16 VAR_13 = 0x888e;
 struct rx_pkt_attrib *VAR_14;

 VAR_10 = &VAR_3->stapriv;

 VAR_7 = VAR_3->securitypriv.dot11AuthAlgrthm;

 VAR_6 = FUNC_1(VAR_4);
 VAR_8 = &VAR_4->u.hdr;
 VAR_14 = &VAR_8->attrib;
 VAR_5 = VAR_14->ta;

 VAR_11 = ((void*)0);

 VAR_9 = FUNC_5(VAR_10, VAR_5);

 FUNC_0(VAR_2, VAR_1, ("########portctrl:adapter->securitypriv.dot11AuthAlgrthm =%d\n", VAR_3->securitypriv.dot11AuthAlgrthm));

 if (VAR_7 == 2) {
  if ((VAR_9) && (VAR_9->ieee8021x_blocked)) {
   __be16 VAR_15;



   FUNC_0(VAR_2, VAR_1, ("########portctrl:psta->ieee8021x_blocked == 1\n"));

   VAR_11 = VAR_4;


   VAR_6 = VAR_6+VAR_8->attrib.hdrlen+VAR_8->attrib.iv_len+VAR_0;
   FUNC_2(&VAR_15, VAR_6, 2);
   VAR_12 = FUNC_3(VAR_15);

   if (VAR_12 == VAR_13)
    VAR_11 = VAR_4;
   else {

    FUNC_4(VAR_4, &VAR_3->recvpriv.free_recv_queue);
    VAR_11 = ((void*)0);
   }
  } else {


   FUNC_0(VAR_2, VAR_1, ("########portctrl:psta->ieee8021x_blocked == 0\n"));
   FUNC_0(VAR_2, VAR_1, ("portctrl:precv_frame->hdr.attrib.privacy =%x\n", VAR_4->u.hdr.attrib.privacy));

   if (VAR_14->bdecrypted == 0)
    FUNC_0(VAR_2, VAR_1, ("portctrl:prxstat->decrypted =%x\n", VAR_14->bdecrypted));

   VAR_11 = VAR_4;
  }
 } else
  VAR_11 = VAR_4;

 return VAR_11;
}
