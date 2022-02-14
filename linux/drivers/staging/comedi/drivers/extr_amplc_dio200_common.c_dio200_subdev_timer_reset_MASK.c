
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3,
          struct comedi_subdevice *VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0) & VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_5 | VAR_2);
 FUNC_1(VAR_3, VAR_0, VAR_5);
}
