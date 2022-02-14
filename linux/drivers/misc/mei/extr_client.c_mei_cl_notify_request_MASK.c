
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_device {int dev; int device_lock; int ctrl_rd_list; int hbm_f_ev_supported; } ;
struct mei_cl_cb {int list; } ;
struct mei_cl {int status; int notify_en; int wait; struct mei_device* dev; } ;
struct file {int dummy; } ;
typedef enum mei_cb_file_ops { ____Placeholder_mei_cb_file_ops } mei_cb_file_ops ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_2 (struct mei_device*,struct mei_cl*,char*,int) ;
 int FUNC_3 (int *,int *) ;
 struct mei_cl_cb* FUNC_4 (struct mei_cl*,int ,int,struct file const*) ;
 int FUNC_5 (struct mei_cl*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct mei_device*,struct mei_cl*,int ) ;
 scalar_t__ FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_cl_cb*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int,int ) ;

int FUNC_18(struct mei_cl *VAR_6,
     const struct file *VAR_7, u8 VAR_8)
{
 struct mei_device *VAR_9;
 struct mei_cl_cb *VAR_10;
 enum mei_cb_file_ops VAR_11;
 int VAR_12;

 if (FUNC_0(!VAR_6 || !VAR_6->dev))
  return -VAR_2;

 VAR_9 = VAR_6->dev;

 if (!VAR_9->hbm_f_ev_supported) {
  FUNC_1(VAR_9, VAR_6, "notifications not supported\n");
  return -VAR_4;
 }

 if (!FUNC_5(VAR_6))
  return -VAR_2;

 VAR_12 = FUNC_13(VAR_9->dev);
 if (VAR_12 < 0 && VAR_12 != -VAR_1) {
  FUNC_16(VAR_9->dev);
  FUNC_2(VAR_9, VAR_6, "rpm: get failed %d\n", VAR_12);
  return VAR_12;
 }

 VAR_11 = FUNC_6(VAR_8);
 VAR_10 = FUNC_4(VAR_6, 0, VAR_11, VAR_7);
 if (!VAR_10) {
  VAR_12 = -VAR_3;
  goto out;
 }

 if (FUNC_8(VAR_9)) {
  if (FUNC_7(VAR_9, VAR_6, VAR_8)) {
   VAR_12 = -VAR_2;
   goto out;
  }
  FUNC_3(&VAR_10->list, &VAR_9->ctrl_rd_list);
 }

 FUNC_12(&VAR_9->device_lock);
 FUNC_17(VAR_6->wait,
      VAR_6->notify_en == VAR_8 ||
      VAR_6->status ||
      !FUNC_5(VAR_6),
      FUNC_10(VAR_5));
 FUNC_11(&VAR_9->device_lock);

 if (VAR_6->notify_en != VAR_8 && !VAR_6->status)
  VAR_6->status = -VAR_0;

 VAR_12 = VAR_6->status;

out:
 FUNC_1(VAR_9, VAR_6, "rpm: autosuspend\n");
 FUNC_14(VAR_9->dev);
 FUNC_15(VAR_9->dev);

 FUNC_9(VAR_10);
 return VAR_12;
}
