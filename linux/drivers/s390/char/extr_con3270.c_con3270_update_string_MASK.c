
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string {int len; scalar_t__* string; } ;
struct TYPE_2__ {int cols; int dev; } ;
struct con3270 {TYPE_1__ view; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_1(struct con3270 *VAR_1, struct string *VAR_2, int VAR_3)
{
 if (VAR_2->len < 4) {


  return;
 }
 if (VAR_2->string[VAR_2->len - 4] != VAR_0)
  return;
 FUNC_0(VAR_1->view.dev, VAR_2->string + VAR_2->len - 3,
          VAR_1->view.cols * (VAR_3 + 1));
}
