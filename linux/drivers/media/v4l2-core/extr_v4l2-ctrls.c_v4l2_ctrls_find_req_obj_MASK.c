
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_request_object {int dummy; } ;
struct v4l2_ctrl_handler {int nr_of_buckets; struct media_request_object req_obj; } ;
struct media_request {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct media_request_object* FUNC_0 (struct media_request*) ;
 struct media_request_object* FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct media_request*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*) ;
 struct v4l2_ctrl_handler* FUNC_5 (int,int ) ;
 struct media_request_object* FUNC_6 (struct media_request*,int *,struct v4l2_ctrl_handler*) ;
 int FUNC_7 (struct media_request_object*) ;
 int VAR_5 ;
 int FUNC_8 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_9 (struct media_request*,struct v4l2_ctrl_handler*,struct v4l2_ctrl_handler*) ;

__attribute__((used)) static struct media_request_object *
FUNC_10(struct v4l2_ctrl_handler *VAR_6,
   struct media_request *VAR_7, bool VAR_8)
{
 struct media_request_object *VAR_9;
 struct v4l2_ctrl_handler *VAR_10;
 int VAR_11;

 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);

 if (VAR_8 && FUNC_3(VAR_7->state != VAR_4))
  return FUNC_1(-VAR_0);

 VAR_9 = FUNC_6(VAR_7, &VAR_5, VAR_6);
 if (VAR_9)
  return VAR_9;
 if (!VAR_8)
  return FUNC_1(-VAR_1);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return FUNC_1(-VAR_2);

 VAR_9 = &VAR_10->req_obj;
 VAR_11 = FUNC_8(VAR_10, (VAR_6->nr_of_buckets - 1) * 8);
 if (!VAR_11)
  VAR_11 = FUNC_9(VAR_7, VAR_10, VAR_6);
 if (VAR_11) {
  FUNC_4(VAR_10);

  return FUNC_1(VAR_11);
 }

 FUNC_7(VAR_9);
 return VAR_9;
}
