
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ngene {TYPE_1__* channel; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct ngene *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->channel[VAR_2].number = VAR_2;
  if (FUNC_0(&VAR_1->channel[VAR_2]) < 0) {
   for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
    FUNC_1(&VAR_1->channel[VAR_3]);
   return -1;
  }
 }
 return 0;
}
