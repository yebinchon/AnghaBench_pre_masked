
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raw; } ;
struct il_rx_pkt {TYPE_2__ u; int len_n_flags; } ;
struct il_rx_buf {int dummy; } ;
struct TYPE_3__ {int stats; } ;
struct il_priv {TYPE_1__ _3945; } ;
struct il3945_notif_stats {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct il_priv*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 struct il_rx_pkt* FUNC_4 (struct il_rx_buf*) ;

void
FUNC_5(struct il_priv *VAR_1, struct il_rx_buf *VAR_2)
{
 struct il_rx_pkt *VAR_3 = FUNC_4(VAR_2);

 FUNC_0("Statistics notification received (%d vs %d).\n",
      (int)sizeof(struct il3945_notif_stats),
      FUNC_2(VAR_3->len_n_flags) & VAR_0);




 FUNC_3(&VAR_1->_3945.stats, VAR_3->u.raw, sizeof(VAR_1->_3945.stats));
}
