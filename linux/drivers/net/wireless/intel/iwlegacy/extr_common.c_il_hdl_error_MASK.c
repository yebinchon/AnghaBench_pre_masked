
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int error_info; int bad_cmd_seq_num; int cmd_id; int error_type; } ;
struct TYPE_3__ {TYPE_2__ err_resp; } ;
struct il_rx_pkt {TYPE_1__ u; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct il_rx_pkt* FUNC_4 (struct il_rx_buf*) ;

void
FUNC_5(struct il_priv *VAR_0, struct il_rx_buf *VAR_1)
{
 struct il_rx_pkt *VAR_2 = FUNC_4(VAR_1);

 FUNC_0("Error Reply type 0x%08X cmd %s (0x%02X) "
        "seq 0x%04X ser 0x%08X\n",
        FUNC_3(VAR_2->u.err_resp.error_type),
        FUNC_1(VAR_2->u.err_resp.cmd_id),
        VAR_2->u.err_resp.cmd_id,
        FUNC_2(VAR_2->u.err_resp.bad_cmd_seq_num),
        FUNC_3(VAR_2->u.err_resp.error_info));
}
