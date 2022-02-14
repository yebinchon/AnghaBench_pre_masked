
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct isp1760_udc {int lock; int vbus_timer; TYPE_1__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct isp1760_udc* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct isp1760_udc*) ;
 int FUNC_2 (struct isp1760_udc*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct isp1760_udc* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_7)
{
 struct isp1760_udc *VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_6);
 unsigned long VAR_9;

 FUNC_4(&VAR_8->lock, VAR_9);

 if (!(FUNC_2(VAR_8, VAR_0) & VAR_1))
  FUNC_1(VAR_8);
 else if (VAR_8->gadget.state >= VAR_3)
  FUNC_3(&VAR_8->vbus_timer,
     VAR_4 + VAR_2);

 FUNC_5(&VAR_8->lock, VAR_9);
}
