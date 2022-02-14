
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {struct b43_wl* wl; } ;
struct b43_wl {int beacon0_uploaded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_2)
{
 struct b43_wl *VAR_3 = VAR_2->wl;

 if (VAR_3->beacon0_uploaded)
  return;
 FUNC_0(VAR_2, VAR_1, VAR_0);
 VAR_3->beacon0_uploaded = 1;
}
