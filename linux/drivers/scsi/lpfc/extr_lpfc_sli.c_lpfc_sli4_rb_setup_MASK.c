
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_hba {int hbq_in_use; int hbq_count; TYPE_1__* hbqs; } ;
struct TYPE_4__ {int entry_count; } ;
struct TYPE_3__ {int entry_count; } ;


 size_t VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_2)
{
 VAR_2->hbq_in_use = 1;
 VAR_2->hbqs[VAR_0].entry_count =
  VAR_1[VAR_0]->entry_count;
 VAR_2->hbq_count = 1;
 FUNC_0(VAR_2, VAR_0);

 return 0;
}
