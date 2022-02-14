
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int stats; } ;
struct TYPE_4__ {TYPE_1__ tx_sc; } ;
struct macsec_dev {TYPE_2__ secy; int stats; } ;


 int FUNC_0 (int ) ;
 struct macsec_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct macsec_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->stats);
 FUNC_0(VAR_1->secy.tx_sc.stats);

}
