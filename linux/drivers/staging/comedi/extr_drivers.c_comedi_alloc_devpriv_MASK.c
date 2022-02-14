
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {void* private; } ;


 int VAR_0 ;
 void* FUNC_0 (size_t,int ) ;

void *FUNC_1(struct comedi_device *VAR_1, size_t VAR_2)
{
 VAR_1->private = FUNC_0(VAR_2, VAR_0);
 return VAR_1->private;
}
