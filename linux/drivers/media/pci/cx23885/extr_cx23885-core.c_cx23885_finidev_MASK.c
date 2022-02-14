
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct pci_dev {int irq; } ;
struct cx23885_dev {int ctrl_handler; } ;


 int FUNC_0 (struct cx23885_dev*) ;
 int FUNC_1 (struct cx23885_dev*) ;
 int FUNC_2 (struct cx23885_dev*) ;
 int FUNC_3 (struct cx23885_dev*) ;
 int FUNC_4 (int ,struct cx23885_dev*) ;
 int FUNC_5 (struct cx23885_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct v4l2_device* FUNC_7 (struct pci_dev*) ;
 struct cx23885_dev* FUNC_8 (struct v4l2_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct v4l2_device*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_0)
{
 struct v4l2_device *VAR_1 = FUNC_7(VAR_0);
 struct cx23885_dev *VAR_2 = FUNC_8(VAR_1);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 FUNC_3(VAR_2);


 FUNC_4(VAR_0->irq, VAR_2);

 FUNC_6(VAR_0);

 FUNC_0(VAR_2);
 FUNC_9(&VAR_2->ctrl_handler);
 FUNC_10(VAR_1);
 FUNC_5(VAR_2);
}
