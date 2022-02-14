
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int link_faults; int xaui_pcs_align_change; int xaui_pcs_ctc_err; int serdes_signal_loss; int rx_fifo_ovfl; int tx_fifo_urun; int rx_fifo_parity_err; int tx_fifo_parity_err; } ;
struct cmac {scalar_t__ offset; TYPE_1__ stats; } ;
struct adapter {int dummy; } ;
struct TYPE_4__ {struct cmac mac; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct adapter*,char*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 TYPE_2__* FUNC_4 (struct adapter*,unsigned int) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,unsigned int) ;
 int FUNC_7 (struct adapter*,scalar_t__) ;
 int FUNC_8 (struct adapter*,scalar_t__,int,int ) ;
 int FUNC_9 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_10(struct adapter *VAR_11, unsigned int VAR_12)
{
 struct cmac *VAR_13 = &FUNC_4(VAR_11, VAR_12)->mac;






 u32 VAR_14 = FUNC_7(VAR_11, VAR_0 + VAR_13->offset) &
      ~VAR_2;

 if (VAR_14 & FUNC_3(VAR_9)) {
  VAR_13->stats.tx_fifo_parity_err++;
  FUNC_0(VAR_11, "port%d: MAC TX FIFO parity error\n", VAR_12);
 }
 if (VAR_14 & FUNC_1(VAR_7)) {
  VAR_13->stats.rx_fifo_parity_err++;
  FUNC_0(VAR_11, "port%d: MAC RX FIFO parity error\n", VAR_12);
 }
 if (VAR_14 & VAR_3)
  VAR_13->stats.tx_fifo_urun++;
 if (VAR_14 & VAR_2)
  VAR_13->stats.rx_fifo_ovfl++;
 if (VAR_14 & FUNC_2(VAR_8))
  VAR_13->stats.serdes_signal_loss++;
 if (VAR_14 & VAR_5)
  VAR_13->stats.xaui_pcs_ctc_err++;
 if (VAR_14 & VAR_4)
  VAR_13->stats.xaui_pcs_align_change++;
 if (VAR_14 & VAR_6) {
  FUNC_8(VAR_11,
     VAR_1 + VAR_13->offset,
     VAR_6, 0);
  VAR_13->stats.link_faults++;

  FUNC_6(VAR_11, VAR_12);
 }

 if (VAR_14 & VAR_10)
  FUNC_5(VAR_11);

 FUNC_9(VAR_11, VAR_0 + VAR_13->offset, VAR_14);
 return VAR_14 != 0;
}
