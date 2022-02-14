
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int wl; } ;
struct b206x_init_tab_entry {int flags; int value_a; int offset; int value_g; } ;


 unsigned int FUNC_0 (struct b206x_init_tab_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct b206x_init_tab_entry* VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ) ;

void FUNC_3(struct b43_wldev *VAR_4)
{
 const struct b206x_init_tab_entry *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  VAR_5 = &VAR_3[VAR_6];
  if (FUNC_1(VAR_4->wl) == VAR_2) {
   if (!(VAR_5->flags & VAR_1))
    continue;
   FUNC_2(VAR_4, VAR_5->offset, VAR_5->value_g);
  } else {
   if (!(VAR_5->flags & VAR_0))
    continue;
   FUNC_2(VAR_4, VAR_5->offset, VAR_5->value_a);
  }
 }
}
