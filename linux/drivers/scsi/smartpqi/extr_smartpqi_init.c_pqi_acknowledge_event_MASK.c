
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iu_length; int iu_type; } ;
struct pqi_event_acknowledge_request {int additional_event_id; int event_id; int event_type; TYPE_1__ header; } ;
struct pqi_event {int additional_event_id; int event_id; int event_type; } ;
struct pqi_ctrl_info {int dummy; } ;
typedef int request ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pqi_event_acknowledge_request*,int ,int) ;
 int FUNC_1 (struct pqi_ctrl_info*,struct pqi_event_acknowledge_request*,int) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(struct pqi_ctrl_info *VAR_2,
 struct pqi_event *VAR_3)
{
 struct pqi_event_acknowledge_request VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.header.iu_type = VAR_1;
 FUNC_2(sizeof(VAR_4) - VAR_0,
  &VAR_4.header.iu_length);
 VAR_4.event_type = VAR_3->event_type;
 VAR_4.event_id = VAR_3->event_id;
 VAR_4.additional_event_id = VAR_3->additional_event_id;

 FUNC_1(VAR_2, &VAR_4, sizeof(VAR_4));
}
