
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__* ai_offset; } ;
struct comedi_subdevice {int subdev_flags; struct comedi_async* async; } ;
struct comedi_device {struct ni_private* private; } ;
struct comedi_cmd {unsigned int chanlist_len; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 unsigned short FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
   void *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5)
{
 struct ni_private *VAR_6 = VAR_1->private;
 struct comedi_async *VAR_7 = VAR_2->async;
 struct comedi_cmd *VAR_8 = &VAR_7->cmd;
 unsigned int VAR_9 = FUNC_0(VAR_2, VAR_4);
 unsigned short *VAR_10 = VAR_3;
 unsigned int *VAR_11 = VAR_3;
 unsigned int VAR_12;





 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {






  if (VAR_2->subdev_flags & VAR_0)
   VAR_11[VAR_12] += VAR_6->ai_offset[VAR_5];
  else
   VAR_10[VAR_12] += VAR_6->ai_offset[VAR_5];
  VAR_5++;
  VAR_5 %= VAR_8->chanlist_len;
 }
}
