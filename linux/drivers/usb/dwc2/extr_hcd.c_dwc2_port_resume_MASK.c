
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int power_down; } ;
struct dwc2_hsotg {int bus_suspended; int lock; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dwc2_hsotg*) ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_4(&VAR_6->lock, VAR_7);





 if (!VAR_6->params.power_down) {
  VAR_9 = FUNC_1(VAR_6, VAR_3);
  VAR_9 &= ~VAR_4;
  FUNC_2(VAR_6, VAR_9, VAR_3);
  FUNC_5(&VAR_6->lock, VAR_7);
  FUNC_3(20);
  FUNC_4(&VAR_6->lock, VAR_7);
 }

 VAR_8 = FUNC_0(VAR_6);
 VAR_8 |= VAR_1;
 VAR_8 &= ~VAR_2;
 FUNC_2(VAR_6, VAR_8, VAR_0);
 FUNC_5(&VAR_6->lock, VAR_7);

 FUNC_3(VAR_5);

 FUNC_4(&VAR_6->lock, VAR_7);
 VAR_8 = FUNC_0(VAR_6);
 VAR_8 &= ~(VAR_1 | VAR_2);
 FUNC_2(VAR_6, VAR_8, VAR_0);
 VAR_6->bus_suspended = 0;
 FUNC_5(&VAR_6->lock, VAR_7);
}
