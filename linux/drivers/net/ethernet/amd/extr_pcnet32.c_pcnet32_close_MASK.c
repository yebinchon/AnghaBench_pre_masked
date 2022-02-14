
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcnet32_private {int lock; TYPE_2__* a; int napi; int watchdog_timer; } ;
struct TYPE_3__ {int rx_missed_errors; } ;
struct net_device {unsigned long base_addr; int irq; TYPE_1__ stats; } ;
struct TYPE_4__ {int (* write_bcr ) (unsigned long,int,int) ;int (* write_csr ) (unsigned long,int,int ) ;int (* read_csr ) (unsigned long,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 struct pcnet32_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcnet32_private*,int ,int ,struct net_device*,char*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (unsigned long,int) ;
 int FUNC_11 (unsigned long,int) ;
 int FUNC_12 (unsigned long,int,int ) ;
 int FUNC_13 (unsigned long,int,int) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_4)
{
 unsigned long VAR_5 = VAR_4->base_addr;
 struct pcnet32_private *VAR_6 = FUNC_3(VAR_4);
 unsigned long VAR_7;

 FUNC_0(&VAR_6->watchdog_timer);

 FUNC_5(VAR_4);
 FUNC_2(&VAR_6->napi);

 FUNC_8(&VAR_6->lock, VAR_7);

 VAR_4->stats.rx_missed_errors = VAR_6->a->read_csr(VAR_5, 112);

 FUNC_4(VAR_6, VAR_3, VAR_2, VAR_4,
       "Shutting down ethercard, status was %2.2x\n",
       VAR_6->a->read_csr(VAR_5, VAR_0));


 VAR_6->a->write_csr(VAR_5, VAR_0, VAR_1);





 VAR_6->a->write_bcr(VAR_5, 20, 4);

 FUNC_9(&VAR_6->lock, VAR_7);

 FUNC_1(VAR_4->irq, VAR_4);

 FUNC_8(&VAR_6->lock, VAR_7);

 FUNC_6(VAR_4);
 FUNC_7(VAR_4);

 FUNC_9(&VAR_6->lock, VAR_7);

 return 0;
}
