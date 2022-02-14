
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int pacer; } ;
struct comedi_cmd {unsigned int convert_arg; int flags; } ;


 int FUNC_0 (int ,unsigned int*,int ) ;
 int FUNC_1 (unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
      struct comedi_cmd *VAR_1)
{
 unsigned int VAR_2 = VAR_1->convert_arg;
 FUNC_0(VAR_0->pacer, &VAR_2, VAR_1->flags);
 return FUNC_1(&VAR_1->convert_arg, VAR_2);
}
