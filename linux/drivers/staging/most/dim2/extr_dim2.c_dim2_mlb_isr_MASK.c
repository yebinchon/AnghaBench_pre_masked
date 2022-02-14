
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dim2_hdm {size_t atx_idx; TYPE_1__* hch; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ is_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct dim2_hdm *VAR_4 = VAR_3;
 unsigned long VAR_5;

 FUNC_1(&VAR_1, VAR_5);
 FUNC_0();
 FUNC_2(&VAR_1, VAR_5);

 if (VAR_4->atx_idx >= 0 && VAR_4->hch[VAR_4->atx_idx].is_initialized)
  while (!FUNC_3(VAR_4->hch + VAR_4->atx_idx))
   continue;

 return VAR_0;
}
