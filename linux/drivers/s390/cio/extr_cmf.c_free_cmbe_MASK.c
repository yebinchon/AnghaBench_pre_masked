
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmb_data {int hw_block; struct cmb_data* last_block; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_4__ {int lock; int list; } ;
struct TYPE_3__ {int cmb_list; struct cmb_data* cmb; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cmb_data*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ccw_device *VAR_3)
{
 struct cmb_data *VAR_4;

 FUNC_5(&VAR_1.lock);
 FUNC_6(VAR_3->ccwlock);
 VAR_4 = VAR_3->private->cmb;
 VAR_3->private->cmb = ((void*)0);
 if (VAR_4) {
  FUNC_1(VAR_4->last_block);
  FUNC_2(VAR_2, VAR_4->hw_block);
 }
 FUNC_1(VAR_4);


 FUNC_3(&VAR_3->private->cmb_list);
 if (FUNC_4(&VAR_1.list))
  FUNC_0(((void*)0), VAR_0);
 FUNC_8(VAR_3->ccwlock);
 FUNC_7(&VAR_1.lock);
}
