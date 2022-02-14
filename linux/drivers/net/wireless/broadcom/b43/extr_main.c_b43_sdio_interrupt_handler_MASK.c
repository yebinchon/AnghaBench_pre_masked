
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {struct b43_wl* wl; } ;
struct b43_wl {int mutex; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_1)
{
 struct b43_wl *VAR_2 = VAR_1->wl;
 irqreturn_t VAR_3;

 FUNC_2(&VAR_2->mutex);

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == VAR_0)
  FUNC_1(VAR_1);

 FUNC_3(&VAR_2->mutex);
}
