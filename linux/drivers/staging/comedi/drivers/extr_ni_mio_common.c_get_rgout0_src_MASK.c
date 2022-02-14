
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int routing_tables; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int,int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct comedi_device *VAR_1)
{
 struct ni_private *VAR_2 = VAR_1->private;
 int VAR_3 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_0, &VAR_2->routing_tables);
}
