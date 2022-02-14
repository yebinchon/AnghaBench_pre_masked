
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_8,
       struct comedi_subdevice *VAR_9)
{
 FUNC_0(VAR_0 | VAR_1,
        VAR_8->mmio + VAR_2);
 FUNC_0(VAR_4 | VAR_7 |
        VAR_5 | VAR_3,
        VAR_8->mmio + VAR_6);

 return 0;
}
