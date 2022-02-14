
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {int tx_ch_num; TYPE_1__* txv; } ;
struct TYPE_3__ {int ch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cpsw_priv*,int ,char*) ;
 int FUNC_3 (struct cpsw_common*) ;
 int FUNC_4 (struct cpsw_common*) ;
 struct cpsw_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_1)
{
 struct cpsw_priv *VAR_2 = FUNC_5(VAR_1);
 struct cpsw_common *VAR_3 = VAR_2->cpsw;
 int VAR_4;

 FUNC_2(VAR_2, VAR_0, "transmit timeout, restarting dma\n");
 VAR_1->stats.tx_errors++;
 FUNC_3(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_3->tx_ch_num; VAR_4++) {
  FUNC_1(VAR_3->txv[VAR_4].ch);
  FUNC_0(VAR_3->txv[VAR_4].ch);
 }

 FUNC_4(VAR_3);
 FUNC_6(VAR_1);
 FUNC_7(VAR_1);
}
