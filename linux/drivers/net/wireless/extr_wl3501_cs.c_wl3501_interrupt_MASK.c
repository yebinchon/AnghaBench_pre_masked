
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl3501_card {int lock; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct wl3501_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wl3501_card*) ;
 int FUNC_4 (struct wl3501_card*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct wl3501_card*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 struct wl3501_card *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 FUNC_1(&VAR_4->lock);
 FUNC_3(VAR_4);
 FUNC_4(VAR_4);
 FUNC_5(VAR_3);
 FUNC_6(VAR_4);
 FUNC_2(&VAR_4->lock);

 return VAR_0;
}
