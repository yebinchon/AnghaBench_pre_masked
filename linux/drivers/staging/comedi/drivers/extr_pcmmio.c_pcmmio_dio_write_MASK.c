
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmmio_private {int pagelock; } ;
struct comedi_device {unsigned long iobase; struct pcmmio_private* private; } ;


 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_1, unsigned int VAR_2,
        int VAR_3, int VAR_4)
{
 struct pcmmio_private *VAR_5 = VAR_1->private;
 unsigned long VAR_6 = VAR_1->iobase;
 unsigned long VAR_7;

 FUNC_4(&VAR_5->pagelock, VAR_7);
 if (VAR_3 == 0) {

  FUNC_3(VAR_2 & 0xff, VAR_6 + FUNC_2(VAR_4 + 0));
  FUNC_3((VAR_2 >> 8) & 0xff, VAR_6 + FUNC_2(VAR_4 + 1));
  FUNC_3((VAR_2 >> 16) & 0xff, VAR_6 + FUNC_2(VAR_4 + 2));
 } else {
  FUNC_3(FUNC_0(VAR_3), VAR_6 + VAR_0);
  FUNC_3(VAR_2 & 0xff, VAR_6 + FUNC_1(0));
  FUNC_3((VAR_2 >> 8) & 0xff, VAR_6 + FUNC_1(1));
  FUNC_3((VAR_2 >> 16) & 0xff, VAR_6 + FUNC_1(2));
 }
 FUNC_5(&VAR_5->pagelock, VAR_7);
}
