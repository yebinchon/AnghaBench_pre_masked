
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vivid_dev {long cec_xfer_time_jiffies; void* cec_xfer_start_jiffies; int cec_slock; int cec_work_list; } ;
struct cec_msg {int len; } ;
struct vivid_cec_work {int work; scalar_t__ usecs; int list; struct cec_msg msg; struct cec_adapter* adap; struct vivid_dev* dev; } ;
struct cec_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 struct vivid_dev* FUNC_2 (struct cec_adapter*) ;
 void* VAR_3 ;
 struct vivid_cec_work* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 long FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct cec_adapter *VAR_6, u8 VAR_7,
       u32 VAR_8, struct cec_msg *VAR_9)
{
 struct vivid_dev *VAR_10 = FUNC_2(VAR_6);
 struct vivid_cec_work *VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1);
 long VAR_12 = 0;

 if (VAR_11 == ((void*)0))
  return -VAR_0;
 VAR_11->dev = VAR_10;
 VAR_11->adap = VAR_6;
 VAR_11->usecs = FUNC_0(VAR_8) +
      VAR_9->len * VAR_2;
 VAR_11->msg = *VAR_9;

 FUNC_6(&VAR_10->cec_slock);
 FUNC_4(&VAR_11->list, &VAR_10->cec_work_list);
 if (VAR_10->cec_xfer_time_jiffies == 0) {
  FUNC_1(&VAR_11->work, VAR_4);
  VAR_10->cec_xfer_start_jiffies = VAR_3;
  VAR_10->cec_xfer_time_jiffies = FUNC_8(VAR_11->usecs);
  VAR_12 = VAR_10->cec_xfer_time_jiffies;
 } else {
  FUNC_1(&VAR_11->work, VAR_5);
  VAR_12 = VAR_10->cec_xfer_start_jiffies +
   VAR_10->cec_xfer_time_jiffies - VAR_3;
 }
 FUNC_7(&VAR_10->cec_slock);
 FUNC_5(&VAR_11->work, VAR_12 < 0 ? 0 : VAR_12);
 return 0;
}
