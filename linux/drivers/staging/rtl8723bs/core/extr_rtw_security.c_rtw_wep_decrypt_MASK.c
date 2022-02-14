
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rx_pkt_attrib {scalar_t__ encrypt; int hdrlen; size_t key_index; int iv_len; int ra; } ;
struct TYPE_5__ {int len; scalar_t__ rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
union recv_frame {TYPE_3__ u; } ;
typedef size_t u8 ;
typedef int u32 ;
struct security_priv {int* dot11DefKeylen; TYPE_1__* dot11DefKey; } ;
struct arc4context {int dummy; } ;
struct adapter {struct security_priv securitypriv; } ;
typedef int sint ;
struct TYPE_4__ {size_t* skey; } ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct security_priv*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct arc4context*,size_t*,size_t*,int) ;
 int FUNC_3 (struct arc4context*,size_t*,int) ;
 int FUNC_4 (size_t*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (size_t*,size_t*,int) ;

void FUNC_7(struct adapter *VAR_4, u8 *VAR_5)
{

 u8 VAR_6[4];
 struct arc4context VAR_7;
 sint VAR_8;
 u32 VAR_9;
 u8 *VAR_10, *VAR_11, *VAR_12, VAR_13[16];
 u8 VAR_14;
 struct rx_pkt_attrib *VAR_15 = &(((union recv_frame *)VAR_5)->u.hdr.attrib);
 struct security_priv *VAR_16 = &VAR_4->securitypriv;

 VAR_10 = (unsigned char *)((union recv_frame *)VAR_5)->u.hdr.rx_data;


 if ((VAR_15->encrypt == VAR_1) || (VAR_15->encrypt == VAR_0)) {
  VAR_12 = VAR_10+VAR_15->hdrlen;

  VAR_14 = VAR_15->key_index;
  VAR_9 = VAR_16->dot11DefKeylen[VAR_14];
  FUNC_6(&VAR_13[0], VAR_12, 3);

  FUNC_6(&VAR_13[3], &VAR_16->dot11DefKey[VAR_14].skey[0], VAR_9);
  VAR_8 = ((union recv_frame *)VAR_5)->u.hdr.len-VAR_15->hdrlen-VAR_15->iv_len;

  VAR_11 = VAR_10+VAR_15->iv_len+VAR_15->hdrlen;


  FUNC_3(&VAR_7, VAR_13, 3+VAR_9);
  FUNC_2(&VAR_7, VAR_11, VAR_11, VAR_8);


  *((u32 *)VAR_6) = FUNC_5(FUNC_4(VAR_11, VAR_8-4));

  if (VAR_6[3] != VAR_11[VAR_8-1] || VAR_6[2] != VAR_11[VAR_8-2] || VAR_6[1] != VAR_11[VAR_8-3] || VAR_6[0] != VAR_11[VAR_8-4]) {
   FUNC_0(VAR_3, VAR_2, ("rtw_wep_decrypt:icv error crc[3](%x)!=payload[length-1](%x) || crc[2](%x)!=payload[length-2](%x) || crc[1](%x)!=payload[length-3](%x) || crc[0](%x)!=payload[length-4](%x)\n",
      VAR_6[3], VAR_11[VAR_8-1], VAR_6[2], VAR_11[VAR_8-2], VAR_6[1], VAR_11[VAR_8-3], VAR_6[0], VAR_11[VAR_8-4]));
  }

  FUNC_1(VAR_16, VAR_15->ra);
 }
 return;
}
