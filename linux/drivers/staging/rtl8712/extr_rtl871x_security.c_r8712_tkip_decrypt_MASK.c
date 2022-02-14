
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rx_pkt_attrib {scalar_t__ encrypt; int hdrlen; int iv_len; int * ta; int ra; } ;
struct TYPE_5__ {int len; scalar_t__ rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
union pn48 {int val; } ;
typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int* skey; } ;
struct sta_info {TYPE_4__ x_UncstKey; } ;
struct security_priv {int binstallGrpkey; TYPE_3__* XGrpKey; } ;
struct arc4context {int dummy; } ;
struct _adapter {int stapriv; struct security_priv securitypriv; } ;
typedef int __le32 ;
struct TYPE_7__ {int* skey; } ;


 int FUNC_0 (int*,union pn48) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct arc4context*,int*,int*,int) ;
 int FUNC_2 (struct arc4context*,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__*,int*,int *,int) ;
 int FUNC_7 (int*,int*,unsigned short*,scalar_t__) ;
 struct sta_info* FUNC_8 (int *,int *) ;

void FUNC_9(struct _adapter *VAR_1, u8 *VAR_2)
{
 u16 VAR_3;
 u32 VAR_4;
 u8 VAR_5[16];
 u8 VAR_6[16];
 u8 VAR_7[4];
 struct arc4context VAR_8;
 u32 VAR_9;
 u8 *VAR_10, *VAR_11, *VAR_12, *VAR_13, VAR_14 = 0;
 union pn48 VAR_15;
 struct sta_info *VAR_16;
 struct rx_pkt_attrib *VAR_17 = &((union recv_frame *)
        VAR_2)->u.hdr.attrib;
 struct security_priv *VAR_18 = &VAR_1->securitypriv;

 VAR_10 = (unsigned char *)((union recv_frame *)
       VAR_2)->u.hdr.rx_data;

 if (VAR_17->encrypt == VAR_0) {
  VAR_16 = FUNC_8(&VAR_1->stapriv,
         &VAR_17->ta[0]);
  if (VAR_16 != ((void*)0)) {
   VAR_12 = VAR_10 + VAR_17->hdrlen;
   VAR_11 = VAR_10 + VAR_17->iv_len +
      VAR_17->hdrlen;
   VAR_9 = ((union recv_frame *)VAR_2)->
     u.hdr.len - VAR_17->hdrlen -
     VAR_17->iv_len;
   if (FUNC_5(VAR_17->ra)) {
    VAR_14 = VAR_12[3];
    VAR_13 = &VAR_18->XGrpKey[
      ((VAR_14 >> 6) & 0x3) - 1].skey[0];
    if (!VAR_18->binstallGrpkey)
     return;
   } else {
    VAR_13 = &VAR_16->x_UncstKey.skey[0];
   }
   FUNC_0(VAR_12, VAR_15);
   VAR_3 = (u16)(VAR_15.val);
   VAR_4 = (u32)(VAR_15.val >> 16);
   FUNC_6((u16 *)&VAR_6[0], VAR_13, &VAR_17->ta[0],
    VAR_4);
   FUNC_7(&VAR_5[0], VAR_13, (unsigned short *)
          &VAR_6[0], VAR_3);

   FUNC_2(&VAR_8, VAR_5, 16);
   FUNC_1(&VAR_8, VAR_11, VAR_11, VAR_9);
   *((__le32 *)VAR_7) = FUNC_3(FUNC_4(VAR_11,
     VAR_9 - 4));
  }
 }
}
