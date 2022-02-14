
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3)
{
 FUNC_1(0, VAR_2->mmio + VAR_0);
 FUNC_1(0, VAR_2->mmio + VAR_1);

 FUNC_0(VAR_2, 0);

 return 0;
}
