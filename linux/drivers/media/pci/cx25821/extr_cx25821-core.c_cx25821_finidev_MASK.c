
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct pci_dev {scalar_t__ irq; } ;
struct cx25821_dev {int dummy; } ;


 int FUNC_0 (struct cx25821_dev*) ;
 int FUNC_1 (struct cx25821_dev*) ;
 int FUNC_2 (scalar_t__,struct cx25821_dev*) ;
 struct cx25821_dev* FUNC_3 (struct v4l2_device*) ;
 int FUNC_4 (struct cx25821_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct v4l2_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct v4l2_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct v4l2_device *VAR_1 = FUNC_6(VAR_0);
 struct cx25821_dev *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_2);
 FUNC_5(VAR_0);


 if (VAR_0->irq)
  FUNC_2(VAR_0->irq, VAR_2);

 FUNC_0(VAR_2);
 FUNC_7(VAR_1);
 FUNC_4(VAR_2);
}
