
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct txpd {scalar_t__ tx_control; int flags; void* tx_pkt_length; void* tx_pkt_type; void* tx_pkt_offset; int bss_type; int bss_num; int pkt_delay_2ms; scalar_t__ priority; } ;
struct sk_buff {int len; scalar_t__ priority; scalar_t__ data; } ;
struct mwifiex_txinfo {int flags; } ;
struct mwifiex_private {TYPE_1__* adapter; int pkt_tx_ctrl; int bss_type; int bss_num; } ;
struct TYPE_2__ {int tx_lock_flag; scalar_t__ pps_uapsd_mode; } ;


 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mwifiex_txinfo* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct txpd*,int ,int) ;
 int FUNC_5 (struct mwifiex_private*) ;
 int FUNC_6 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_8(struct mwifiex_private *VAR_5,
       struct sk_buff *VAR_6)
{
 struct txpd *VAR_7;
 struct mwifiex_txinfo *VAR_8 = FUNC_1(VAR_6);

 FUNC_7(VAR_6, sizeof(*VAR_7));

 VAR_7 = (struct txpd *) VAR_6->data;
 FUNC_4(VAR_7, 0, sizeof(struct txpd));


 VAR_7->priority = (u8) VAR_6->priority;
 VAR_7->pkt_delay_2ms =
  FUNC_6(VAR_5, VAR_6);
 VAR_7->bss_num = VAR_5->bss_num;
 VAR_7->bss_type = VAR_5->bss_type;

 VAR_7->tx_pkt_offset = FUNC_2(sizeof(struct txpd));
 VAR_7->tx_pkt_type = FUNC_2(VAR_4);
 VAR_7->tx_pkt_length = FUNC_2(VAR_6->len -
       sizeof(*VAR_7));

 if (VAR_8->flags & VAR_1)
  VAR_7->flags |= VAR_2;

 if (VAR_7->tx_control == 0)

  VAR_7->tx_control = FUNC_3(VAR_5->pkt_tx_ctrl);

 if (FUNC_0(VAR_5) == VAR_0 &&
     VAR_5->adapter->pps_uapsd_mode) {
  if (1 == FUNC_5(VAR_5)) {
   VAR_5->adapter->tx_lock_flag = 1;
   VAR_7->flags =
    VAR_3;
  }
 }
}
