
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcimdas_private* private; } ;
struct cb_pcimdas_private {scalar_t__ BADR3; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct comedi_device *VAR_2)
{
 struct cb_pcimdas_private *VAR_3 = VAR_2->private;
 unsigned int VAR_4;






 VAR_4 = FUNC_0(VAR_3->BADR3 + VAR_0);
 return VAR_4 & VAR_1;
}
