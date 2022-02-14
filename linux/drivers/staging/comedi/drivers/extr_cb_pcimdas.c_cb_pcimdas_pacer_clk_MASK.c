
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcimdas_private* private; } ;
struct cb_pcimdas_private {scalar_t__ BADR3; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_4)
{
 struct cb_pcimdas_private *VAR_5 = VAR_4->private;
 unsigned int VAR_6;


 VAR_6 = FUNC_0(VAR_5->BADR3 + VAR_3);
 if (VAR_6 & VAR_2)
  return VAR_0;
 return VAR_1;
}
