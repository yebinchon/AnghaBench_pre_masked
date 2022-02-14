
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct pci_dev {int dev; } ;
struct maxiradio {int io; int tea; } ;


 struct v4l2_device* FUNC_0 (int *) ;
 int FUNC_1 (struct maxiradio*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 struct maxiradio* FUNC_7 (struct v4l2_device*) ;
 int FUNC_8 (struct v4l2_device*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct v4l2_device *VAR_1 = FUNC_0(&VAR_0->dev);
 struct maxiradio *VAR_2 = FUNC_7(VAR_1);

 FUNC_6(&VAR_2->tea);

 FUNC_2(0, VAR_2->io);
 FUNC_8(VAR_1);
 FUNC_5(FUNC_4(VAR_0, 0), FUNC_3(VAR_0, 0));
 FUNC_1(VAR_2);
}
