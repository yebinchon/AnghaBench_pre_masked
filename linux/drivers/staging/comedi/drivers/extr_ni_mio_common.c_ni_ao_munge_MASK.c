
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int chanlist_len; int * chanlist; } ;
typedef int __le16 ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 unsigned short FUNC_2 (struct comedi_subdevice*,unsigned short) ;
 scalar_t__ FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (unsigned short) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1,
   void *VAR_2, unsigned int VAR_3,
   unsigned int VAR_4)
{
 struct comedi_cmd *VAR_5 = &VAR_1->async->cmd;
 unsigned int VAR_6 = FUNC_1(VAR_1, VAR_3);
 unsigned short *VAR_7 = VAR_2;
 unsigned int VAR_8;




 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  unsigned int VAR_9 = FUNC_0(VAR_5->chanlist[VAR_4]);
  unsigned short VAR_10 = VAR_7[VAR_8];





  if (FUNC_3(VAR_1, VAR_9))
   VAR_10 = FUNC_2(VAR_1, VAR_10);




  VAR_7[VAR_8] = VAR_10;

  VAR_4++;
  VAR_4 %= VAR_5->chanlist_len;
 }
}
