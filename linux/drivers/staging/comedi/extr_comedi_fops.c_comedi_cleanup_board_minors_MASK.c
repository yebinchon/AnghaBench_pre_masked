
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 struct comedi_device* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct comedi_device *VAR_1;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1 = FUNC_0(VAR_2);
  FUNC_1(VAR_1);
 }
}
