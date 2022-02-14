
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {int dummy; } ;
struct qman_fq {int dummy; } ;
struct qm_dqrr_entry {int fd; } ;
struct hp_handler {int tx; } ;
typedef enum qman_cb_dqrr_result { ____Placeholder_qman_cb_dqrr_result } qman_cb_dqrr_result ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct hp_handler*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static enum qman_cb_dqrr_result FUNC_6(struct qman_portal *VAR_4,
          struct qman_fq *VAR_5,
          const struct qm_dqrr_entry *VAR_6)
{
 struct hp_handler *VAR_7 = (struct hp_handler *)VAR_5;

 FUNC_3(VAR_7, &VAR_6->fd);
 if (++VAR_1 < VAR_0) {
  if (FUNC_4(&VAR_7->tx, &VAR_6->fd)) {
   FUNC_1("qman_enqueue() failed");
   FUNC_0(1);
   goto skip;
  }
 } else {
  FUNC_2("Received final (%dth) frame\n", VAR_1);
  FUNC_5(&VAR_3);
 }
skip:
 return VAR_2;
}
