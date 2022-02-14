
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int mite_channel_lock; scalar_t__ ai_mite_chan; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_2)
{
 struct ni_private *VAR_3 = VAR_2->private;
 int VAR_4;
 static const int VAR_5 = 10000;
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_4(&VAR_3->mite_channel_lock, VAR_6);
 if (VAR_3->ai_mite_chan) {
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   if ((FUNC_2(VAR_2, VAR_1) &
        VAR_0) &&
       FUNC_1(VAR_3->ai_mite_chan) == 0)
    break;
   FUNC_6(5);
  }
  if (VAR_4 == VAR_5) {
   FUNC_0(VAR_2->class_dev, "timed out\n");
   FUNC_0(VAR_2->class_dev,
    "mite_bytes_in_transit=%i, AI_Status1_Register=0x%x\n",
    FUNC_1(VAR_3->ai_mite_chan),
    FUNC_2(VAR_2, VAR_1));
   VAR_7 = -1;
  }
 }
 FUNC_5(&VAR_3->mite_channel_lock, VAR_6);

 FUNC_3(VAR_2);

 return VAR_7;
}
