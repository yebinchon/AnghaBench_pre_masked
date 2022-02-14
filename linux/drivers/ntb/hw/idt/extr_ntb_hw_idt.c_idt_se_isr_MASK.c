
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct idt_ntb_dev {TYPE_2__ ntb; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct idt_ntb_dev*,int ,int ) ;
 int FUNC_2 (struct idt_ntb_dev*,int ) ;
 int FUNC_3 (struct idt_ntb_dev*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct idt_ntb_dev *VAR_6, u32 VAR_7)
{
 u32 VAR_8;


 VAR_8 = FUNC_2(VAR_6, VAR_5);


 FUNC_3(VAR_6, VAR_4, (u32)-1);
 FUNC_3(VAR_6, VAR_3, (u32)-1);
 FUNC_3(VAR_6, VAR_2, (u32)-1);


 FUNC_1(VAR_6, VAR_1, VAR_0);

 FUNC_0(&VAR_6->ntb.pdev->dev, "SE IRQ detected %#08x (SESTS %#08x)",
     VAR_7, VAR_8);


 FUNC_4(&VAR_6->ntb);
}
