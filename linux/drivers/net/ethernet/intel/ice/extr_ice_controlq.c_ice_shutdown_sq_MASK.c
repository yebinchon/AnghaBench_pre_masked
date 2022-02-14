
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ count; int bah; int bal; int len; int tail; int head; } ;
struct ice_ctl_q_info {int sq_lock; TYPE_1__ sq; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,struct ice_ctl_q_info*,int ) ;
 int FUNC_1 (struct ice_hw*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct ice_hw*,int ,int ) ;

__attribute__((used)) static enum ice_status
FUNC_5(struct ice_hw *VAR_2, struct ice_ctl_q_info *VAR_3)
{
 enum ice_status VAR_4 = 0;

 FUNC_2(&VAR_3->sq_lock);

 if (!VAR_3->sq.count) {
  VAR_4 = VAR_0;
  goto shutdown_sq_out;
 }


 FUNC_4(VAR_2, VAR_3->sq.head, 0);
 FUNC_4(VAR_2, VAR_3->sq.tail, 0);
 FUNC_4(VAR_2, VAR_3->sq.len, 0);
 FUNC_4(VAR_2, VAR_3->sq.bal, 0);
 FUNC_4(VAR_2, VAR_3->sq.bah, 0);

 VAR_3->sq.count = 0;


 FUNC_0(VAR_2, VAR_3, VAR_1);
 FUNC_1(VAR_2, &VAR_3->sq);

shutdown_sq_out:
 FUNC_3(&VAR_3->sq_lock);
 return VAR_4;
}
