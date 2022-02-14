
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int cmd5; int (* write_byte ) (struct comedi_device*,int,int ) ;} ;
struct comedi_device {struct labpc_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,unsigned int,int) ;
 int FUNC_1 (struct comedi_device*,int,int ) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 struct labpc_private *VAR_7 = VAR_4->private;


 VAR_7->cmd5 &= ~(VAR_0 | VAR_1 | VAR_3);
 FUNC_4(1);
 VAR_7->write_byte(VAR_4, VAR_7->cmd5, VAR_2);


 FUNC_0(VAR_4, VAR_5, 4);

 FUNC_0(VAR_4, VAR_6, 8);


 VAR_7->cmd5 |= VAR_0;
 FUNC_4(1);
 VAR_7->write_byte(VAR_4, VAR_7->cmd5, VAR_2);
 VAR_7->cmd5 &= ~VAR_0;
 FUNC_4(1);
 VAR_7->write_byte(VAR_4, VAR_7->cmd5, VAR_2);
}
