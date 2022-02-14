
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_endpoint {int refcount; int * ops; void* priv; int cb; struct rpmsg_device* rpdev; } ;
struct rpmsg_device {int dev; } ;
struct rpmsg_channel_info {char* name; } ;
struct qcom_smd_endpoint {struct qcom_smd_channel* qsch; struct rpmsg_endpoint ept; } ;
struct qcom_smd_edge {int new_channel_event; } ;
struct qcom_smd_device {struct qcom_smd_edge* edge; } ;
struct qcom_smd_channel {scalar_t__ state; struct qcom_smd_endpoint* qsept; int name; } ;
typedef int rpmsg_rx_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct qcom_smd_endpoint* FUNC_3 (int,int ) ;
 int FUNC_4 (struct qcom_smd_channel*,int ) ;
 int VAR_4 ;
 struct qcom_smd_channel* FUNC_5 (struct qcom_smd_edge*,char const*) ;
 struct qcom_smd_device* FUNC_6 (struct rpmsg_device*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static struct rpmsg_endpoint *FUNC_8(struct rpmsg_device *VAR_5,
        rpmsg_rx_cb_t VAR_6, void *VAR_7,
        struct rpmsg_channel_info VAR_8)
{
 struct qcom_smd_endpoint *VAR_9;
 struct qcom_smd_channel *VAR_10;
 struct qcom_smd_device *VAR_11 = FUNC_6(VAR_5);
 struct qcom_smd_edge *VAR_12 = VAR_11->edge;
 struct rpmsg_endpoint *VAR_13;
 const char *VAR_14 = VAR_8.name;
 int VAR_15;


 VAR_15 = FUNC_7(VAR_12->new_channel_event,
   (VAR_10 = FUNC_5(VAR_12, VAR_14)) != ((void*)0),
   VAR_1);
 if (!VAR_15)
  return ((void*)0);

 if (VAR_10->state != VAR_2) {
  FUNC_0(&VAR_5->dev, "channel %s is busy\n", VAR_10->name);
  return ((void*)0);
 }

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_13 = &VAR_9->ept;

 FUNC_1(&VAR_13->refcount);

 VAR_13->rpdev = VAR_5;
 VAR_13->cb = VAR_6;
 VAR_13->priv = VAR_7;
 VAR_13->ops = &VAR_4;

 VAR_10->qsept = VAR_9;
 VAR_9->qsch = VAR_10;

 VAR_15 = FUNC_4(VAR_10, VAR_6);
 if (VAR_15)
  goto free_ept;

 return VAR_13;

free_ept:
 VAR_10->qsept = ((void*)0);
 FUNC_2(&VAR_13->refcount, VAR_3);
 return ((void*)0);
}
