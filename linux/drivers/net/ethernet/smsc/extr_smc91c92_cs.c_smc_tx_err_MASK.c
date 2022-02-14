
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_private {int duplex; int packets_waiting; int tx_err; } ;
struct TYPE_2__ {int tx_aborted_errors; int tx_window_errors; int tx_carrier_errors; int tx_errors; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct smc_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device * VAR_14)
{
    struct smc_private *VAR_15 = FUNC_3(VAR_14);
    unsigned int VAR_16 = VAR_14->base_addr;
    int VAR_17 = FUNC_1(VAR_16 + VAR_4) & 0xff;
    int VAR_18 = FUNC_1(VAR_16 + VAR_1) & 0x7f;
    int VAR_19;


    FUNC_4(VAR_18, VAR_16 + VAR_4);


    FUNC_4(VAR_6 | VAR_7 | 0, VAR_16 + VAR_5);

    VAR_19 = FUNC_1(VAR_16 + VAR_0);

    VAR_14->stats.tx_errors++;
    if (VAR_19 & VAR_12) VAR_14->stats.tx_carrier_errors++;
    if (VAR_19 & VAR_11) VAR_14->stats.tx_window_errors++;
    if (VAR_19 & VAR_10) {
 VAR_14->stats.tx_aborted_errors++;
 VAR_15->tx_err++;
    }

    if (VAR_19 & VAR_13) {
 FUNC_2(VAR_14, "Successful packet caused error interrupt?\n");
    }

    FUNC_0(0);
    FUNC_4(FUNC_1(VAR_16 + VAR_8) | VAR_9 | VAR_15->duplex, VAR_16 + VAR_8);
    FUNC_0(2);

    FUNC_4(VAR_2, VAR_16 + VAR_3);


    VAR_15->packets_waiting--;

    FUNC_4(VAR_17, VAR_16 + VAR_4);
}
