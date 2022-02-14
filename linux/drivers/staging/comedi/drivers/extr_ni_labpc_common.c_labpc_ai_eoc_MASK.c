
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int stat1; int (* read_byte ) (struct comedi_device*,int ) ;} ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {struct labpc_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3,
   struct comedi_subdevice *VAR_4,
   struct comedi_insn *VAR_5,
   unsigned long VAR_6)
{
 struct labpc_private *VAR_7 = VAR_3->private;

 VAR_7->stat1 = VAR_7->read_byte(VAR_3, VAR_2);
 if (VAR_7->stat1 & VAR_1)
  return 0;
 return -VAR_0;
}
