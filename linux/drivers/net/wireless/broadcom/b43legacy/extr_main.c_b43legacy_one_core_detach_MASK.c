
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {int dummy; } ;
struct b43legacy_wldev {int list; struct b43legacy_wl* wl; } ;
struct b43legacy_wl {int nr_devs; } ;


 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (int *) ;
 struct b43legacy_wldev* FUNC_4 (struct ssb_device*) ;
 int FUNC_5 (struct ssb_device*,int *) ;

__attribute__((used)) static void FUNC_6(struct ssb_device *VAR_0)
{
 struct b43legacy_wldev *VAR_1;
 struct b43legacy_wl *VAR_2;




 VAR_1 = FUNC_4(VAR_0);
 VAR_2 = VAR_1->wl;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->list);
 VAR_2->nr_devs--;
 FUNC_5(VAR_0, ((void*)0));
 FUNC_2(VAR_1);
}
