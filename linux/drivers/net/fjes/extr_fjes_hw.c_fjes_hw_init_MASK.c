
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trace_size; int trace; int lock; } ;
struct fjes_hw {scalar_t__ max_epid; scalar_t__ my_epid; TYPE_1__ hw_info; int rx_status_lock; int epstop_task; int update_zone_task; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct fjes_hw*) ;
 scalar_t__ FUNC_2 (struct fjes_hw*) ;
 int FUNC_3 (struct fjes_hw*) ;
 int FUNC_4 (struct fjes_hw*) ;
 int FUNC_5 (struct fjes_hw*,int ,int) ;
 int FUNC_6 (struct fjes_hw*) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct fjes_hw *VAR_6)
{
 int VAR_7;

 VAR_6->base = FUNC_3(VAR_6);
 if (!VAR_6->base)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_6, VAR_3, 1);

 FUNC_0(&VAR_6->update_zone_task, VAR_5);
 FUNC_0(&VAR_6->epstop_task, VAR_4);

 FUNC_7(&VAR_6->hw_info.lock);
 FUNC_8(&VAR_6->rx_status_lock);

 VAR_6->max_epid = FUNC_1(VAR_6);
 VAR_6->my_epid = FUNC_2(VAR_6);

 if ((VAR_6->max_epid == 0) || (VAR_6->my_epid >= VAR_6->max_epid))
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_6);

 VAR_6->hw_info.trace = FUNC_9(VAR_2);
 VAR_6->hw_info.trace_size = VAR_2;

 return VAR_7;
}
