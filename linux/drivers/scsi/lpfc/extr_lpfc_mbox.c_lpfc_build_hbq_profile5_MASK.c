
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_hbq_init {int cmdmatch; int seqlenoff; int cmdcodeoff; int maxlen; int seqlenbcnt; } ;
struct TYPE_3__ {int cmdmatch; int seqlenoff; int cmdcodeoff; int maxlen; int seqlenbcnt; } ;
struct TYPE_4__ {TYPE_1__ profile5; } ;
struct config_hbq_var {TYPE_2__ profiles; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct config_hbq_var *VAR_0,
   struct lpfc_hbq_init *VAR_1)
{
 VAR_0->profiles.profile5.seqlenbcnt = VAR_1->seqlenbcnt;
 VAR_0->profiles.profile5.maxlen = VAR_1->maxlen;
 VAR_0->profiles.profile5.cmdcodeoff = VAR_1->cmdcodeoff;
 VAR_0->profiles.profile5.seqlenoff = VAR_1->seqlenoff;
 FUNC_0(&VAR_0->profiles.profile5.cmdmatch, VAR_1->cmdmatch,
        sizeof(VAR_0->profiles.profile5.cmdmatch));
}
