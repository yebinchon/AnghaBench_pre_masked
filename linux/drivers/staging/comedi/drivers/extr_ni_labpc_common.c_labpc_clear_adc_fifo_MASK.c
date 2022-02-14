
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int (* write_byte ) (struct comedi_device*,int,int ) ;} ;
struct comedi_device {struct labpc_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1)
{
 struct labpc_private *VAR_2 = VAR_1->private;

 VAR_2->write_byte(VAR_1, 0x1, VAR_0);
 FUNC_0(VAR_1);
}
