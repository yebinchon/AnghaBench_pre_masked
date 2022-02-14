
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int currindex; int lowindex; int highindex; } ;
struct TYPE_5__ {int (* get_index ) (TYPE_2__*) ;TYPE_1__ indexing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_2 ;

void FUNC_1(int *VAR_3, int *VAR_4)
{
 int VAR_5 = VAR_2->get_index(VAR_2);

 if (VAR_5) {
  VAR_1 = VAR_5 % 10;

  if ((VAR_5 / 10) <= VAR_2->indexing.currindex)
   VAR_0 = VAR_2->indexing.currindex - (VAR_5 / 10);
  else
   VAR_0 = VAR_2->indexing.currindex
    - VAR_2->indexing.lowindex
    + VAR_2->indexing.highindex - (VAR_5 / 10) + 1;
 }
 *VAR_4 = VAR_1;
 *VAR_3 = VAR_0;
}
