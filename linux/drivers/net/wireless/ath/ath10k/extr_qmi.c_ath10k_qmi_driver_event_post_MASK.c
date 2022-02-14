
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_qmi_driver_event {int type; int list; void* data; } ;
struct ath10k_qmi {int event_work; int event_wq; int event_lock; int event_list; } ;
typedef enum ath10k_qmi_driver_event_type { ____Placeholder_ath10k_qmi_driver_event_type } ath10k_qmi_driver_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath10k_qmi_driver_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct ath10k_qmi *VAR_2,
        enum ath10k_qmi_driver_event_type VAR_3,
        void *VAR_4)
{
 struct ath10k_qmi_driver_event *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->type = VAR_3;
 VAR_5->data = VAR_4;

 FUNC_3(&VAR_2->event_lock);
 FUNC_1(&VAR_5->list, &VAR_2->event_list);
 FUNC_4(&VAR_2->event_lock);

 FUNC_2(VAR_2->event_wq, &VAR_2->event_work);

 return 0;
}
