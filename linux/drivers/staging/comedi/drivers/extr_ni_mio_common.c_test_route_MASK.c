
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int routing_tables; } ;
struct comedi_device {struct ni_private* private; } ;
typedef scalar_t__ s8 ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,struct comedi_device*) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned int,int *) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_0, unsigned int VAR_1,
        struct comedi_device *VAR_2)
{
 struct ni_private *VAR_3 = VAR_2->private;
 s8 VAR_4 = FUNC_2(FUNC_0(VAR_0), VAR_1,
          &VAR_3->routing_tables);

 if (VAR_4 < 0)
  return -1;
 if (FUNC_1(VAR_1, VAR_2) != FUNC_0(VAR_0))
  return 0;
 return 1;
}
