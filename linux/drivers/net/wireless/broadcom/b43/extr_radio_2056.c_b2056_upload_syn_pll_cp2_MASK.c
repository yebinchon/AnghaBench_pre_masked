
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;
struct b2056_inittabs_pts {struct b2056_inittab_entry* syn; } ;
struct b2056_inittab_entry {int ghz2; int ghz5; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 struct b2056_inittabs_pts* FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,size_t,int ) ;

void FUNC_3(struct b43_wldev *VAR_1, bool VAR_2)
{
 const struct b2056_inittabs_pts *VAR_3;
 const struct b2056_inittab_entry *VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3) {
  FUNC_0(1);
  return;
 }

 VAR_4 = &VAR_3->syn[VAR_0];

 FUNC_2(VAR_1, VAR_0, VAR_2 ? VAR_4->ghz5 : VAR_4->ghz2);
}
