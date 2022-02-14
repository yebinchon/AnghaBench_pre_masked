
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {scalar_t__ cfg_topology; int link_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct lpfc_hba *VAR_2)
{
 if (VAR_2->cfg_topology == VAR_0)
  VAR_2->link_flag |= VAR_1;
 else
  VAR_2->link_flag &= ~VAR_1;
}
