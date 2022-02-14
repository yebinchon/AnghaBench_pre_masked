
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {int dummy; } ;
struct qman_fq {int dummy; } ;
struct qm_dqrr_entry {int fd; } ;
struct hp_handler {int tx; } ;
typedef enum qman_cb_dqrr_result { ____Placeholder_qman_cb_dqrr_result } qman_cb_dqrr_result ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct hp_handler*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static enum qman_cb_dqrr_result FUNC_4(struct qman_portal *VAR_1,
         struct qman_fq *VAR_2,
         const struct qm_dqrr_entry *VAR_3)
{
 struct hp_handler *VAR_4 = (struct hp_handler *)VAR_2;

 if (FUNC_2(VAR_4, &VAR_3->fd)) {
  FUNC_0(1);
  goto skip;
 }
 if (FUNC_3(&VAR_4->tx, &VAR_3->fd)) {
  FUNC_1("qman_enqueue() failed");
  FUNC_0(1);
 }
skip:
 return VAR_0;
}
