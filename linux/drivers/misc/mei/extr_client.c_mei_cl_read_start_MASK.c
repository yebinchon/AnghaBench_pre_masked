
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dev; } ;
struct mei_cl_cb {int list; } ;
struct mei_cl {scalar_t__ rx_flow_ctrl_creds; int rd_pending; int me_cl; struct mei_device* dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_2 (struct mei_device*,struct mei_cl*,char*,...) ;
 int FUNC_3 (int *,int *) ;
 struct mei_cl_cb* FUNC_4 (struct mei_cl*,size_t,int ,struct file const*) ;
 int FUNC_5 (struct mei_cl*) ;
 scalar_t__ FUNC_6 (struct mei_cl*) ;
 int FUNC_7 (struct mei_device*,struct mei_cl*) ;
 scalar_t__ FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_cl_cb*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

int FUNC_15(struct mei_cl *VAR_6, size_t VAR_7, const struct file *VAR_8)
{
 struct mei_device *VAR_9;
 struct mei_cl_cb *VAR_10;
 int VAR_11;

 if (FUNC_0(!VAR_6 || !VAR_6->dev))
  return -VAR_2;

 VAR_9 = VAR_6->dev;

 if (!FUNC_5(VAR_6))
  return -VAR_2;

 if (!FUNC_10(VAR_6->me_cl)) {
  FUNC_2(VAR_9, VAR_6, "no such me client\n");
  return -VAR_4;
 }

 if (FUNC_6(VAR_6))
  return 0;


 if (VAR_6->rx_flow_ctrl_creds)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_5, VAR_8);
 if (!VAR_10)
  return -VAR_3;

 VAR_11 = FUNC_11(VAR_9->dev);
 if (VAR_11 < 0 && VAR_11 != -VAR_1) {
  FUNC_14(VAR_9->dev);
  FUNC_2(VAR_9, VAR_6, "rpm: get failed %d\n", VAR_11);
  goto nortpm;
 }

 VAR_11 = 0;
 if (FUNC_8(VAR_9)) {
  VAR_11 = FUNC_7(VAR_9, VAR_6);
  if (VAR_11 < 0)
   goto out;

  FUNC_3(&VAR_10->list, &VAR_6->rd_pending);
 }
 VAR_6->rx_flow_ctrl_creds++;

out:
 FUNC_1(VAR_9, VAR_6, "rpm: autosuspend\n");
 FUNC_12(VAR_9->dev);
 FUNC_13(VAR_9->dev);
nortpm:
 if (VAR_11)
  FUNC_9(VAR_10);

 return VAR_11;
}
