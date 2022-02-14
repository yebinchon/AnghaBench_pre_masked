
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sony_pic_dev {scalar_t__ (* handle_irq ) (int,int) ;scalar_t__ evport_offset; TYPE_5__* cur_ioport; TYPE_3__* event_types; } ;
typedef int irqreturn_t ;
struct TYPE_9__ {scalar_t__ minimum; } ;
struct TYPE_6__ {scalar_t__ minimum; } ;
struct TYPE_10__ {TYPE_4__ io1; TYPE_1__ io2; } ;
struct TYPE_8__ {int mask; int data; TYPE_2__* events; } ;
struct TYPE_7__ {int event; int data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 int VAR_4, VAR_5;
 u8 VAR_6 = 0;
 u8 VAR_7 = 0;
 u8 VAR_8 = 0;

 struct sony_pic_dev *VAR_9 = (struct sony_pic_dev *) VAR_3;

 VAR_6 = FUNC_1(VAR_9->cur_ioport->io1.minimum);
 if (VAR_9->cur_ioport->io2.minimum)
  VAR_7 = FUNC_1(VAR_9->cur_ioport->io2.minimum);
 else
  VAR_7 = FUNC_1(VAR_9->cur_ioport->io1.minimum +
    VAR_9->evport_offset);

 FUNC_0("event ([%.2x] [%.2x]) at port 0x%.4x(+0x%.2x)\n",
   VAR_6, VAR_7, VAR_9->cur_ioport->io1.minimum,
   VAR_9->evport_offset);

 if (VAR_6 == 0x00 || VAR_6 == 0xff)
  return VAR_0;

 for (VAR_4 = 0; VAR_9->event_types[VAR_4].mask; VAR_4++) {

  if ((VAR_7 & VAR_9->event_types[VAR_4].data) !=
      VAR_9->event_types[VAR_4].data)
   continue;

  if (!(VAR_1 & VAR_9->event_types[VAR_4].mask))
   continue;

  for (VAR_5 = 0; VAR_9->event_types[VAR_4].events[VAR_5].event; VAR_5++) {
   if (VAR_6 == VAR_9->event_types[VAR_4].events[VAR_5].data) {
    VAR_8 =
     VAR_9->event_types[VAR_4].events[VAR_5].event;

    if (!VAR_8)
     return VAR_0;
    goto found;
   }
  }
 }



 if (VAR_9->handle_irq && VAR_9->handle_irq(VAR_7, VAR_6) == 0)
  return VAR_0;

 FUNC_0("unknown event ([%.2x] [%.2x]) at port 0x%.4x(+0x%.2x)\n",
   VAR_6, VAR_7, VAR_9->cur_ioport->io1.minimum,
   VAR_9->evport_offset);
 return VAR_0;

found:
 FUNC_2(VAR_8);
 FUNC_3(VAR_8);
 return VAR_0;
}
