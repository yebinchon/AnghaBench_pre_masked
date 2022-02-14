
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rx_pkt_attrib {scalar_t__ encrypt; int hdrlen; int iv_len; int ra; int * ta; } ;
struct TYPE_7__ {int len; scalar_t__ rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_8__ {TYPE_3__ hdr; } ;
union recv_frame {TYPE_4__ u; } ;
typedef int u8 ;
struct TYPE_6__ {int* skey; } ;
struct sta_info {TYPE_2__ x_UncstKey; } ;
struct security_priv {int binstallGrpkey; TYPE_1__* XGrpKey; } ;
struct _adapter {int stapriv; struct security_priv securitypriv; } ;
typedef int sint ;
struct TYPE_5__ {int* skey; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int,int*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct sta_info* FUNC_2 (int *,int *) ;

void FUNC_3(struct _adapter *VAR_1, u8 *VAR_2)
{

 sint VAR_3;
 u8 *VAR_4, *VAR_5, *VAR_6, VAR_7;
 struct sta_info *VAR_8;
 struct rx_pkt_attrib *VAR_9 = &((union recv_frame *)
        VAR_2)->u.hdr.attrib;
 struct security_priv *VAR_10 = &VAR_1->securitypriv;

 VAR_4 = (unsigned char *)((union recv_frame *)VAR_2)->
   u.hdr.rx_data;

 if (VAR_9->encrypt == VAR_0) {
  VAR_8 = FUNC_2(&VAR_1->stapriv,
         &VAR_9->ta[0]);
  if (VAR_8 != ((void*)0)) {
   if (FUNC_1(VAR_9->ra)) {
    VAR_6 = VAR_4 + VAR_9->hdrlen;
    VAR_7 = VAR_6[3];
    VAR_5 = &VAR_10->XGrpKey[
       ((VAR_7 >> 6) & 0x3) - 1].skey[0];
    if (!VAR_10->binstallGrpkey)
     return;

   } else {
    VAR_5 = &VAR_8->x_UncstKey.skey[0];
   }
   VAR_3 = ((union recv_frame *)VAR_2)->
     u.hdr.len - VAR_9->hdrlen -
     VAR_9->iv_len;
   FUNC_0(VAR_5, VAR_9->hdrlen, VAR_4,
         VAR_3);
  }
 }
}
