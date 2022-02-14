
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct intelfb_info {int int_lock; TYPE_3__* info; int irq_flags; TYPE_1__* pdev; } ;
struct TYPE_5__ {int vmode; } ;
struct TYPE_6__ {TYPE_2__ var; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ,int ,int ,char*,struct intelfb_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct intelfb_info *VAR_9)
{
 u16 VAR_10;
 if (!FUNC_7(0, &VAR_9->irq_flags)) {
  if (FUNC_4(VAR_9->pdev->irq, VAR_8, VAR_5,
    "intelfb", VAR_9)) {
   FUNC_3(0, &VAR_9->irq_flags);
   return -VAR_0;
  }

  FUNC_5(&VAR_9->int_lock);
  FUNC_2(VAR_2, 0xfffe);
  FUNC_2(VAR_4, 0);
 } else
  FUNC_5(&VAR_9->int_lock);

 if (VAR_9->info->var.vmode & VAR_1)
  VAR_10 = VAR_6;
 else
  VAR_10 = VAR_7;
 if (VAR_10 != FUNC_1(VAR_3)) {
  FUNC_0("changing IER to 0x%X\n", VAR_10);
  FUNC_2(VAR_3, VAR_10);
 }

 FUNC_6(&VAR_9->int_lock);
 return 0;
}
