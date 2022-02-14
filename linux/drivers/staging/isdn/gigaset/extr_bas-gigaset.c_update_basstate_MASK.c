
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bas_cardstate {int basstate; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct bas_cardstate *VAR_0,
      int VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_0->lock, VAR_3);
 VAR_4 = VAR_0->basstate;
 VAR_0->basstate = (VAR_4 & ~VAR_2) | VAR_1;
 FUNC_1(&VAR_0->lock, VAR_3);
 return VAR_4;
}
