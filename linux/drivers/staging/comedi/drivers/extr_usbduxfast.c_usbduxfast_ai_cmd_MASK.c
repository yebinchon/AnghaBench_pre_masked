
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxfast_private {int ai_cmd_running; int mut; int ignore; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct usbduxfast_private* private; } ;
struct comedi_cmd {int convert_arg; int chanlist_len; scalar_t__ start_src; int * chanlist; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_6 ;
 int FUNC_3 (struct comedi_device*,int,int,int,unsigned int,int) ;
 int FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7,
        struct comedi_subdevice *VAR_8)
{
 struct usbduxfast_private *VAR_9 = VAR_7->private;
 struct comedi_cmd *VAR_10 = &VAR_8->async->cmd;
 unsigned int VAR_11 = 0xff;
 int VAR_12, VAR_13;
 long VAR_14, VAR_15;

 FUNC_1(&VAR_9->mut);
 if (VAR_9->ai_cmd_running) {
  VAR_13 = -VAR_0;
  goto cmd_exit;
 }





 VAR_9->ignore = VAR_2;

 VAR_14 = (VAR_10->convert_arg * 30) / 1000;

 switch (VAR_10->chanlist_len) {
 case 1:




  if (FUNC_0(VAR_10->chanlist[0]) > 0)
   VAR_11 = 0xff - 0x04;
  else
   VAR_11 = 0xff;







  if (VAR_10->start_src == VAR_4) {



   FUNC_3(VAR_7, 0, 0x01, 0x01, VAR_11, 0x00);
  } else {
   FUNC_3(VAR_7, 0, 0x01, 0x00, VAR_11, 0x00);
  }

  if (VAR_14 < VAR_1) {

   if (VAR_14 <= 1) {
    FUNC_3(VAR_7, 1,
          0x89, 0x03, VAR_11, 0xff);
   } else {






    FUNC_3(VAR_7, 1, VAR_14 - 1,
          0x02, VAR_11, 0x00);




    FUNC_3(VAR_7, 2,
          0x09, 0x01, VAR_11, 0xff);
   }
  } else {






   VAR_14 = VAR_14 - 1;


   FUNC_3(VAR_7, 1,
         VAR_14 / 2, 0x00, VAR_11, 0x00);


   FUNC_3(VAR_7, 2, VAR_14 - VAR_14 / 2,
         0x00, VAR_11, 0x00);






   FUNC_3(VAR_7, 3,
         0x09, 0x03, VAR_11, 0xff);
  }
  break;

 case 2:





  if (FUNC_0(VAR_10->chanlist[0]) > 0)
   VAR_11 = 0xff - 0x04;
  else
   VAR_11 = 0xff;


  FUNC_3(VAR_7, 0, 0x01, 0x02, VAR_11, 0x00);


  VAR_15 = VAR_14 - 1;

  if (FUNC_0(VAR_10->chanlist[1]) > 0)
   VAR_11 = 0xff - 0x04;
  else
   VAR_11 = 0xff;



  FUNC_3(VAR_7, 1, VAR_15 / 2,
        0x00, 0xfe & VAR_11, 0x00);


  FUNC_3(VAR_7, 2, VAR_15 - VAR_15 / 2,
        0x00, VAR_11, 0x00);


  FUNC_3(VAR_7, 3, 0x01, 0x02, VAR_11, 0x00);





  VAR_15 = VAR_14 - 2;

  if (FUNC_0(VAR_10->chanlist[0]) > 0)
   VAR_11 = 0xff - 0x04;
  else
   VAR_11 = 0xff;



  FUNC_3(VAR_7, 4, VAR_15 / 2,
        0x00, (0xff - 0x02) & VAR_11, 0x00);


  FUNC_3(VAR_7, 5, VAR_15 - VAR_15 / 2,
        0x00, VAR_11, 0x00);

  FUNC_3(VAR_7, 6, 0x01, 0x00, VAR_11, 0x00);
  break;

 case 3:



  for (VAR_12 = 0; VAR_12 < 1; VAR_12++) {
   int VAR_16 = VAR_12 * 2;

   if (FUNC_0(VAR_10->chanlist[VAR_12]) > 0)
    VAR_11 = 0xff - 0x04;
   else
    VAR_11 = 0xff;






   FUNC_3(VAR_7, VAR_16, VAR_14 / 2,
         0x02, VAR_11, 0x00);

   if (FUNC_0(VAR_10->chanlist[VAR_12 + 1]) > 0)
    VAR_11 = 0xff - 0x04;
   else
    VAR_11 = 0xff;




   FUNC_3(VAR_7, VAR_16 + 1, VAR_14 - VAR_14 / 2,
         0x00, 0xfe & VAR_11, 0x00);
  }


  VAR_15 = VAR_14 - 2;



  FUNC_3(VAR_7, 4, VAR_15 / 2,
        0x02, VAR_11, 0x00);

  if (FUNC_0(VAR_10->chanlist[0]) > 0)
   VAR_11 = 0xff - 0x04;
  else
   VAR_11 = 0xff;




  FUNC_3(VAR_7, 5, VAR_15 - VAR_15 / 2,
        0x00, (0xff - 0x02) & VAR_11, 0x00);

  FUNC_3(VAR_7, 6, 0x01, 0x00, VAR_11, 0x00);
  break;

 case 16:
  if (FUNC_0(VAR_10->chanlist[0]) > 0)
   VAR_11 = 0xff - 0x04;
  else
   VAR_11 = 0xff;

  if (VAR_10->start_src == VAR_4) {
   FUNC_3(VAR_7, 0, 0x01, 0x01,
         (0xff - 0x02) & VAR_11, 0x00);
  } else {






   FUNC_3(VAR_7, 0, 0xff, 0x00,
         (0xff - 0x02) & VAR_11, 0x00);
  }



  FUNC_3(VAR_7, 1, 0x01, 0x02, VAR_11, 0x00);


  VAR_14 = VAR_14 - 2;


  FUNC_3(VAR_7, 2, VAR_14 / 2,
        0x00, 0xfe & VAR_11, 0x00);


  FUNC_3(VAR_7, 3, VAR_14 - VAR_14 / 2,
        0x00, VAR_11, 0x00);




  FUNC_3(VAR_7, 4, 0x09, 0x01, VAR_11, 0xff);

  break;
 }


 VAR_13 = FUNC_4(VAR_7, VAR_3);
 if (VAR_13 < 0)
  goto cmd_exit;

 if ((VAR_10->start_src == VAR_5) || (VAR_10->start_src == VAR_4)) {

  VAR_9->ai_cmd_running = 1;
  VAR_13 = FUNC_5(VAR_7);
  if (VAR_13 < 0) {
   VAR_9->ai_cmd_running = 0;

   goto cmd_exit;
  }
  VAR_8->async->inttrig = ((void*)0);
 } else {
  VAR_8->async->inttrig = VAR_6;
 }

cmd_exit:
 FUNC_2(&VAR_9->mut);

 return VAR_13;
}
