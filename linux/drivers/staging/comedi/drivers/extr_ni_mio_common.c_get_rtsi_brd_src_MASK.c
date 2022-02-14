
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int routing_tables; } ;
struct comedi_device {struct ni_private* private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,struct comedi_device*) ;
 int FUNC_2 (int,int,int *) ;

__attribute__((used)) static inline int FUNC_3(int VAR_0, struct comedi_device *VAR_1)
{
 struct ni_private *VAR_2 = VAR_1->private;
 int VAR_3 = VAR_0;
 int VAR_4;

 if (VAR_0 >= FUNC_0(0))
  VAR_3 = VAR_0 - FUNC_0(0);
 else
  VAR_0 = FUNC_0(VAR_0);






 VAR_4 = FUNC_1(VAR_3, VAR_1);

 return FUNC_2(VAR_4, VAR_0, &VAR_2->routing_tables);
}
