
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtd_private {scalar_t__ ai_count; scalar_t__ las1; } ;
struct comedi_subdevice {unsigned short maxdata; struct comedi_async* async; } ;
struct comedi_device {struct rtd_private* private; } ;
struct comedi_cmd {int * chanlist; } ;
struct comedi_async {size_t cur_chan; struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned short*,int) ;
 unsigned short FUNC_2 (struct comedi_subdevice*,unsigned short) ;
 scalar_t__ FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 unsigned short FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
       int VAR_3)
{
 struct rtd_private *VAR_4 = VAR_1->private;
 struct comedi_async *VAR_5 = VAR_2->async;
 struct comedi_cmd *VAR_6 = &VAR_5->cmd;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  unsigned int VAR_8 = FUNC_0(VAR_6->chanlist[VAR_5->cur_chan]);
  unsigned short VAR_9;

  if (VAR_4->ai_count == 0) {
   VAR_9 = FUNC_4(VAR_4->las1 + VAR_0);
   continue;
  }

  VAR_9 = FUNC_4(VAR_4->las1 + VAR_0);
  VAR_9 >>= 3;


  if (FUNC_3(VAR_2, VAR_8))
   VAR_9 = FUNC_2(VAR_2, VAR_9);
  VAR_9 &= VAR_2->maxdata;

  if (!FUNC_1(VAR_2, &VAR_9, 1))
   return -1;

  if (VAR_4->ai_count > 0)
   VAR_4->ai_count--;
 }
 return 0;
}
