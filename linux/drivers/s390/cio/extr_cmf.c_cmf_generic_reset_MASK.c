
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmb_data {scalar_t__ last_update; int size; int hw_block; int last_block; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_2__ {int cmb_start_time; struct cmb_data* cmb; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ccw_device *VAR_0)
{
 struct cmb_data *VAR_1;

 FUNC_2(VAR_0->ccwlock);
 VAR_1 = VAR_0->private->cmb;
 if (VAR_1) {
  FUNC_1(VAR_1->last_block, 0, VAR_1->size);




  FUNC_1(VAR_1->hw_block, 0, VAR_1->size);
  VAR_1->last_update = 0;
 }
 VAR_0->private->cmb_start_time = FUNC_0();
 FUNC_3(VAR_0->ccwlock);
}
