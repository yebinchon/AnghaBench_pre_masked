
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int stat2; int (* read_byte ) (struct comedi_device*,int ) ;int cmd5; int (* write_byte ) (struct comedi_device*,int ,int ) ;} ;
struct comedi_device {struct labpc_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int ,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(struct comedi_device *VAR_4)
{
 struct labpc_private *VAR_5 = VAR_4->private;
 unsigned int VAR_6 = 0;
 int VAR_7;
 const int VAR_8 = 8;

 for (VAR_7 = 1; VAR_7 <= VAR_8; VAR_7++) {

  VAR_5->cmd5 |= VAR_1;
  FUNC_3(1);
  VAR_5->write_byte(VAR_4, VAR_5->cmd5, VAR_0);

  VAR_5->cmd5 &= ~VAR_1;
  FUNC_3(1);
  VAR_5->write_byte(VAR_4, VAR_5->cmd5, VAR_0);

  FUNC_3(1);
  VAR_5->stat2 = VAR_5->read_byte(VAR_4, VAR_3);
  if (VAR_5->stat2 & VAR_2)
   VAR_6 |= 1 << (VAR_8 - VAR_7);
 }

 return VAR_6;
}
