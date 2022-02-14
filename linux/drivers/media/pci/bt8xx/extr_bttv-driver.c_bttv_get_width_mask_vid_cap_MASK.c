
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv_format {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct bttv_format *VAR_1,
     unsigned int *VAR_2,
     unsigned int *VAR_3)
{
 if (VAR_1->flags & VAR_0) {
  *VAR_2 = ~15;
  *VAR_3 = 8;
 } else {
  *VAR_2 = ~3;
  *VAR_3 = 2;
 }
}
