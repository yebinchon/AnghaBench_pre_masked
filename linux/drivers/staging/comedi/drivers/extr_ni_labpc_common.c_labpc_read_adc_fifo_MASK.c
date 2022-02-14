
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {unsigned int (* read_byte ) (struct comedi_device*,int ) ;} ;
struct comedi_device {struct labpc_private* private; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct comedi_device*,int ) ;
 unsigned int FUNC_1 (struct comedi_device*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_1)
{
 struct labpc_private *VAR_2 = VAR_1->private;
 unsigned int VAR_3 = VAR_2->read_byte(VAR_1, VAR_0);
 unsigned int VAR_4 = VAR_2->read_byte(VAR_1, VAR_0);

 return (VAR_4 << 8) | VAR_3;
}
