
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pv_major; scalar_t__ pv_minor; } ;
struct ocfs2_control_private {scalar_t__ op_state; scalar_t__ op_this_node; TYPE_1__ op_proto; } ;
struct file {struct ocfs2_control_private* private_data; } ;
struct TYPE_4__ {scalar_t__ pv_major; scalar_t__ pv_minor; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct file*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static int FUNC_6(struct file *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 1;
 struct ocfs2_control_private *VAR_11 = VAR_8->private_data;

 FUNC_0(VAR_11->op_state != VAR_1);

 FUNC_3(&VAR_3);

 if (VAR_11->op_this_node < 0) {
  VAR_10 = 0;
 } else if ((VAR_5 >= 0) &&
     (VAR_5 != VAR_11->op_this_node)) {
  VAR_9 = -VAR_0;
  goto out_unlock;
 }

 if (!VAR_11->op_proto.pv_major) {
  VAR_10 = 0;
 } else if (!FUNC_2(&VAR_6) &&
     ((VAR_7.pv_major != VAR_11->op_proto.pv_major) ||
      (VAR_7.pv_minor != VAR_11->op_proto.pv_minor))) {
  VAR_9 = -VAR_0;
  goto out_unlock;
 }

 if (VAR_10) {
  VAR_5 = VAR_11->op_this_node;
  VAR_7.pv_major = VAR_11->op_proto.pv_major;
  VAR_7.pv_minor = VAR_11->op_proto.pv_minor;
 }

out_unlock:
 FUNC_4(&VAR_3);

 if (!VAR_9 && VAR_10) {

  FUNC_1(&VAR_4);
  FUNC_5(VAR_8,
     VAR_2);
 }

 return VAR_9;
}
