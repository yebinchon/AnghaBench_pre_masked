
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int state; } ;
struct i40e_ring {int flags; scalar_t__ count; int arm_wb; } ;


 scalar_t__ FUNC_0 (struct i40e_ring*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct i40e_ring*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct i40e_ring *VAR_3,
          struct i40e_vsi *VAR_4,
          int VAR_5)
{
 if (VAR_3->flags & VAR_0) {





  unsigned int VAR_6 = FUNC_1(VAR_3, 0);

  if (VAR_5 &&
      ((VAR_6 / VAR_1) == 0) && VAR_6 > 0 &&
      !FUNC_2(VAR_2, VAR_4->state) &&
      (FUNC_0(VAR_3) != VAR_3->count))
   VAR_3->arm_wb = 1;
 }
}
