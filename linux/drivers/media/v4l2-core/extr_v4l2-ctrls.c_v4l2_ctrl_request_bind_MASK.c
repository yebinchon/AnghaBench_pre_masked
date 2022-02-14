
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_handler {int requests; int req_obj; } ;
struct media_request {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct media_request*,int *,struct v4l2_ctrl_handler*,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_handler*) ;

__attribute__((used)) static int FUNC_3(struct media_request *VAR_1,
      struct v4l2_ctrl_handler *VAR_2,
      struct v4l2_ctrl_handler *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);

 if (!VAR_4) {
  VAR_4 = FUNC_1(VAR_1, &VAR_0,
      VAR_3, 0, &VAR_2->req_obj);
  if (!VAR_4)
   FUNC_0(&VAR_2->requests, &VAR_3->requests);
 }
 return VAR_4;
}
