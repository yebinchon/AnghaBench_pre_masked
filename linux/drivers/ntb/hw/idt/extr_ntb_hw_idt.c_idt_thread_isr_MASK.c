
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {TYPE_2__* pdev; } ;
struct idt_ntb_dev {TYPE_1__ ntb; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct idt_ntb_dev*,int) ;
 int FUNC_2 (struct idt_ntb_dev*,int) ;
 int FUNC_3 (struct idt_ntb_dev*,int ) ;
 int FUNC_4 (struct idt_ntb_dev*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct idt_ntb_dev *VAR_8 = VAR_7;
 bool VAR_9 = 0;
 u32 VAR_10;


 VAR_10 = FUNC_3(VAR_8, VAR_3);


 if (VAR_10 & VAR_1) {
  FUNC_2(VAR_8, VAR_10);
  VAR_9 = 1;
 }


 if (VAR_10 & VAR_0) {
  FUNC_1(VAR_8, VAR_10);
  VAR_9 = 1;
 }


 if (VAR_10 & VAR_2) {
  FUNC_4(VAR_8, VAR_10);
  VAR_9 = 1;
 }

 FUNC_0(&VAR_8->ntb.pdev->dev, "IDT IRQs 0x%08x handled", VAR_10);

 return VAR_9 ? VAR_4 : VAR_5;
}
