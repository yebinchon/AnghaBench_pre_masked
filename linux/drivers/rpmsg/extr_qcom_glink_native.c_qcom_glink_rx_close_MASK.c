
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_channel_info {void* dst; void* src; int name; } ;
struct qcom_glink {int idr_lock; int rcids; int dev; } ;
struct glink_channel {int refcount; scalar_t__ rcid; int name; scalar_t__ rpdev; int intent_work; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 struct glink_channel* FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct qcom_glink*,scalar_t__) ;
 int FUNC_6 (int ,struct rpmsg_channel_info*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static void FUNC_10(struct qcom_glink *VAR_2, unsigned int VAR_3)
{
 struct rpmsg_channel_info VAR_4;
 struct glink_channel *VAR_5;
 unsigned long VAR_6;

 FUNC_7(&VAR_2->idr_lock, VAR_6);
 VAR_5 = FUNC_2(&VAR_2->rcids, VAR_3);
 FUNC_8(&VAR_2->idr_lock, VAR_6);
 if (FUNC_0(!VAR_5, "close request on unknown channel\n"))
  return;


 FUNC_1(&VAR_5->intent_work);

 if (VAR_5->rpdev) {
  FUNC_9(VAR_4.name, VAR_5->name, sizeof(VAR_4.name));
  VAR_4.src = VAR_0;
  VAR_4.dst = VAR_0;

  FUNC_6(VAR_2->dev, &VAR_4);
 }

 FUNC_5(VAR_2, VAR_5->rcid);

 FUNC_7(&VAR_2->idr_lock, VAR_6);
 FUNC_3(&VAR_2->rcids, VAR_5->rcid);
 VAR_5->rcid = 0;
 FUNC_8(&VAR_2->idr_lock, VAR_6);

 FUNC_4(&VAR_5->refcount, VAR_1);
}
