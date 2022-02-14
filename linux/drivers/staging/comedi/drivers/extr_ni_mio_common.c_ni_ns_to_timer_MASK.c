
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int clock_ns; } ;
struct comedi_device {struct ni_private* private; } ;



 unsigned int VAR_0 ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(const struct comedi_device *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 struct ni_private *VAR_4 = VAR_1->private;
 int VAR_5;

 switch (VAR_3 & VAR_0) {
 case 129:
 default:
  VAR_5 = FUNC_0(VAR_2, VAR_4->clock_ns);
  break;
 case 130:
  VAR_5 = (VAR_2) / VAR_4->clock_ns;
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_2, VAR_4->clock_ns);
  break;
 }
 return VAR_5 - 1;
}
