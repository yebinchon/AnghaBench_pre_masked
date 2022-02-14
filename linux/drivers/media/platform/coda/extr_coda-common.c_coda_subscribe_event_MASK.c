
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int dummy; } ;
struct v4l2_event_subscription {int type; } ;
struct coda_ctx {int inst_type; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct coda_ctx* FUNC_0 (struct v4l2_fh*) ;
 int FUNC_1 (struct v4l2_fh*,struct v4l2_event_subscription const*) ;
 int FUNC_2 (struct v4l2_fh*,struct v4l2_event_subscription const*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct v4l2_fh *VAR_2,
    const struct v4l2_event_subscription *VAR_3)
{
 struct coda_ctx *VAR_4 = FUNC_0(VAR_2);

 switch (VAR_3->type) {
 case 129:
  return FUNC_2(VAR_2, VAR_3, 0, ((void*)0));
 case 128:
  if (VAR_4->inst_type == VAR_0)
   return FUNC_2(VAR_2, VAR_3, 0, ((void*)0));
  else
   return -VAR_1;
 default:
  return FUNC_1(VAR_2, VAR_3);
 }
}
