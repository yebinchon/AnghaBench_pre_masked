
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ezusb_priv {int udev; } ;


 int FUNC_0 (struct timer_list*,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct ezusb_priv *VAR_0,
       struct timer_list *VAR_1,
       unsigned long VAR_2)
{
 if (!VAR_0->udev)
  return;
 FUNC_0(VAR_1, VAR_2);
}
