
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_rpi; } ;
struct TYPE_2__ {int ndlp_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_vport *VAR_3, struct lpfc_nodelist *VAR_4)
{
 unsigned long VAR_5;

 if (VAR_4->nlp_flag & VAR_1) {
  FUNC_0(VAR_3->phba, VAR_4->nlp_rpi);
  FUNC_1(&VAR_3->phba->ndlp_lock, VAR_5);
  VAR_4->nlp_flag &= ~VAR_1;
  VAR_4->nlp_rpi = VAR_0;
  FUNC_2(&VAR_3->phba->ndlp_lock, VAR_5);
 }
 VAR_4->nlp_flag &= ~VAR_2;
}
