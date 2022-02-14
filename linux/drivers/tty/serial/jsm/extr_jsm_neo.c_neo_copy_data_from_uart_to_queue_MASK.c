
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct jsm_channel {int ch_r_head; int ch_r_tail; int ch_cached_lsr; int ch_flags; int* ch_rqueue; int* ch_equeue; int ch_c_iflag; int ch_e_head; scalar_t__ ch_rxcount; TYPE_2__* ch_bd; TYPE_1__* ch_neo_uart; int ch_err_overrun; } ;
struct TYPE_4__ {int pci_dev; } ;
struct TYPE_3__ {int txrxburst; int lsr; int rfifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int *,char*,int,int) ;
 int FUNC_1 (struct jsm_channel*) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct jsm_channel *VAR_13)
{
 int VAR_14 = 0;
 u8 VAR_15 = 0;
 u8 VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 u16 VAR_19;
 u16 VAR_20;


 VAR_19 = VAR_13->ch_r_head & VAR_6;
 VAR_20 = VAR_13->ch_r_tail & VAR_6;


 VAR_15 = VAR_13->ch_cached_lsr;
 VAR_13->ch_cached_lsr = 0;


 if ((VAR_14 = VAR_20 - VAR_19 - 1) < 0)
  VAR_14 += VAR_6 + 1;
 if (!(VAR_13->ch_flags & VAR_0))
  VAR_18 = 0;
 else {
  VAR_18 = FUNC_5(&VAR_13->ch_neo_uart->rfifo);
  VAR_18 -= 3;
 }







 VAR_18 = FUNC_4(VAR_18, VAR_14);

 while (VAR_18 > 0) {




  VAR_15 = FUNC_5(&VAR_13->ch_neo_uart->lsr);






  if (VAR_15 & VAR_8)
   break;


  VAR_17 = FUNC_4(((u32) VAR_18), (VAR_7 - (u32) VAR_19));







  VAR_17 = FUNC_4((u32) VAR_17, (u32) 12);






  if (VAR_15 & (VAR_12 | VAR_9))
   VAR_13->ch_flags |= (VAR_1 | VAR_2);

  VAR_15 = 0;


  FUNC_2(VAR_13->ch_rqueue + VAR_19, &VAR_13->ch_neo_uart->txrxburst, VAR_17);





  FUNC_3(VAR_13->ch_equeue + VAR_19, 0, VAR_17);


  VAR_19 = (VAR_19 + VAR_17) & VAR_6;
  VAR_18 -= VAR_17;
  VAR_14 -= VAR_17;
  VAR_13->ch_rxcount += VAR_17;
 }





 if (VAR_13->ch_c_iflag & VAR_4)
  VAR_16 |= VAR_10;





 while (1) {





  VAR_15 |= FUNC_5(&VAR_13->ch_neo_uart->lsr);






  if (!(VAR_15 & VAR_11)) {
   VAR_13->ch_cached_lsr = VAR_15;
   break;
  }


  VAR_15 &= ~VAR_11;






  if (VAR_15 & (VAR_12 | VAR_9)) {
   VAR_15 &= ~(VAR_12 | VAR_9);
   VAR_13->ch_flags |= (VAR_1 | VAR_2);
  }




  if (VAR_15 & VAR_16) {
   u8 VAR_21;
   VAR_15 = 0;
   FUNC_2(&VAR_21, &VAR_13->ch_neo_uart->txrxburst, 1);
   continue;
  }
  while (VAR_14 < 1) {
   FUNC_0(VAR_5, &VAR_13->ch_bd->pci_dev,
    "Queue full, dropping DATA:%x LSR:%x\n",
    VAR_13->ch_rqueue[VAR_20], VAR_13->ch_equeue[VAR_20]);

   VAR_13->ch_r_tail = VAR_20 = (VAR_20 + 1) & VAR_6;
   VAR_13->ch_err_overrun++;
   VAR_14++;
  }

  FUNC_2(VAR_13->ch_rqueue + VAR_19, &VAR_13->ch_neo_uart->txrxburst, 1);
  VAR_13->ch_equeue[VAR_19] = (u8) VAR_15;

  FUNC_0(VAR_5, &VAR_13->ch_bd->pci_dev, "DATA/LSR pair: %x %x\n",
   VAR_13->ch_rqueue[VAR_19], VAR_13->ch_equeue[VAR_19]);


  VAR_15 = 0;


  VAR_19 = (VAR_19 + 1) & VAR_6;

  VAR_14--;
  VAR_13->ch_rxcount++;
 }




 VAR_13->ch_r_head = VAR_19 & VAR_6;
 VAR_13->ch_e_head = VAR_19 & VAR_3;
 FUNC_1(VAR_13);
}
