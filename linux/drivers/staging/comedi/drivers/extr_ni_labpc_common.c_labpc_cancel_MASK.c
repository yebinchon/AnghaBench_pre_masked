
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int cmd2; int cmd3; int (* write_byte ) (struct comedi_device*,int,int ) ;} ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; struct labpc_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{
 struct labpc_private *VAR_7 = VAR_5->private;
 unsigned long VAR_8;

 FUNC_0(&VAR_5->spinlock, VAR_8);
 VAR_7->cmd2 &= ~(VAR_3 | VAR_0 | VAR_1);
 VAR_7->write_byte(VAR_5, VAR_7->cmd2, VAR_2);
 FUNC_1(&VAR_5->spinlock, VAR_8);

 VAR_7->cmd3 = 0;
 VAR_7->write_byte(VAR_5, VAR_7->cmd3, VAR_4);

 return 0;
}
