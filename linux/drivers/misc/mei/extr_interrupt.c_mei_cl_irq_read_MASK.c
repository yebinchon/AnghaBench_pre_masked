
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mei_device {int dummy; } ;
struct mei_cl_cb {int list; scalar_t__ buf_idx; } ;
struct list_head {int dummy; } ;
struct mei_cl {int status; struct list_head rd_pending; struct mei_device* dev; } ;
struct hbm_flow_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int *,struct list_head*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mei_device*,struct mei_cl*) ;
 int FUNC_4 (struct mei_device*) ;

__attribute__((used)) static int FUNC_5(struct mei_cl *VAR_2, struct mei_cl_cb *VAR_3,
      struct list_head *VAR_4)
{
 struct mei_device *VAR_5 = VAR_2->dev;
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 if (!FUNC_0(&VAR_2->rd_pending))
  return 0;

 VAR_6 = FUNC_2(sizeof(struct hbm_flow_control));
 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0)
  return -VAR_1;

 if ((u32)VAR_7 < VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5, VAR_2);
 if (VAR_8) {
  VAR_2->status = VAR_8;
  VAR_3->buf_idx = 0;
  FUNC_1(&VAR_3->list, VAR_4);
  return VAR_8;
 }

 FUNC_1(&VAR_3->list, &VAR_2->rd_pending);

 return 0;
}
