
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {scalar_t__ expires; } ;
struct sbni_in_stats {int dummy; } ;
struct net_local {int lock; struct net_device* watchdog_dev; int in_stats; int state; struct net_device* second; struct timer_list watchdog; } ;
struct net_device_stats {int dummy; } ;
struct net_device {int base_addr; scalar_t__ irq; int flags; int stats; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct timer_list*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct net_device*,char*,scalar_t__) ;
 int FUNC_4 (struct net_device*,char*,int ) ;
 struct net_local* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ,int ,struct net_device*) ;
 struct net_device** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct timer_list*,int ,int ) ;

__attribute__((used)) static int
FUNC_11( struct net_device *VAR_10 )
{
 struct net_local *VAR_11 = FUNC_5(VAR_10);
 struct timer_list *VAR_12 = &VAR_11->watchdog;






 if( VAR_10->base_addr < 0x400 ) {
  struct net_device **VAR_13 = VAR_7;
  for( ; *VAR_13 && VAR_13 < VAR_7 + VAR_4; ++VAR_13 )
   if( (*VAR_13)->irq == VAR_10->irq &&
       ((*VAR_13)->base_addr == VAR_10->base_addr + 4 ||
        (*VAR_13)->base_addr == VAR_10->base_addr - 4) &&
       (*VAR_13)->flags & VAR_2 ) {

    ((struct net_local *) (FUNC_5(*VAR_13)))
     ->second = VAR_10;
    FUNC_4(VAR_10, "using shared irq with %s\n",
           (*VAR_13)->name);
    VAR_11->state |= VAR_1;
    goto handler_attached;
   }
 }

 if( FUNC_7(VAR_10->irq, VAR_8, VAR_3, VAR_10->name, VAR_10) ) {
  FUNC_3(VAR_10, "unable to get IRQ %d\n", VAR_10->irq);
  return -VAR_0;
 }

handler_attached:

 FUNC_8( &VAR_11->lock );
 FUNC_2( &VAR_10->stats, 0, sizeof(struct net_device_stats) );
 FUNC_2( &VAR_11->in_stats, 0, sizeof(struct sbni_in_stats) );

 FUNC_1( VAR_10 );

 FUNC_6( VAR_10 );


 VAR_11->watchdog_dev = VAR_10;
 FUNC_10(VAR_12, VAR_9, 0);
 VAR_12->expires = VAR_6 + VAR_5;
 FUNC_0( VAR_12 );

 FUNC_9( &VAR_11->lock );
 return 0;
}
