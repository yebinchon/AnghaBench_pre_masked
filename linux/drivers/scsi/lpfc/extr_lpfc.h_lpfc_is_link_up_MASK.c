
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {scalar_t__ link_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int
FUNC_0(struct lpfc_hba *VAR_3)
{
 return VAR_3->link_state == VAR_2 ||
  VAR_3->link_state == VAR_0 ||
  VAR_3->link_state == VAR_1;
}
