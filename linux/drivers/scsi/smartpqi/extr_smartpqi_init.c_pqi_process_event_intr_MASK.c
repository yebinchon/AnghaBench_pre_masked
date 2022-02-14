
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_event_response {int additional_event_id; int event_id; int event_type; scalar_t__ request_acknowlege; } ;
struct pqi_event_queue {int oq_ci_copy; int oq_ci; struct pqi_event_response* oq_element_array; int oq_pi; } ;
struct pqi_event {int pending; int additional_event_id; int event_id; int event_type; } ;
struct pqi_ctrl_info {int event_work; struct pqi_event* events; struct pqi_event_queue event_queue; } ;
typedef int pqi_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pqi_event*,struct pqi_event_response*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static unsigned int FUNC_5(struct pqi_ctrl_info *VAR_2)
{
 unsigned int VAR_3;
 pqi_index_t VAR_4;
 pqi_index_t VAR_5;
 struct pqi_event_queue *VAR_6;
 struct pqi_event_response *VAR_7;
 struct pqi_event *VAR_8;
 int VAR_9;

 VAR_6 = &VAR_2->event_queue;
 VAR_3 = 0;
 VAR_5 = VAR_6->oq_ci_copy;

 while (1) {
  VAR_4 = FUNC_2(VAR_6->oq_pi);
  if (VAR_4 == VAR_5)
   break;

  VAR_3++;
  VAR_7 = VAR_6->oq_element_array +
   (VAR_5 * VAR_0);

  VAR_9 =
   FUNC_0(VAR_7->event_type);

  if (VAR_9 >= 0) {
   if (VAR_7->request_acknowlege) {
    VAR_8 = &VAR_2->events[VAR_9];
    VAR_8->pending = 1;
    VAR_8->event_type = VAR_7->event_type;
    VAR_8->event_id = VAR_7->event_id;
    VAR_8->additional_event_id =
     VAR_7->additional_event_id;
    FUNC_1(VAR_8, VAR_7);
   }
  }

  VAR_5 = (VAR_5 + 1) % VAR_1;
 }

 if (VAR_3) {
  VAR_6->oq_ci_copy = VAR_5;
  FUNC_4(VAR_5, VAR_6->oq_ci);
  FUNC_3(&VAR_2->event_work);
 }

 return VAR_3;
}
