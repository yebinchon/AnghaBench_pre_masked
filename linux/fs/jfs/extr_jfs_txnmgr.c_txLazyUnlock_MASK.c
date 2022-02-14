
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tblock {int sb; int cqueue; } ;
struct TYPE_4__ {int commit_state; } ;
struct TYPE_3__ {int unlock_queue; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct tblock * VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(VAR_5);

 FUNC_3(&VAR_4->cqueue, &VAR_1.unlock_queue);




 if (!(FUNC_0(VAR_4->sb)->commit_state & VAR_0) &&
     !VAR_3) {
  VAR_3 = 1;
  FUNC_4(&VAR_2);
 }
 FUNC_2(VAR_5);
}
