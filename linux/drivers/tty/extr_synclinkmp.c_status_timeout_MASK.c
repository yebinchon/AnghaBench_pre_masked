
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned char u16 ;
struct timer_list {int dummy; } ;
struct TYPE_6__ {unsigned char old_signals; unsigned char serial_signals; int status_timer; int lock; } ;
typedef TYPE_1__ SLMP_INFO ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 TYPE_1__* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (TYPE_1__*,unsigned char) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_11)
{
 u16 VAR_12 = 0;
 SLMP_INFO *VAR_13 = FUNC_0(VAR_13, VAR_11, VAR_10);
 unsigned long VAR_14;
 unsigned char VAR_15;


 FUNC_5(&VAR_13->lock,VAR_14);
 FUNC_1(VAR_13);
 FUNC_6(&VAR_13->lock,VAR_14);



 VAR_15 = VAR_13->old_signals ^ VAR_13->serial_signals;
 VAR_13->old_signals = VAR_13->serial_signals;

 if (VAR_15 & VAR_6)
  VAR_12 |= VAR_2|(VAR_13->serial_signals&VAR_6);

 if (VAR_15 & VAR_7)
  VAR_12 |= VAR_3|(VAR_13->serial_signals&VAR_7);

 if (VAR_15 & VAR_5)
  VAR_12 |= VAR_1|(VAR_13->serial_signals&VAR_5);

 if (VAR_15 & VAR_4)
  VAR_12 |= VAR_0|(VAR_13->serial_signals&VAR_4);

 if (VAR_12)
  FUNC_2(VAR_13,VAR_12);

 FUNC_3(&VAR_13->status_timer, VAR_9 + FUNC_4(10));
}
