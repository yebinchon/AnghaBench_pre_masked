
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u16 ;
struct sk_buff {int mac_len; } ;
struct ieee802154_hw {struct ca8210_priv* priv; } ;
struct TYPE_9__ {int mode; int pan_id; int extended_addr; } ;
struct TYPE_8__ {int type; int security_enabled; int intra_pan; int dest_addr_mode; int source_addr_mode; } ;
struct TYPE_7__ {int mode; int pan_id; int extended_addr; } ;
struct TYPE_6__ {int level; void* key_id; int extended_src; void* key_id_mode; } ;
struct ieee802154_hdr {TYPE_4__ source; TYPE_3__ fc; TYPE_2__ dest; TYPE_1__ sec; } ;
struct ca8210_priv {TYPE_5__* spi; scalar_t__ promiscuous; } ;
typedef int hdr ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct sk_buff*,struct ieee802154_hdr*) ;
 int FUNC_5 (struct ieee802154_hw*,struct sk_buff*,void*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,void**,int) ;
 int FUNC_8 (struct sk_buff*,void**,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(
 struct ieee802154_hw *VAR_3,
 size_t VAR_4,
 u8 *VAR_5
)
{
 struct ieee802154_hdr VAR_6;
 int VAR_7;
 int VAR_8;
 u8 VAR_9 = VAR_5[23];
 struct sk_buff *VAR_10;
 struct ca8210_priv *VAR_11 = VAR_3->priv;


 VAR_10 = FUNC_0(VAR_2 + sizeof(VAR_6));
 if (!VAR_10)
  return -VAR_1;

 FUNC_9(VAR_10, sizeof(VAR_6));

 VAR_7 = VAR_5[22];
 if (VAR_7 > VAR_2) {
  FUNC_3(
   &VAR_11->spi->dev,
   "received erroneously large msdu length!\n"
  );
  FUNC_6(VAR_10);
  return -VAR_0;
 }
 FUNC_2(&VAR_11->spi->dev, "skb buffer length = %d\n", VAR_7);

 if (VAR_11->promiscuous)
  goto copy_payload;


 VAR_6.sec.level = VAR_5[29 + VAR_7];
 FUNC_2(&VAR_11->spi->dev, "security level: %#03x\n", VAR_6.sec.level);
 if (VAR_6.sec.level > 0) {
  VAR_6.sec.key_id_mode = VAR_5[30 + VAR_7];
  FUNC_7(&VAR_6.sec.extended_src, &VAR_5[31 + VAR_7], 8);
  VAR_6.sec.key_id = VAR_5[39 + VAR_7];
 }
 VAR_6.source.mode = VAR_5[0];
 FUNC_2(&VAR_11->spi->dev, "srcAddrMode: %#03x\n", VAR_6.source.mode);
 VAR_6.source.pan_id = *(u16 *)&VAR_5[1];
 FUNC_2(&VAR_11->spi->dev, "srcPanId: %#06x\n", VAR_6.source.pan_id);
 FUNC_7(&VAR_6.source.extended_addr, &VAR_5[3], 8);
 VAR_6.dest.mode = VAR_5[11];
 FUNC_2(&VAR_11->spi->dev, "dstAddrMode: %#03x\n", VAR_6.dest.mode);
 VAR_6.dest.pan_id = *(u16 *)&VAR_5[12];
 FUNC_2(&VAR_11->spi->dev, "dstPanId: %#06x\n", VAR_6.dest.pan_id);
 FUNC_7(&VAR_6.dest.extended_addr, &VAR_5[14], 8);


 VAR_6.fc.type = 1;
 if (VAR_6.sec.level)
  VAR_6.fc.security_enabled = 1;
 else
  VAR_6.fc.security_enabled = 0;
 if (VAR_5[1] != VAR_5[12] || VAR_5[2] != VAR_5[13])
  VAR_6.fc.intra_pan = 1;
 else
  VAR_6.fc.intra_pan = 0;
 VAR_6.fc.dest_addr_mode = VAR_6.dest.mode;
 VAR_6.fc.source_addr_mode = VAR_6.source.mode;


 VAR_8 = FUNC_4(VAR_10, &VAR_6);

 if (VAR_8 < 0) {
  FUNC_1(&VAR_11->spi->dev, "failed to push mac hdr onto skb!\n");
  FUNC_6(VAR_10);
  return VAR_8;
 }

 FUNC_10(VAR_10);
 VAR_10->mac_len = VAR_8;

copy_payload:


 FUNC_8(VAR_10, &VAR_5[29], VAR_7);

 FUNC_5(VAR_3, VAR_10, VAR_9);
 return 0;
}
