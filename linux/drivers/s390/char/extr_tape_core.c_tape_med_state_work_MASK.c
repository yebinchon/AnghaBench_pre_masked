
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_med_state_work_data {int state; int work; int device; } ;
struct tape_device {int dummy; } ;
typedef enum tape_medium_state { ____Placeholder_tape_medium_state } tape_medium_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct tape_med_state_work_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tape_device*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct tape_device *VAR_2, enum tape_medium_state VAR_3)
{
 struct tape_med_state_work_data *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (VAR_4) {
  FUNC_0(&VAR_4->work, VAR_1);
  VAR_4->device = FUNC_3(VAR_2);
  VAR_4->state = VAR_3;
  FUNC_2(&VAR_4->work);
 }
}
