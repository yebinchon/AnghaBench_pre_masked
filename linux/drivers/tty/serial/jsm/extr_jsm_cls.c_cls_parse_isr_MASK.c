
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
struct jsm_channel {int ch_flags; TYPE_1__* ch_cls_uart; int ch_lock; } ;
struct jsm_board {size_t nasync; struct jsm_channel** channels; } ;
struct TYPE_2__ {int msr; int isr_fcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct jsm_channel*) ;
 int FUNC_1 (struct jsm_channel*) ;
 int FUNC_2 (struct jsm_channel*,int) ;
 int FUNC_3 (struct jsm_channel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_7(struct jsm_board *VAR_6, uint VAR_7)
{
 struct jsm_channel *VAR_8;
 u8 VAR_9 = 0;
 unsigned long VAR_10;






 if (VAR_7 >= VAR_6->nasync)
  return;

 VAR_8 = VAR_6->channels[VAR_7];
 if (!VAR_8)
  return;


 while (1) {
  VAR_9 = FUNC_4(&VAR_8->ch_cls_uart->isr_fcr);


  if (VAR_9 & VAR_2)
   break;


  if (VAR_9 & (VAR_3 | VAR_4)) {

   FUNC_1(VAR_8);
   FUNC_3(VAR_8);
  }


  if (VAR_9 & VAR_5) {

   FUNC_5(&VAR_8->ch_lock, VAR_10);
   VAR_8->ch_flags |= (VAR_0 | VAR_1);
   FUNC_6(&VAR_8->ch_lock, VAR_10);
   FUNC_0(VAR_8);
  }
  FUNC_2(VAR_8, FUNC_4(&VAR_8->ch_cls_uart->msr));
 }
}
