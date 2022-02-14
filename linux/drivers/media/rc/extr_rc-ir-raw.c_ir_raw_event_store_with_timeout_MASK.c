
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct ir_raw_event {int dummy; } ;
typedef int ktime_t ;
struct TYPE_5__ {int expires; } ;
struct TYPE_4__ {int edge_spinlock; TYPE_2__ edge_handle; int last_event; } ;


 int VAR_0 ;
 int FUNC_0 (struct rc_dev*,struct ir_raw_event*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(struct rc_dev *VAR_2, struct ir_raw_event *VAR_3)
{
 ktime_t VAR_4;
 int VAR_5 = 0;

 if (!VAR_2->raw)
  return -VAR_0;

 VAR_4 = FUNC_1();

 FUNC_4(&VAR_2->raw->edge_spinlock);
 VAR_5 = FUNC_0(VAR_2, VAR_3);

 VAR_2->raw->last_event = VAR_4;


 if (!FUNC_7(&VAR_2->raw->edge_handle) ||
     FUNC_6(VAR_2->raw->edge_handle.expires,
         VAR_1 + FUNC_3(15))) {
  FUNC_2(&VAR_2->raw->edge_handle,
     VAR_1 + FUNC_3(15));
 }
 FUNC_5(&VAR_2->raw->edge_spinlock);

 return VAR_5;
}
