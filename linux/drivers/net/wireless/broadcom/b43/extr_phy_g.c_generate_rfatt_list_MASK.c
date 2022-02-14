
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int radio_ver; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_rfatt_list {int max_val; scalar_t__ min_val; void* len; struct b43_rfatt const* list; } ;
struct b43_rfatt {int att; int with_padmix; } ;


 void* FUNC_0 (struct b43_rfatt const*) ;
 int FUNC_1 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0,
    struct b43_rfatt_list *VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_0->phy;


 static const struct b43_rfatt VAR_3[] = {
  {.att = 3,.with_padmix = 0,},
  {.att = 1,.with_padmix = 0,},
  {.att = 5,.with_padmix = 0,},
  {.att = 7,.with_padmix = 0,},
  {.att = 9,.with_padmix = 0,},
  {.att = 2,.with_padmix = 0,},
  {.att = 0,.with_padmix = 0,},
  {.att = 4,.with_padmix = 0,},
  {.att = 6,.with_padmix = 0,},
  {.att = 8,.with_padmix = 0,},
  {.att = 1,.with_padmix = 1,},
  {.att = 2,.with_padmix = 1,},
  {.att = 3,.with_padmix = 1,},
  {.att = 4,.with_padmix = 1,},
 };

 static const struct b43_rfatt VAR_4[] = {
  {.att = 2,.with_padmix = 1,},
  {.att = 4,.with_padmix = 1,},
  {.att = 6,.with_padmix = 1,},
  {.att = 8,.with_padmix = 1,},
  {.att = 10,.with_padmix = 1,},
  {.att = 12,.with_padmix = 1,},
  {.att = 14,.with_padmix = 1,},
 };

 static const struct b43_rfatt VAR_5[] = {
  {.att = 0,.with_padmix = 1,},
  {.att = 2,.with_padmix = 1,},
  {.att = 4,.with_padmix = 1,},
  {.att = 6,.with_padmix = 1,},
  {.att = 8,.with_padmix = 1,},
  {.att = 9,.with_padmix = 1,},
  {.att = 9,.with_padmix = 1,},
 };

 if (!FUNC_1(VAR_0)) {

  VAR_1->list = VAR_3;
  VAR_1->len = FUNC_0(VAR_3);
  VAR_1->min_val = 0;
  VAR_1->max_val = 9;
  return;
 }
 if (VAR_2->radio_ver == 0x2050 && VAR_2->radio_rev == 8) {

  VAR_1->list = VAR_4;
  VAR_1->len = FUNC_0(VAR_4);
  VAR_1->min_val = 0;
  VAR_1->max_val = 14;
  return;
 }

 VAR_1->list = VAR_5;
 VAR_1->len = FUNC_0(VAR_5);
 VAR_1->min_val = 0;
 VAR_1->max_val = 9;
}
