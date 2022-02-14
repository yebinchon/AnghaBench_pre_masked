
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int cmd5; int (* write_byte ) (struct comedi_device*,int ,int ) ;} ;
struct comedi_device {struct labpc_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int ,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5)
{
 struct labpc_private *VAR_6 = VAR_3->private;
 int VAR_7;

 for (VAR_7 = 1; VAR_7 <= VAR_5; VAR_7++) {

  VAR_6->cmd5 &= ~VAR_1;

  if (VAR_4 & (1 << (VAR_5 - VAR_7)))
   VAR_6->cmd5 |= VAR_2;
  else
   VAR_6->cmd5 &= ~VAR_2;
  FUNC_2(1);
  VAR_6->write_byte(VAR_3, VAR_6->cmd5, VAR_0);

  VAR_6->cmd5 |= VAR_1;
  FUNC_2(1);
  VAR_6->write_byte(VAR_3, VAR_6->cmd5, VAR_0);
 }
}
