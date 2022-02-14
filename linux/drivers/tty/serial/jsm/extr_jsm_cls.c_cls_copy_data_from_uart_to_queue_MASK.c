
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct jsm_channel {int ch_r_head; int ch_r_tail; int ch_cached_lsr; int ch_c_iflag; int* ch_equeue; int ch_e_head; int ch_lock; int ch_rxcount; int ch_err_frame; int ch_err_break; int ch_err_parity; TYPE_1__* ch_cls_uart; void** ch_rqueue; int ch_err_overrun; } ;
struct TYPE_2__ {int txrx; int lsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct jsm_channel *VAR_7)
{
 int VAR_8 = 0;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 u16 VAR_11;
 u16 VAR_12;
 unsigned long VAR_13;

 if (!VAR_7)
  return;

 FUNC_1(&VAR_7->ch_lock, VAR_13);


 VAR_11 = VAR_7->ch_r_head & VAR_2;
 VAR_12 = VAR_7->ch_r_tail & VAR_2;


 VAR_9 = VAR_7->ch_cached_lsr;
 VAR_7->ch_cached_lsr = 0;


 VAR_8 = VAR_12 - VAR_11 - 1;
 if (VAR_8 < 0)
  VAR_8 += VAR_2 + 1;





 if (VAR_7->ch_c_iflag & VAR_1)
  VAR_10 |= VAR_3;

 while (1) {




  VAR_9 = FUNC_0(&VAR_7->ch_cls_uart->lsr);


  if (!(VAR_9 & VAR_4))
   break;





  if (VAR_9 & VAR_10) {
   u8 VAR_14;

   VAR_9 = 0;
   VAR_14 = FUNC_0(&VAR_7->ch_cls_uart->txrx);
   continue;
  }
  while (VAR_8 < 1) {
   VAR_12 = (VAR_12 + 1) & VAR_2;
   VAR_7->ch_r_tail = VAR_12;
   VAR_7->ch_err_overrun++;
   VAR_8++;
  }

  VAR_7->ch_equeue[VAR_11] = VAR_9 & (VAR_3 | VAR_6
         | VAR_5);
  VAR_7->ch_rqueue[VAR_11] = FUNC_0(&VAR_7->ch_cls_uart->txrx);

  VAR_8--;

  if (VAR_7->ch_equeue[VAR_11] & VAR_6)
   VAR_7->ch_err_parity++;
  if (VAR_7->ch_equeue[VAR_11] & VAR_3)
   VAR_7->ch_err_break++;
  if (VAR_7->ch_equeue[VAR_11] & VAR_5)
   VAR_7->ch_err_frame++;


  VAR_11 = (VAR_11 + 1) & VAR_2;
  VAR_7->ch_rxcount++;
 }




 VAR_7->ch_r_head = VAR_11 & VAR_2;
 VAR_7->ch_e_head = VAR_11 & VAR_0;

 FUNC_2(&VAR_7->ch_lock, VAR_13);
}
