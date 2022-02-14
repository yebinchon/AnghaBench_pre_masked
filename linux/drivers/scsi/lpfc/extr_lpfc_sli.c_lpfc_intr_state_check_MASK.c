
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sli_intr; } ;
struct TYPE_4__ {TYPE_1__ slistat; } ;
struct lpfc_hba {scalar_t__ link_state; TYPE_2__ sli; int pcidev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(struct lpfc_hba *VAR_2)
{

 if (FUNC_1(FUNC_0(VAR_2->pcidev)))
  return -VAR_0;


 VAR_2->sli.slistat.sli_intr++;


 if (FUNC_1(VAR_2->link_state < VAR_1))
  return -VAR_0;

 return 0;
}
