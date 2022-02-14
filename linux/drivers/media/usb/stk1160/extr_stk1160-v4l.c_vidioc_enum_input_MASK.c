
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {scalar_t__ index; int std; int type; int name; } ;
struct TYPE_2__ {int tvnorms; } ;
struct stk1160 {TYPE_1__ vdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 struct stk1160* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
    struct v4l2_input *VAR_6)
{
 struct stk1160 *VAR_7 = FUNC_1(VAR_4);

 if (VAR_6->index > VAR_1)
  return -VAR_0;


 if (VAR_6->index == VAR_2)
  FUNC_0(VAR_6->name, "S-Video");
 else
  FUNC_0(VAR_6->name, "Composite%d", VAR_6->index);

 VAR_6->type = VAR_3;
 VAR_6->std = VAR_7->vdev.tvnorms;
 return 0;
}
