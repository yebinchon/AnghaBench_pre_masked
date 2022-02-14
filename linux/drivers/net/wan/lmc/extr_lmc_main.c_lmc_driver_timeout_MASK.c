
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int name; } ;
struct TYPE_11__ {int tx_ProcTimeout; int tx_tbusy_calls; } ;
struct TYPE_12__ {int lmc_lock; TYPE_3__ extra_stats; TYPE_2__* lmc_device; } ;
typedef TYPE_4__ lmc_softc_t ;
struct TYPE_9__ {int tx_errors; } ;
struct TYPE_10__ {TYPE_1__ stats; } ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,char*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_8)
{
    lmc_softc_t *VAR_9 = FUNC_3(VAR_8);
    u32 VAR_10;
    unsigned long VAR_11;

    FUNC_7(VAR_8, "lmc_driver_timeout in");

    FUNC_10(&VAR_9->lmc_lock, VAR_11);

    FUNC_9("%s: Xmitter busy|\n", VAR_8->name);

    VAR_9->extra_stats.tx_tbusy_calls++;
    if (VAR_7 - FUNC_4(VAR_8) < VAR_3)
     goto bug_out;
    FUNC_2(VAR_2,
                  FUNC_0 (VAR_9, VAR_5),
    VAR_9->extra_stats.tx_ProcTimeout);

    FUNC_6 (VAR_8);

    FUNC_2(VAR_0, FUNC_0 (VAR_9, VAR_5), 0);
    FUNC_2(VAR_1,
                  FUNC_5 (VAR_9, 0, 16),
                  FUNC_5 (VAR_9, 0, 17));


    VAR_10 = FUNC_0 (VAR_9, VAR_4);
    FUNC_1 (VAR_9, VAR_4, VAR_10 | 0x0002);
    FUNC_1 (VAR_9, VAR_4, VAR_10 | 0x2002);


    FUNC_1 (VAR_9, VAR_6, 0);

    VAR_9->lmc_device->stats.tx_errors++;
    VAR_9->extra_stats.tx_ProcTimeout++;

    FUNC_8(VAR_8);

bug_out:

    FUNC_11(&VAR_9->lmc_lock, VAR_11);

    FUNC_7(VAR_8, "lmc_driver_timeout out");


}
