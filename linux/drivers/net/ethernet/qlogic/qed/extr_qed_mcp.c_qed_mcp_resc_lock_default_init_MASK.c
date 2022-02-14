
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_resc_unlock_params {int sleep_b4_retry; int resource; int retry_interval; int retry_num; int timeout; } ;
struct qed_resc_lock_params {int sleep_b4_retry; int resource; int retry_interval; int retry_num; int timeout; } ;
typedef enum qed_resc_lock { ____Placeholder_qed_resc_lock } qed_resc_lock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_resc_unlock_params*,int ,int) ;

void FUNC_1(struct qed_resc_lock_params *VAR_3,
        struct qed_resc_unlock_params *VAR_4,
        enum qed_resc_lock
        VAR_5, bool VAR_6)
{
 if (VAR_3) {
  FUNC_0(VAR_3, 0, sizeof(*VAR_3));





  if (VAR_6) {
   VAR_3->timeout = VAR_2;
  } else {
   VAR_3->retry_num = VAR_0;
   VAR_3->retry_interval =
       VAR_1;
   VAR_3->sleep_b4_retry = 1;
  }

  VAR_3->resource = VAR_5;
 }

 if (VAR_4) {
  FUNC_0(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->resource = VAR_5;
 }
}
