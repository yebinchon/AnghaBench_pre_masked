
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_local {int state; int lock; int watchdog; TYPE_1__* second; struct net_device* link; } ;
struct net_device {int irq; scalar_t__ base_addr; } ;
struct TYPE_2__ {int flags; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int ) ;
 struct net_local* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10( struct net_device *VAR_5 )
{
 struct net_local *VAR_6 = FUNC_5(VAR_5);

 if( VAR_6->second && VAR_6->second->flags & VAR_4 ) {
  FUNC_4(VAR_5, "Secondary channel (%s) is active!\n",
         VAR_6->second->name);
  return -VAR_1;
 }
 FUNC_8( &VAR_6->lock );

 VAR_6->second = ((void*)0);
 FUNC_1( VAR_5 );
 FUNC_6( VAR_5 );

 FUNC_0( &VAR_6->watchdog );

 FUNC_7( 0, VAR_5->base_addr + VAR_0 );

 if( !(VAR_6->state & VAR_2) )
  FUNC_3( VAR_5->irq, VAR_5 );
 VAR_6->state &= VAR_2;

 FUNC_9( &VAR_6->lock );
 return 0;
}
