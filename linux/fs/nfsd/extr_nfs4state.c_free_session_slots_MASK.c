
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxreqs; } ;
struct nfsd4_session {TYPE_2__** se_slots; TYPE_1__ se_fchannel; } ;
struct TYPE_4__ {int sl_cred; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(struct nfsd4_session *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->se_fchannel.maxreqs; VAR_1++) {
  FUNC_0(&VAR_0->se_slots[VAR_1]->sl_cred);
  FUNC_1(VAR_0->se_slots[VAR_1]);
 }
}
