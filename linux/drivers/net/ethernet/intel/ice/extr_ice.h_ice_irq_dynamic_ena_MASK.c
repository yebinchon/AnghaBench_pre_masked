
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ice_vsi {int state; } ;
struct ice_q_vector {int reg_idx; } ;
struct ice_pf {int oicr_idx; } ;
struct ice_hw {scalar_t__ back; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ice_hw*,int ,int) ;

__attribute__((used)) static inline void
FUNC_3(struct ice_hw *VAR_5, struct ice_vsi *VAR_6,
      struct ice_q_vector *VAR_7)
{
 u32 VAR_8 = (VAR_6 && VAR_7) ? VAR_7->reg_idx :
    ((struct ice_pf *)VAR_5->back)->oicr_idx;
 int VAR_9 = VAR_3;
 u32 VAR_10;




 VAR_10 = VAR_1 | VAR_0 |
       (VAR_9 << VAR_2);
 if (VAR_6)
  if (FUNC_1(VAR_4, VAR_6->state))
   return;
 FUNC_2(VAR_5, FUNC_0(VAR_8), VAR_10);
}
