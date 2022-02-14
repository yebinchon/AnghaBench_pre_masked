
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s626_private {scalar_t__ ai_cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ mmio; struct s626_private* private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4)
{
 struct s626_private *VAR_5 = VAR_3->private;


 FUNC_0(VAR_3, VAR_0, VAR_2);


 FUNC_1(0, VAR_3->mmio + VAR_1);

 VAR_5->ai_cmd_running = 0;

 return 0;
}
