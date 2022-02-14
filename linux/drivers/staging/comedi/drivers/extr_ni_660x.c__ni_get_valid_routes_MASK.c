
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_660x_private {int routing_tables; } ;
struct comedi_device {struct ni_660x_private* private; } ;


 unsigned int FUNC_0 (int *,unsigned int,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_0,
      unsigned int VAR_1,
      unsigned int *VAR_2)
{
 struct ni_660x_private *VAR_3 = VAR_0->private;

 return FUNC_0(&VAR_3->routing_tables, VAR_1,
       VAR_2);
}
