
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {int tx_NoCompleteCnt; int tx_tbusy1; } ;
struct TYPE_8__ {int lmc_next_tx; int lmc_taint_tx; int lmc_txfull; int TxDescriptControlInit; int lmc_lock; TYPE_2__* lmc_txring; TYPE_1__ extra_stats; struct sk_buff** lmc_txq; } ;
typedef TYPE_3__ lmc_softc_t ;
struct TYPE_7__ {int length; int status; int buffer1; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_7,
     struct net_device *VAR_8)
{
    lmc_softc_t *VAR_9 = FUNC_3(VAR_8);
    u32 VAR_10;
    int VAR_11;
    unsigned long VAR_12;

    FUNC_4(VAR_8, "lmc_start_xmit in");

    FUNC_7(&VAR_9->lmc_lock, VAR_12);



    VAR_11 = VAR_9->lmc_next_tx % VAR_4;

    VAR_9->lmc_txq[VAR_11] = VAR_7;
    VAR_9->lmc_txring[VAR_11].buffer1 = FUNC_9 (VAR_7->data);

    FUNC_0("xmit", VAR_7->data, VAR_7->len);



    if (VAR_9->lmc_next_tx - VAR_9->lmc_taint_tx < VAR_4 / 2)
    {

        VAR_10 = 0x60000000;
        FUNC_6(VAR_8);
    }
    else if (VAR_9->lmc_next_tx - VAR_9->lmc_taint_tx == VAR_4 / 2)
    {

        VAR_10 = 0xe0000000;
        FUNC_6(VAR_8);
    }
    else if (VAR_9->lmc_next_tx - VAR_9->lmc_taint_tx < VAR_4 - 1)
    {

        VAR_10 = 0x60000000;
        FUNC_6(VAR_8);
    }
    else
    {

        VAR_10 = 0xe0000000;
        VAR_9->lmc_txfull = 1;
        FUNC_5(VAR_8);
    }
    if (VAR_11 == VAR_4 - 1)
 VAR_10 |= VAR_2;


    VAR_10 = VAR_9->lmc_txring[VAR_11].length = (VAR_7->len) | VAR_10 |
      VAR_9->TxDescriptControlInit;





    VAR_9->extra_stats.tx_NoCompleteCnt++;
    VAR_9->lmc_next_tx++;


    FUNC_2(VAR_1, VAR_10, VAR_11);
    VAR_9->lmc_txring[VAR_11].status = 0x80000000;


    FUNC_1 (VAR_9, VAR_6, 0);

    FUNC_8(&VAR_9->lmc_lock, VAR_12);

    FUNC_4(VAR_8, "lmc_start_xmit_out");
    return VAR_5;
}
