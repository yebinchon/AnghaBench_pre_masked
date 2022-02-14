
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dim2_hdm {TYPE_1__* hch; } ;
struct TYPE_2__ {int ch; int is_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dim2_hdm*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct dim2_hdm *VAR_3 = (struct dim2_hdm *)VAR_2;
 unsigned long VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_3->hch[VAR_5].is_initialized)
   continue;

  FUNC_2(&VAR_1, VAR_4);
  FUNC_0(&VAR_3->hch[VAR_5].ch);
  FUNC_3(&VAR_1, VAR_4);

  FUNC_1(VAR_3, VAR_5);
  while (!FUNC_4(VAR_3->hch + VAR_5))
   continue;
 }
}
