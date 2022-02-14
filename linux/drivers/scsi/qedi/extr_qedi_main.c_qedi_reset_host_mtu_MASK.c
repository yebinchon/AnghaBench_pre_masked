
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_5__ {int hw_mac; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
struct qedi_ctx {int cdev; TYPE_2__ dev_info; scalar_t__ ll2_mtu; int dbg_ctx; } ;
struct qed_ll2_params {int rx_vlan_stripping; int ll2_mac_address; scalar_t__ drop_ttl0_packets; scalar_t__ mtu; } ;
typedef int params ;
struct TYPE_8__ {TYPE_3__* ll2; } ;
struct TYPE_7__ {int (* start ) (int ,struct qed_ll2_params*) ;int (* stop ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qed_ll2_params*,int ,int) ;
 int FUNC_3 (struct qedi_ctx*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_4 (struct qedi_ctx*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct qed_ll2_params*) ;

void FUNC_7(struct qedi_ctx *VAR_4, u16 VAR_5)
{
 struct qed_ll2_params VAR_6;

 FUNC_4(VAR_4);

 VAR_3->ll2->stop(VAR_4->cdev);
 FUNC_3(VAR_4);

 FUNC_0(&VAR_4->dbg_ctx, VAR_1, "old MTU %u, new MTU %u\n",
    VAR_4->ll2_mtu, VAR_5);
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_4->ll2_mtu = VAR_5;
 VAR_6.mtu = VAR_4->ll2_mtu + VAR_0 + VAR_2;
 VAR_6.drop_ttl0_packets = 0;
 VAR_6.rx_vlan_stripping = 1;
 FUNC_1(VAR_6.ll2_mac_address, VAR_4->dev_info.common.hw_mac);
 VAR_3->ll2->start(VAR_4->cdev, &VAR_6);
}
