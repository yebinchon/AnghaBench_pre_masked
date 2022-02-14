
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {unsigned int counter_index; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct ni_gpct*,int ) ;
 int FUNC_3 (struct ni_gpct*,int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2)
{
 struct ni_gpct *VAR_3 = VAR_2->private;
 unsigned int VAR_4 = VAR_3->counter_index;
 unsigned int VAR_5;

 FUNC_3(VAR_3, FUNC_0(VAR_4), VAR_0, 0);
 FUNC_3(VAR_3, FUNC_0(VAR_4),
   VAR_0, VAR_0);
 VAR_5 = FUNC_2(VAR_3, FUNC_1(VAR_4));
 if (VAR_5 != FUNC_2(VAR_3, FUNC_1(VAR_4)))
  VAR_5 = FUNC_2(VAR_3, FUNC_1(VAR_4));

 return VAR_5;
}
