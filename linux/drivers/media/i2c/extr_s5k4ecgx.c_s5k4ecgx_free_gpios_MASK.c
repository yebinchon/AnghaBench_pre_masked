
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5k4ecgx {TYPE_1__* gpio; } ;
struct TYPE_2__ {int gpio; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct s5k4ecgx *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->gpio); VAR_2++) {
  if (!FUNC_2(VAR_1->gpio[VAR_2].gpio))
   continue;
  FUNC_1(VAR_1->gpio[VAR_2].gpio);
  VAR_1->gpio[VAR_2].gpio = -VAR_0;
 }
}
