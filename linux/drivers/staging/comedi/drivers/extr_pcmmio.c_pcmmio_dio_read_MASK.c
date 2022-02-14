
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmmio_private {int pagelock; } ;
struct comedi_device {unsigned long iobase; struct pcmmio_private* private; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_7(struct comedi_device *VAR_1,
        int VAR_2, int VAR_3)
{
 struct pcmmio_private *VAR_4 = VAR_1->private;
 unsigned long VAR_5 = VAR_1->iobase;
 unsigned long VAR_6;
 unsigned int VAR_7;

 FUNC_5(&VAR_4->pagelock, VAR_6);
 if (VAR_2 == 0) {

  VAR_7 = FUNC_3(VAR_5 + FUNC_2(VAR_3 + 0));
  VAR_7 |= (FUNC_3(VAR_5 + FUNC_2(VAR_3 + 1)) << 8);
  VAR_7 |= (FUNC_3(VAR_5 + FUNC_2(VAR_3 + 2)) << 16);
 } else {
  FUNC_4(FUNC_0(VAR_2), VAR_5 + VAR_0);
  VAR_7 = FUNC_3(VAR_5 + FUNC_1(0));
  VAR_7 |= (FUNC_3(VAR_5 + FUNC_1(1)) << 8);
  VAR_7 |= (FUNC_3(VAR_5 + FUNC_1(2)) << 16);
 }
 FUNC_6(&VAR_4->pagelock, VAR_6);

 return VAR_7;
}
