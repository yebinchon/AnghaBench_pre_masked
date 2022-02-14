
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct prog_id {int dist; scalar_t__ num; int ver; int rev; int lev; } ;
struct lpfc_hba {int mbox_mem_pool; int OptionROMVersion; } ;
struct TYPE_7__ {scalar_t__* varWords; } ;
struct TYPE_8__ {scalar_t__ mbxStatus; TYPE_1__ un; } ;
struct TYPE_9__ {TYPE_2__ mb; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ,int,char*,int,int,int,...) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_1, LPFC_MBOXQ_t *VAR_2)
{
 struct prog_id *VAR_3;
 uint32_t VAR_4;
 char VAR_5 = ' ';

 char VAR_6[] = "nabx";

 if (VAR_2->u.mb.mbxStatus != VAR_0) {
  FUNC_0(VAR_2, VAR_1->mbox_mem_pool);
  return;
 }

 VAR_3 = (struct prog_id *) &VAR_4;


 VAR_4 = VAR_2->u.mb.un.varWords[7];


 if (VAR_3->dist < 4)
  VAR_5 = VAR_6[VAR_3->dist];

 if ((VAR_3->dist == 3) && (VAR_3->num == 0))
  FUNC_1(VAR_1->OptionROMVersion, 32, "%d.%d%d",
   VAR_3->ver, VAR_3->rev, VAR_3->lev);
 else
  FUNC_1(VAR_1->OptionROMVersion, 32, "%d.%d%d%c%d",
   VAR_3->ver, VAR_3->rev, VAR_3->lev,
   VAR_5, VAR_3->num);
 FUNC_0(VAR_2, VAR_1->mbox_mem_pool);
 return;
}
