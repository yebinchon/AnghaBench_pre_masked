
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int cmd5; int (* write_byte ) (struct comedi_device*,int,int ) ;} ;
struct comedi_device {struct labpc_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,int const,int const) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (struct comedi_device*,int,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static unsigned int FUNC_6(struct comedi_device *VAR_3,
          unsigned int VAR_4)
{
 struct labpc_private *VAR_5 = VAR_3->private;
 unsigned int VAR_6;

 const int VAR_7 = 0x3;

 const int VAR_8 = 8;


 VAR_5->cmd5 &= ~VAR_0;
 FUNC_5(1);
 VAR_5->write_byte(VAR_3, VAR_5->cmd5, VAR_1);
 VAR_5->cmd5 |= (VAR_0 | VAR_2);
 FUNC_5(1);
 VAR_5->write_byte(VAR_3, VAR_5->cmd5, VAR_1);


 FUNC_1(VAR_3, VAR_7, VAR_8);

 FUNC_1(VAR_3, VAR_4, VAR_8);

 VAR_6 = FUNC_0(VAR_3);


 VAR_5->cmd5 &= ~(VAR_0 | VAR_2);
 FUNC_5(1);
 VAR_5->write_byte(VAR_3, VAR_5->cmd5, VAR_1);

 return VAR_6;
}
