
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ab8500_fg {TYPE_1__* fg_psy; int parent; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ab8500_fg *VAR_1)
{
 unsigned int VAR_2;

 if (FUNC_2(VAR_1->parent)) {
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
   (void)FUNC_1(&VAR_1->fg_psy->dev,
       &VAR_0[VAR_2]);
 }
}
