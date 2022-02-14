
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int idr_lock; int lcids; } ;
struct glink_channel {int refcount; int lcid; int open_req; int open_ack; } ;


 struct glink_channel* FUNC_0 (struct glink_channel*) ;
 struct glink_channel* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct glink_channel*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 struct glink_channel* FUNC_5 (struct qcom_glink*,char const*) ;
 int VAR_2 ;
 int FUNC_6 (struct qcom_glink*,struct glink_channel*) ;
 int FUNC_7 (struct qcom_glink*,struct glink_channel*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static struct glink_channel *FUNC_11(struct qcom_glink *VAR_3,
           const char *VAR_4)
{
 struct glink_channel *VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 VAR_6 = FUNC_7(VAR_3, VAR_5);
 if (VAR_6)
  goto release_channel;

 VAR_6 = FUNC_10(&VAR_5->open_ack, 5 * VAR_1);
 if (!VAR_6)
  goto err_timeout;

 VAR_6 = FUNC_10(&VAR_5->open_req, 5 * VAR_1);
 if (!VAR_6)
  goto err_timeout;

 FUNC_6(VAR_3, VAR_5);

 return VAR_5;

err_timeout:

 FUNC_8(&VAR_3->idr_lock, VAR_7);
 FUNC_3(&VAR_3->lcids, VAR_5->lcid);
 FUNC_9(&VAR_3->idr_lock, VAR_7);

release_channel:

 FUNC_4(&VAR_5->refcount, VAR_2);

 FUNC_4(&VAR_5->refcount, VAR_2);

 return FUNC_1(-VAR_0);
}
