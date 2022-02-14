
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pan_offset; scalar_t__ pan_display; } ;
struct intelfb_info {TYPE_1__* pdev; int int_lock; TYPE_2__ vsync; int irq_flags; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct intelfb_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct intelfb_info *VAR_5)
{
 if (FUNC_6(0, &VAR_5->irq_flags)) {
  if (VAR_5->vsync.pan_display) {
   VAR_5->vsync.pan_display = 0;
   FUNC_1(VAR_0, VAR_5->vsync.pan_offset);
  }
  FUNC_4(&VAR_5->int_lock);
  FUNC_2(VAR_1, 0xffff);
  FUNC_2(VAR_4, 0xffff);
  FUNC_2(VAR_2, 0x0);

  FUNC_2(VAR_3, FUNC_0(VAR_3));
  FUNC_5(&VAR_5->int_lock);

  FUNC_3(VAR_5->pdev->irq, VAR_5);
 }
}
