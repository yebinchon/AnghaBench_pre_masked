
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rx_pkt_attrib {int crc_err; } ;
struct TYPE_6__ {struct rx_pkt_attrib attrib; } ;
struct TYPE_7__ {TYPE_2__ hdr; } ;
union recv_frame {TYPE_3__ u; } ;
struct mlme_priv {int dummy; } ;
struct TYPE_8__ {int rx_pktcount; int rx_crcerrpktcount; } ;
struct __queue {int dummy; } ;
struct TYPE_5__ {struct __queue free_recv_queue; } ;
struct _adapter {TYPE_4__ mppriv; struct mlme_priv mlmepriv; TYPE_1__ recvpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct _adapter*,union recv_frame*) ;
 union recv_frame* FUNC_2 (struct _adapter*,union recv_frame*) ;
 int FUNC_3 (union recv_frame*,struct __queue*) ;
 union recv_frame* FUNC_4 (struct _adapter*,union recv_frame*) ;
 int FUNC_5 (struct _adapter*,union recv_frame*) ;
 union recv_frame* FUNC_6 (struct _adapter*,union recv_frame*) ;
 int FUNC_7 (struct _adapter*,union recv_frame*) ;

int FUNC_8(struct _adapter *VAR_4, void *VAR_5)
{
 struct rx_pkt_attrib *VAR_6;
 union recv_frame *VAR_7, *VAR_8;
 int VAR_9 = VAR_3;
 struct __queue *VAR_10 = &VAR_4->recvpriv.free_recv_queue;
 struct mlme_priv *VAR_11 = &VAR_4->mlmepriv;

 VAR_7 = VAR_5;
 VAR_8 = VAR_7;
 VAR_6 = &VAR_7->u.hdr.attrib;
 if (FUNC_0(VAR_11, VAR_1)) {
  if (VAR_6->crc_err == 1)
   VAR_4->mppriv.rx_crcerrpktcount++;
  else
   VAR_4->mppriv.rx_pktcount++;
  if (!FUNC_0(VAR_11, VAR_0)) {

   FUNC_3(VAR_8, VAR_10);
   goto _exit_recv_func;
  }
 }

 VAR_9 = FUNC_7(VAR_4, VAR_7);
 if (VAR_9 != VAR_3) {

  FUNC_3(VAR_8, VAR_10);
  goto _exit_recv_func;
 }
 FUNC_1(VAR_4, VAR_7);
 VAR_7 = FUNC_2(VAR_4, VAR_7);
 if (!VAR_7) {
  VAR_9 = VAR_2;
  goto _exit_recv_func;
 }
 VAR_7 = FUNC_6(VAR_4, VAR_7);
 if (!VAR_7)
  goto _exit_recv_func;
 VAR_7 = FUNC_4(VAR_4, VAR_7);
 if (!VAR_7) {
  VAR_9 = VAR_2;
  goto _exit_recv_func;
 }
 VAR_9 = FUNC_5(VAR_4, VAR_7);
 if (VAR_9 != VAR_3) {
  FUNC_3(VAR_8, VAR_10);
  goto _exit_recv_func;
 }
_exit_recv_func:
 return VAR_9;
}
