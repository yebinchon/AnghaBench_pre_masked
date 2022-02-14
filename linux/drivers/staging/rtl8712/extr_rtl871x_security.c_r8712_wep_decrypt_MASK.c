
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rx_pkt_attrib {scalar_t__ encrypt; int hdrlen; int iv_len; } ;
struct TYPE_5__ {int len; scalar_t__ rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
union recv_frame {TYPE_3__ u; } ;
typedef int u8 ;
typedef int u32 ;
struct security_priv {int* DefKeylen; size_t PrivacyKeyIndex; TYPE_1__* DefKey; } ;
struct arc4context {int dummy; } ;
struct _adapter {struct security_priv securitypriv; } ;
typedef int __le32 ;
struct TYPE_4__ {int* skey; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct arc4context*,int*,int*,int) ;
 int FUNC_1 (struct arc4context*,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int*,int) ;

void FUNC_5(struct _adapter *VAR_2, u8 *VAR_3)
{

 u8 VAR_4[4];
 struct arc4context VAR_5;
 u32 VAR_6, VAR_7;
 u8 *VAR_8, *VAR_9, *VAR_10, VAR_11[16];
 u8 VAR_12;
 struct rx_pkt_attrib *VAR_13 = &(((union recv_frame *)
       VAR_3)->u.hdr.attrib);
 struct security_priv *VAR_14 = &VAR_2->securitypriv;

 VAR_8 = (unsigned char *)((union recv_frame *)VAR_3)->
    u.hdr.rx_data;

 if ((VAR_13->encrypt == VAR_1) || (VAR_13->encrypt ==
      VAR_0)) {
  VAR_10 = VAR_8 + VAR_13->hdrlen;
  VAR_12 = (VAR_10[3] & 0x3);
  VAR_7 = VAR_14->DefKeylen[VAR_12];
  FUNC_4(&VAR_11[0], VAR_10, 3);
  FUNC_4(&VAR_11[3], &VAR_14->DefKey[
   VAR_14->PrivacyKeyIndex].skey[0],
   VAR_7);
  VAR_6 = ((union recv_frame *)VAR_3)->
      u.hdr.len - VAR_13->hdrlen - VAR_13->iv_len;
  VAR_9 = VAR_8 + VAR_13->iv_len + VAR_13->hdrlen;

  FUNC_1(&VAR_5, VAR_11, 3 + VAR_7);
  FUNC_0(&VAR_5, VAR_9, VAR_9, VAR_6);

  *((__le32 *)VAR_4) = FUNC_2(FUNC_3(VAR_9, VAR_6 - 4));
 }
}
