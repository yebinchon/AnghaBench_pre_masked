
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int dummy; } ;
struct glink_channel {int refcount; int riids; int liids; int intent_work; int done_intents; int intent_req_comp; int open_ack; int open_req; int name; struct qcom_glink* glink; int intent_req_lock; int intent_lock; int recv_lock; } ;


 int VAR_0 ;
 struct glink_channel* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int ) ;
 struct glink_channel* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct glink_channel *FUNC_10(struct qcom_glink *VAR_3,
            const char *VAR_4)
{
 struct glink_channel *VAR_5;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);


 FUNC_9(&VAR_5->recv_lock);
 FUNC_9(&VAR_5->intent_lock);
 FUNC_8(&VAR_5->intent_req_lock);

 VAR_5->glink = VAR_3;
 VAR_5->name = FUNC_6(VAR_4, VAR_1);

 FUNC_4(&VAR_5->open_req);
 FUNC_4(&VAR_5->open_ack);
 FUNC_4(&VAR_5->intent_req_comp);

 FUNC_1(&VAR_5->done_intents);
 FUNC_2(&VAR_5->intent_work, VAR_2);

 FUNC_3(&VAR_5->liids);
 FUNC_3(&VAR_5->riids);
 FUNC_5(&VAR_5->refcount);

 return VAR_5;
}
