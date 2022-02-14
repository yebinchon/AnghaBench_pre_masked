
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct idt_ntb_dev {TYPE_2__ ntb; int * msg_locks; } ;
struct TYPE_3__ {int dev; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct idt_ntb_dev *VAR_1)
{
 unsigned char VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(&VAR_1->msg_locks[VAR_2]);

 FUNC_0(&VAR_1->ntb.pdev->dev, "NTB Messaging initialized");
}
