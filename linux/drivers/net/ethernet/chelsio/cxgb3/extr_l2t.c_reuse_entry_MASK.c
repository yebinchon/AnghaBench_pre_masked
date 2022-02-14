
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {unsigned int nud_state; int ha; } ;
struct l2t_entry {int lock; int state; int dmac; struct neighbour* neigh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct l2t_entry*,struct neighbour*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct l2t_entry *VAR_5, struct neighbour *VAR_6)
{
 unsigned int VAR_7;

 FUNC_2(&VAR_5->lock);

 if (VAR_6 != VAR_5->neigh)
  FUNC_1(VAR_5, VAR_6);
 VAR_7 = VAR_6->nud_state;
 if (FUNC_0(VAR_5->dmac, VAR_6->ha, sizeof(VAR_5->dmac)) ||
     !(VAR_7 & VAR_4))
  VAR_5->state = VAR_0;
 else if (VAR_7 & VAR_3)
  VAR_5->state = VAR_2;
 else
  VAR_5->state = VAR_1;
 FUNC_3(&VAR_5->lock);
}
