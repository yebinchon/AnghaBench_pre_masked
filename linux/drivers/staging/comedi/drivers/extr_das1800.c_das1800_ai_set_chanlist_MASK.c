
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; scalar_t__ iobase; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (unsigned short,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_4,
        unsigned int *VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;


 FUNC_4(&VAR_4->spinlock, VAR_7);


 FUNC_2(VAR_3, VAR_4->iobase + VAR_2);
 FUNC_2(VAR_6 - 1, VAR_4->iobase + VAR_1);


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  unsigned int VAR_9 = FUNC_0(VAR_5[VAR_8]);
  unsigned int VAR_10 = FUNC_1(VAR_5[VAR_8]);
  unsigned short VAR_11;

  VAR_11 = VAR_9 | ((VAR_10 & 0x3) << 8);
  FUNC_3(VAR_11, VAR_4->iobase + VAR_0);
 }


 FUNC_2(VAR_6 - 1, VAR_4->iobase + VAR_1);

 FUNC_5(&VAR_4->spinlock, VAR_7);
}
