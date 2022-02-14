
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int irq; } ;
struct TYPE_13__ {int tx_tbusy0; int tx_tbusy1; } ;
struct TYPE_14__ {int got_irq; TYPE_4__ extra_stats; struct sk_buff** lmc_txq; struct sk_buff** lmc_rxq; TYPE_3__* lmc_rxring; TYPE_2__* lmc_device; } ;
typedef TYPE_5__ lmc_softc_t ;
struct TYPE_12__ {int buffer1; scalar_t__ length; scalar_t__ status; } ;
struct TYPE_10__ {int rx_missed_errors; } ;
struct TYPE_11__ {TYPE_1__ stats; } ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_5__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9 (struct net_device *VAR_8)
{
    lmc_softc_t *VAR_9 = FUNC_3(VAR_8);
    u32 VAR_10;
    int VAR_11;

    FUNC_6(VAR_8, "lmc_ifdown in");



    FUNC_7(VAR_8);
    VAR_9->extra_stats.tx_tbusy1++;



    FUNC_1 (VAR_9, VAR_6, 0x00000000);


    VAR_10 = FUNC_0 (VAR_9, VAR_5);
    VAR_10 &= ~VAR_1;
    VAR_10 &= ~VAR_0;
    FUNC_1 (VAR_9, VAR_5, VAR_10);

    VAR_9->lmc_device->stats.rx_missed_errors +=
     FUNC_0(VAR_9, VAR_7) & 0xffff;


    if(VAR_9->got_irq == 1){
        FUNC_4 (VAR_8->irq, VAR_8);
        VAR_9->got_irq = 0;
    }


    for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
    {
        struct sk_buff *VAR_12 = VAR_9->lmc_rxq[VAR_11];
        VAR_9->lmc_rxq[VAR_11] = ((void*)0);
        VAR_9->lmc_rxring[VAR_11].status = 0;
        VAR_9->lmc_rxring[VAR_11].length = 0;
        VAR_9->lmc_rxring[VAR_11].buffer1 = 0xDEADBEEF;
        if (VAR_12 != ((void*)0))
            FUNC_2(VAR_12);
        VAR_9->lmc_rxq[VAR_11] = ((void*)0);
    }

    for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
    {
        if (VAR_9->lmc_txq[VAR_11] != ((void*)0))
            FUNC_2(VAR_9->lmc_txq[VAR_11]);
        VAR_9->lmc_txq[VAR_11] = ((void*)0);
    }

    FUNC_5 (VAR_9, VAR_2);

    FUNC_8(VAR_8);
    VAR_9->extra_stats.tx_tbusy0++;

    FUNC_6(VAR_8, "lmc_ifdown out");

    return 0;
}
