
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_q_entry {int mid_flags; int qhead; } ;


 int FUNC_0 (struct mid_q_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct mid_q_entry *VAR_2)
{
 FUNC_2(&VAR_0);
 if (!(VAR_2->mid_flags & VAR_1)) {
  FUNC_1(&VAR_2->qhead);
  VAR_2->mid_flags |= VAR_1;
 }
 FUNC_3(&VAR_0);

 FUNC_0(VAR_2);
}
