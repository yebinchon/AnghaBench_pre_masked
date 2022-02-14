
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_channel {int state; int lock; } ;
typedef enum rio_cm_state { ____Placeholder_rio_cm_state } rio_cm_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct rio_channel *VAR_0,
      enum rio_cm_state VAR_1, enum rio_cm_state VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->lock);
 VAR_3 = (VAR_0->state == VAR_1);
 if (VAR_3)
  VAR_0->state = VAR_2;
 FUNC_1(&VAR_0->lock);
 return VAR_3;
}
