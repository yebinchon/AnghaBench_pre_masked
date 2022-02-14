
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int op; int list; int status; int device; } ;
struct tape_device {int req_queue; int tape_state; } ;


 int FUNC_0 (int,char*,struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tape_device*,struct tape_request*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct tape_device*) ;

__attribute__((used)) static int
FUNC_6(struct tape_device *VAR_6, struct tape_request *VAR_7)
{
 int VAR_8;

 switch (VAR_7->op) {
  case 131:
  case 132:
  case 128:
  case 129:
  case 130:
   if (VAR_6->tape_state == VAR_3)
    break;
   if (VAR_6->tape_state == VAR_5)
    break;

  default:
   if (VAR_6->tape_state == VAR_2)
    break;
   if (VAR_6->tape_state != VAR_4)
    return -VAR_0;
 }


 VAR_7->device = FUNC_5(VAR_6);

 if (FUNC_4(&VAR_6->req_queue)) {

  VAR_8 = FUNC_1(VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;

  FUNC_0(5, "Request %p added for execution.\n", VAR_7);
  FUNC_2(&VAR_7->list, &VAR_6->req_queue);
 } else {
  FUNC_0(5, "Request %p add to queue.\n", VAR_7);
  VAR_7->status = VAR_1;
  FUNC_3(&VAR_7->list, &VAR_6->req_queue);
 }
 return 0;
}
