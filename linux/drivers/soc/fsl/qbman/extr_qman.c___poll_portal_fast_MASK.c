
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qman_portal {int p; struct qman_fq* vdqcr_owned; } ;
struct TYPE_2__ {int (* dqrr ) (struct qman_portal*,struct qman_fq*,struct qm_dqrr_entry const*) ;} ;
struct qman_fq {TYPE_1__ cb; } ;
struct qm_dqrr_entry {int stat; int context_b; } ;
typedef enum qman_cb_dqrr_result { ____Placeholder_qman_cb_dqrr_result } qman_cb_dqrr_result ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qman_portal*,struct qman_fq*) ;
 int FUNC_3 (struct qman_fq*,int ) ;
 int FUNC_4 (int *,struct qm_dqrr_entry const*,int) ;
 struct qm_dqrr_entry* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct qman_portal*,struct qman_fq*,struct qm_dqrr_entry const*) ;
 int FUNC_9 (struct qman_portal*,struct qman_fq*,struct qm_dqrr_entry const*) ;
 struct qman_fq* FUNC_10 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_11(struct qman_portal *VAR_9,
     unsigned int VAR_10)
{
 const struct qm_dqrr_entry *VAR_11;
 struct qman_fq *VAR_12;
 enum qman_cb_dqrr_result VAR_13;
 unsigned int VAR_14 = 0;

 do {
  FUNC_7(&VAR_9->p);
  VAR_11 = FUNC_5(&VAR_9->p);
  if (!VAR_11)
   break;

  if (VAR_11->stat & VAR_4) {





   VAR_12 = VAR_9->vdqcr_owned;






   if (VAR_11->stat & VAR_2)
    FUNC_3(VAR_12, VAR_0);






   VAR_13 = VAR_12->cb.dqrr(VAR_9, VAR_12, VAR_11);
   if (VAR_13 == VAR_8)
    break;

   if (VAR_11->stat & VAR_1)
    FUNC_2(VAR_9, VAR_12);
  } else {

   VAR_12 = FUNC_10(FUNC_1(VAR_11->context_b));

   VAR_13 = VAR_12->cb.dqrr(VAR_9, VAR_12, VAR_11);




   if (VAR_13 == VAR_8)
    break;
  }






  FUNC_0((VAR_11->stat & VAR_3) ||
       (VAR_13 != VAR_7));

  if (VAR_13 != VAR_6)
   FUNC_4(&VAR_9->p, VAR_11,
       VAR_13 == VAR_7);

  FUNC_6(&VAR_9->p);






 } while (++VAR_14 < VAR_10 && VAR_13 != VAR_5);

 return VAR_14;
}
