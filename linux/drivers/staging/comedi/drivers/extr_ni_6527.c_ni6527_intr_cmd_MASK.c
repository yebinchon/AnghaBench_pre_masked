
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_4,
      struct comedi_subdevice *VAR_5)
{
 FUNC_0(VAR_0, VAR_4->mmio + VAR_1);
 FUNC_0(VAR_2, VAR_4->mmio + VAR_3);

 return 0;
}
