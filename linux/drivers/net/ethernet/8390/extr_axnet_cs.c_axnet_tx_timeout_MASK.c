
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_packets; int tx_errors; } ;
struct net_device {long base_addr; TYPE_1__ stats; } ;
struct ei_device {int interface_num; int page_lock; } ;


 int FUNC_0 (struct net_device*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (struct net_device*,char*,char*,int,int,int) ;
 struct ei_device* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_4)
{
 long VAR_5 = VAR_4->base_addr;
 struct ei_device *VAR_6 = FUNC_5(VAR_4);
 int VAR_7, VAR_8, VAR_9 = VAR_3 - FUNC_1(VAR_4);
 unsigned long VAR_10;

 VAR_4->stats.tx_errors++;

 FUNC_7(&VAR_6->page_lock, VAR_10);
 VAR_7 = FUNC_3(VAR_5+VAR_1);
 VAR_8 = FUNC_3(VAR_5+VAR_0);
 FUNC_8(&VAR_6->page_lock, VAR_10);

 FUNC_4(VAR_4, "Tx timed out, %s TSR=%#2x, ISR=%#2x, t=%d.\n",
     (VAR_7 & VAR_2) ? "excess collisions." :
     (VAR_8) ? "lost interrupt?" : "cable problem?",
     VAR_7, VAR_8, VAR_9);

 if (!VAR_8 && !VAR_4->stats.tx_packets)
 {

  VAR_6->interface_num ^= 1;
 }



 FUNC_7(&VAR_6->page_lock, VAR_10);


 FUNC_2(VAR_4);
 FUNC_0(VAR_4, 1);

 FUNC_8(&VAR_6->page_lock, VAR_10);
 FUNC_6(VAR_4);
}
