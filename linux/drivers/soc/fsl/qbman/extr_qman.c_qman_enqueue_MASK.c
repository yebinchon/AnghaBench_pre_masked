
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qman_portal {int p; scalar_t__ use_eqcr_ci_stashing; } ;
struct qman_fq {int fqid; } ;
struct qm_fd {int dummy; } ;
struct qm_eqcr_entry {struct qm_fd fd; int tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qman_fq*) ;
 struct qman_portal* FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct qm_eqcr_entry* FUNC_8 (int *) ;
 struct qm_eqcr_entry* FUNC_9 (int *) ;
 int FUNC_10 (struct qm_eqcr_entry*,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct qman_portal*,int) ;

int FUNC_13(struct qman_fq *VAR_1, const struct qm_fd *VAR_2)
{
 struct qman_portal *VAR_3;
 struct qm_eqcr_entry *VAR_4;
 unsigned long VAR_5;
 u8 VAR_6;

 VAR_3 = FUNC_2();
 FUNC_4(VAR_5);

 if (VAR_3->use_eqcr_ci_stashing) {




  VAR_4 = FUNC_9(&VAR_3->p);
 } else {




  VAR_6 = FUNC_6(&VAR_3->p);
  if (VAR_6 < 2)
   FUNC_12(VAR_3, VAR_6);
  VAR_4 = FUNC_8(&VAR_3->p);
 }

 if (FUNC_11(!VAR_4))
  goto out;

 FUNC_10(VAR_4, VAR_1->fqid);
 VAR_4->tag = FUNC_0(FUNC_1(VAR_1));
 VAR_4->fd = *VAR_2;

 FUNC_7(&VAR_3->p, VAR_0);
out:
 FUNC_3(VAR_5);
 FUNC_5();
 return 0;
}
