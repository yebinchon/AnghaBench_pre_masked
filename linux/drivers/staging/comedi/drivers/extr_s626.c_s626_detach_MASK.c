
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s626_private {scalar_t__ ai_cmd_running; } ;
struct comedi_device {scalar_t__ mmio; struct s626_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_8)
{
 struct s626_private *VAR_9 = VAR_8->private;

 if (VAR_9) {

  VAR_9->ai_cmd_running = 0;

  if (VAR_8->mmio) {


   FUNC_3(0, VAR_8->mmio + VAR_5);

   FUNC_3(VAR_1 | VAR_2,
          VAR_8->mmio + VAR_6);


   FUNC_2(VAR_8, 0);


   FUNC_3(VAR_3, VAR_8->mmio + VAR_7);
   FUNC_3(VAR_0, VAR_8->mmio + VAR_4);
  }
 }
 FUNC_0(VAR_8);
 FUNC_1(VAR_8);
}
