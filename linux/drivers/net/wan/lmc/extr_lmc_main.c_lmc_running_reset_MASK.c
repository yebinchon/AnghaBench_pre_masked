
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_12__ {int tx_tbusy0; } ;
struct TYPE_13__ {int lmc_intrmask; int lmc_cmdmode; TYPE_2__ extra_stats; scalar_t__ lmc_txfull; TYPE_1__* lmc_media; } ;
typedef TYPE_3__ lmc_softc_t ;
struct TYPE_11__ {int (* set_status ) (TYPE_3__*,int *) ;int (* set_link_status ) (TYPE_3__*,int) ;} ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_9 (struct net_device *VAR_5)
{
    lmc_softc_t *VAR_6 = FUNC_1(VAR_5);

    FUNC_5(VAR_5, "lmc_running_reset in");



    FUNC_0 (VAR_6, VAR_4, 0x00000000);

    FUNC_2 (VAR_6);
    FUNC_3 (VAR_6);
    FUNC_4 (VAR_6);

    VAR_6->lmc_media->set_link_status (VAR_6, 1);
    VAR_6->lmc_media->set_status (VAR_6, ((void*)0));

    FUNC_6(VAR_5);

    VAR_6->lmc_txfull = 0;
    VAR_6->extra_stats.tx_tbusy0++;

    VAR_6->lmc_intrmask = VAR_2;
    FUNC_0 (VAR_6, VAR_4, VAR_6->lmc_intrmask);

    VAR_6->lmc_cmdmode |= (VAR_1 | VAR_0);
    FUNC_0 (VAR_6, VAR_3, VAR_6->lmc_cmdmode);

    FUNC_5(VAR_5, "lmc_running_reset_out");
}
