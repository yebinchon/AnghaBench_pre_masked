
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int currindex; int highindex; int lowindex; int command; } ;
struct TYPE_4__ {TYPE_1__ indexing; scalar_t__ alive; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,int,int) ;

void FUNC_1(int VAR_2)
{
 int VAR_3;

 if (VAR_1->alive) {
  if (VAR_2 == 0) {
   VAR_1->indexing.currindex++;
   VAR_0++;
   if (VAR_1->indexing.currindex >
     VAR_1->indexing.highindex)
    VAR_1->indexing.currindex =
     VAR_1->indexing.lowindex;
  }

  VAR_3 = VAR_1->indexing.currindex * 10 + VAR_2;
  FUNC_0(VAR_1->indexing.command, VAR_3, VAR_3);
 }
}
