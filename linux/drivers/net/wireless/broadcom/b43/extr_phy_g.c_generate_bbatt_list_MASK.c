
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;
struct b43_bbatt_list {int max_val; scalar_t__ min_val; int len; struct b43_bbatt const* list; } ;
struct b43_bbatt {int att; } ;


 int FUNC_0 (struct b43_bbatt const*) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0,
    struct b43_bbatt_list *VAR_1)
{
 static const struct b43_bbatt VAR_2[] = {
  {.att = 0,},
  {.att = 1,},
  {.att = 2,},
  {.att = 3,},
  {.att = 4,},
  {.att = 5,},
  {.att = 6,},
  {.att = 7,},
  {.att = 8,},
 };

 VAR_1->list = VAR_2;
 VAR_1->len = FUNC_0(VAR_2);
 VAR_1->min_val = 0;
 VAR_1->max_val = 8;
}
