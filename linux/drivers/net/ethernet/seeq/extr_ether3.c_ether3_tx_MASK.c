
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int collisions; int tx_fifo_errors; int tx_errors; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {unsigned int tx_tail; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,unsigned int) ;
 int FUNC_2 (struct net_device*) ;
 TYPE_2__* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5)
{
 unsigned int VAR_6 = FUNC_3(VAR_5)->tx_tail;
 int VAR_7 = 14;

 do {
      unsigned long VAR_8;




      FUNC_1(VAR_5, VAR_4, VAR_6 * 0x600);
      VAR_8 = FUNC_0(VAR_5);




  if ((VAR_8 & (VAR_3 | VAR_0)) !=
      (VAR_3 | VAR_0))
   break;




  if (!(VAR_8 & (VAR_2 | VAR_1)))
   VAR_5->stats.tx_packets++;
  else {
   VAR_5->stats.tx_errors++;
   if (VAR_8 & VAR_1)
    VAR_5->stats.collisions += 16;
   if (VAR_8 & VAR_2)
    VAR_5->stats.tx_fifo_errors++;
  }

  VAR_6 = (VAR_6 + 1) & 15;
 } while (--VAR_7);

 if (FUNC_3(VAR_5)->tx_tail != VAR_6) {
  FUNC_3(VAR_5)->tx_tail = VAR_6;
  FUNC_2(VAR_5);
 }
}
