
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 struct comedi_device* FUNC_0 (unsigned int) ;
 struct comedi_device* FUNC_1 (unsigned int) ;

struct comedi_device *FUNC_2(unsigned int VAR_1)
{
 if (VAR_1 < VAR_0)
  return FUNC_0(VAR_1);

 return FUNC_1(VAR_1);
}
