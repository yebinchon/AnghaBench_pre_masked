
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct z8530_channel {int lock; int * regs; scalar_t__ sync; scalar_t__ max; int * irqs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct z8530_channel*,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct z8530_channel*,size_t,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct z8530_channel*,int ) ;

int FUNC_5(struct net_device *VAR_3, struct z8530_channel *VAR_4)
{
 u8 VAR_5;
 unsigned long VAR_6;

 FUNC_1(VAR_4->lock, VAR_6);
 VAR_4->irqs = &VAR_2;
 VAR_4->max = 0;
 VAR_4->sync = 0;

 VAR_5=FUNC_0(VAR_4,VAR_0);
 FUNC_3(VAR_4, VAR_1, VAR_4->regs[VAR_1]);
 FUNC_4(VAR_4,0);

 FUNC_2(VAR_4->lock, VAR_6);
 return 0;
}
