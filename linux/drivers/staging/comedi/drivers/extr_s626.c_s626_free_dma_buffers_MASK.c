
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int physical_base; scalar_t__ logical_base; } ;
struct TYPE_3__ {int physical_base; scalar_t__ logical_base; } ;
struct s626_private {TYPE_2__ ana_buf; TYPE_1__ rps_buf; } ;
struct pci_dev {int dummy; } ;
struct comedi_device {struct s626_private* private; } ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct pci_dev*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_0(VAR_1);
 struct s626_private *VAR_3 = VAR_1->private;

 if (!VAR_3)
  return;

 if (VAR_3->rps_buf.logical_base)
  FUNC_1(VAR_2, VAR_0,
        VAR_3->rps_buf.logical_base,
        VAR_3->rps_buf.physical_base);
 if (VAR_3->ana_buf.logical_base)
  FUNC_1(VAR_2, VAR_0,
        VAR_3->ana_buf.logical_base,
        VAR_3->ana_buf.physical_base);
}
