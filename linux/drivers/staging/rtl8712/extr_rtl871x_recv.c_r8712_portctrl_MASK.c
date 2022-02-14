
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int hdrlen; int * ta; } ;
struct recv_frame_hdr {TYPE_3__ attrib; } ;
struct TYPE_5__ {struct recv_frame_hdr hdr; } ;
union recv_frame {TYPE_1__ u; } ;
typedef int uint ;
typedef int u8 ;
typedef int u16 ;
struct sta_priv {int dummy; } ;
struct sta_info {scalar_t__ ieee8021x_blocked; } ;
struct TYPE_8__ {int free_recv_queue; } ;
struct TYPE_6__ {int AuthAlgrthm; } ;
struct _adapter {TYPE_4__ recvpriv; TYPE_2__ securitypriv; struct sta_priv stapriv; } ;


 int VAR_0 ;
 int * FUNC_0 (union recv_frame*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (union recv_frame*,int *) ;
 struct sta_info* FUNC_3 (struct sta_priv*,int *) ;

union recv_frame *FUNC_4(struct _adapter *VAR_1,
     union recv_frame *VAR_2)
{
 u8 *VAR_3, *VAR_4;
 uint VAR_5;
 struct recv_frame_hdr *VAR_6;
 struct sta_info *VAR_7;
 struct sta_priv *VAR_8;
 union recv_frame *VAR_9;
 u16 VAR_10;

 VAR_8 = &VAR_1->stapriv;
 VAR_4 = FUNC_0(VAR_2);
 VAR_6 = &VAR_2->u.hdr;
 VAR_3 = VAR_6->attrib.ta;
 VAR_7 = FUNC_3(VAR_8, VAR_3);
 VAR_5 = VAR_1->securitypriv.AuthAlgrthm;
 if (VAR_5 == 2) {

  VAR_4 = VAR_4 + VAR_6->attrib.hdrlen + VAR_0;
  VAR_10 = FUNC_1(VAR_4);

  if ((VAR_7 != ((void*)0)) && (VAR_7->ieee8021x_blocked)) {



   if (VAR_10 == 0x888e) {
    VAR_9 = VAR_2;
   } else {

    FUNC_2(VAR_2,
      &VAR_1->recvpriv.free_recv_queue);
    VAR_9 = ((void*)0);
   }
  } else {




   VAR_9 = VAR_2;

   if (VAR_10 == 0x888e) {

    VAR_9 = VAR_2;
   }
  }
 } else {
  VAR_9 = VAR_2;
 }
 return VAR_9;
}
