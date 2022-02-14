
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {int dummy; } ;
struct raw3270_request {int rc; int list; int ccw; struct raw3270_view* view; } ;
struct raw3270 {int req_queue; int cdev; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,unsigned long,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct raw3270_view*) ;
 int FUNC_4 (struct raw3270_view*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct raw3270 *VAR_1, struct raw3270_view *VAR_2,
  struct raw3270_request *VAR_3)
{
 VAR_3->view = VAR_2;
 FUNC_3(VAR_2);
 if (FUNC_2(&VAR_1->req_queue) &&
     !FUNC_5(VAR_0, &VAR_1->flags)) {

  VAR_3->rc = FUNC_0(VAR_1->cdev, &VAR_3->ccw,
            (unsigned long) VAR_3, 0, 0);
  if (VAR_3->rc) {
   FUNC_4(VAR_2);
   return VAR_3->rc;
  }
 }
 FUNC_1(&VAR_3->list, &VAR_1->req_queue);
 return 0;
}
