
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_cmd *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->chanlist_len; VAR_7++) {
  unsigned int VAR_8 = FUNC_1(VAR_6->chanlist[VAR_7]);
  unsigned int VAR_9 = FUNC_2(VAR_6->chanlist[VAR_7]);
  unsigned int VAR_10 = FUNC_0(VAR_6->chanlist[VAR_7]);
  unsigned int VAR_11;

  VAR_11 = VAR_8 | FUNC_3(VAR_9);

  if (VAR_10 == VAR_0)
   VAR_11 |= VAR_2;

  if (VAR_7 == (VAR_6->chanlist_len - 1))
   VAR_11 |= VAR_3;

  FUNC_4(VAR_11, VAR_4->iobase + VAR_1);
 }
}
