
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;
struct comedi_devconfig {int* options; } ;


 int FUNC_0 (struct comedi_device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
      struct comedi_devconfig *VAR_1)
{
 int VAR_2 = VAR_1->options[0];
 int VAR_3 = VAR_1->options[1];


 if (VAR_2 <= 0)
  VAR_2 = 1000000;
 if (VAR_3 <= 0)
  VAR_3 = 100000;

 return FUNC_0(VAR_0, VAR_2, VAR_3);
}
