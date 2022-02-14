
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {int dummy; } ;
struct qman_fq {int dummy; } ;
struct qm_dqrr_entry {int stat; int fd; } ;
typedef enum qman_cb_dqrr_result { ____Placeholder_qman_cb_dqrr_result } qman_cb_dqrr_result ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static enum qman_cb_dqrr_result FUNC_5(struct qman_portal *VAR_6,
     struct qman_fq *VAR_7,
     const struct qm_dqrr_entry *VAR_8)
{
 if (FUNC_0(FUNC_2(&VAR_2, &VAR_8->fd))) {
  FUNC_3("BADNESS: dequeued frame doesn't match;\n");
  return VAR_3;
 }
 FUNC_1(&VAR_2);
 if (!(VAR_8->stat & VAR_0) && !FUNC_2(&VAR_2, &VAR_1)) {
  VAR_4 = 1;
  FUNC_4(&VAR_5);
 }
 return VAR_3;
}
