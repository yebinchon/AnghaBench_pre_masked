
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ar5523_tx_cmd {int olen; int flags; int res; int * odata; int done; TYPE_1__* urb_tx; scalar_t__ buf_tx; } ;
struct ar5523_cmd_hdr {void* magic; int priv; void* code; void* len; } ;
struct ar5523 {int dev; struct ar5523_tx_cmd tx_cmd; } ;
struct TYPE_3__ {int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ar5523*,char*,int) ;
 int FUNC_2 (struct ar5523*,char*,int,...) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ar5523_cmd_hdr*,void const*,int) ;
 int FUNC_5 (struct ar5523_cmd_hdr*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int ,scalar_t__,int,int ,struct ar5523_tx_cmd*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(struct ar5523 *VAR_7, u32 VAR_8, const void *VAR_9,
        int VAR_10, void *VAR_11, int VAR_12, int VAR_13)
{
 struct ar5523_cmd_hdr *VAR_14;
 struct ar5523_tx_cmd *VAR_15 = &VAR_7->tx_cmd;
 int VAR_16, VAR_17;


 VAR_16 = (sizeof(struct ar5523_cmd_hdr) + VAR_10 + 3) & ~3;

 VAR_14 = (struct ar5523_cmd_hdr *)VAR_15->buf_tx;
 FUNC_5(VAR_14, 0, sizeof(struct ar5523_cmd_hdr));
 VAR_14->len = FUNC_3(VAR_16);
 VAR_14->code = FUNC_3(VAR_8);
 VAR_14->priv = VAR_1;

 if (VAR_13 & VAR_0)
  VAR_14->magic = FUNC_3(1 << 24);
 FUNC_4(VAR_14 + 1, VAR_9, VAR_10);

 VAR_15->odata = VAR_11;
 VAR_15->olen = VAR_12;
 VAR_15->flags = VAR_13;

 FUNC_1(VAR_7, "do cmd %02x\n", VAR_8);

 FUNC_6(VAR_15->urb_tx, VAR_7->dev, FUNC_0(VAR_7->dev),
     VAR_15->buf_tx, VAR_16, VAR_6, VAR_15);
 VAR_15->urb_tx->transfer_flags |= VAR_5;

 VAR_17 = FUNC_7(VAR_15->urb_tx, VAR_3);
 if (VAR_17) {
  FUNC_2(VAR_7, "could not send command 0x%x, error=%d\n",
      VAR_8, VAR_17);
  return VAR_17;
 }

 if (!FUNC_8(&VAR_15->done, 2 * VAR_4)) {
  VAR_15->odata = ((void*)0);
  FUNC_2(VAR_7, "timeout waiting for command %02x reply\n",
      VAR_8);
  VAR_15->res = -VAR_2;
 }
 return VAR_15->res;
}
