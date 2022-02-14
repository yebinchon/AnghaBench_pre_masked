
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iavf_vsi {TYPE_1__* back; } ;
struct iavf_q_vector {int reg_idx; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct iavf_vsi *VAR_4, struct iavf_q_vector *VAR_5)
{
 u32 VAR_6 = VAR_0 |
    VAR_1 |
    VAR_2 |
    VAR_3
                                             ;

 FUNC_1(&VAR_4->back->hw,
      FUNC_0(VAR_5->reg_idx),
      VAR_6);
}
