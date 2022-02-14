
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wait; } ;
struct switchtec_user {scalar_t__ event_cnt; TYPE_1__ comp; struct switchtec_dev* stdev; } ;
struct switchtec_dev {int event_cnt; int mrpc_mutex; int event_wq; } ;
struct file {struct switchtec_user* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct switchtec_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int *,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_8, poll_table *VAR_9)
{
 struct switchtec_user *VAR_10 = VAR_8->private_data;
 struct switchtec_dev *VAR_11 = VAR_10->stdev;
 __poll_t VAR_12 = 0;

 FUNC_3(VAR_8, &VAR_10->comp.wait, VAR_9);
 FUNC_3(VAR_8, &VAR_11->event_wq, VAR_9);

 if (FUNC_1(VAR_11))
  return VAR_2 | VAR_6 | VAR_3 | VAR_0 | VAR_1;

 FUNC_2(&VAR_11->mrpc_mutex);

 if (FUNC_4(&VAR_10->comp))
  VAR_12 |= VAR_2 | VAR_7;

 if (VAR_10->event_cnt != FUNC_0(&VAR_11->event_cnt))
  VAR_12 |= VAR_4 | VAR_5;

 return VAR_12;
}
