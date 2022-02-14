
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int first_minor; int tape_dnr; int ref_count; scalar_t__* modeset_byte; int medium_state; int tape_state; int wait_queue; int state_change_wq; int node; int req_queue; int mutex; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct tape_device* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tape_device*) ;
 scalar_t__* FUNC_7 (int,int) ;
 struct tape_device* FUNC_8 (int,int) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;

__attribute__((used)) static struct tape_device *
FUNC_10(void)
{
 struct tape_device *VAR_6;

 VAR_6 = FUNC_8(sizeof(struct tape_device), VAR_2);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(2, "ti:no mem\n");
  return FUNC_1(-VAR_0);
 }
 VAR_6->modeset_byte = FUNC_7(1, VAR_2 | VAR_1);
 if (VAR_6->modeset_byte == ((void*)0)) {
  FUNC_0(2, "ti:no mem\n");
  FUNC_6(VAR_6);
  return FUNC_1(-VAR_0);
 }
 FUNC_9(&VAR_6->mutex);
 FUNC_3(&VAR_6->req_queue);
 FUNC_3(&VAR_6->node);
 FUNC_5(&VAR_6->state_change_wq);
 FUNC_5(&VAR_6->wait_queue);
 VAR_6->tape_state = VAR_4;
 VAR_6->medium_state = VAR_3;
 *VAR_6->modeset_byte = 0;
 VAR_6->first_minor = -1;
 FUNC_4(&VAR_6->ref_count, 1);
 FUNC_2(&VAR_6->tape_dnr, VAR_5);

 return VAR_6;
}
