
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_17)
{
 unsigned long VAR_18;





 FUNC_3(&VAR_17->spinlock, VAR_18);
 FUNC_1(VAR_17->iobase + VAR_0);
 FUNC_2(0, VAR_17->iobase + VAR_0);
 FUNC_1(VAR_17->iobase + VAR_0);
 FUNC_2(0, VAR_17->iobase + VAR_0);
 FUNC_2(1, VAR_17->iobase + VAR_0);
 FUNC_2(0, VAR_17->iobase + VAR_0);
 FUNC_4(&VAR_17->spinlock, VAR_18);


 FUNC_5(VAR_17, 0x00, VAR_1);





 FUNC_5(VAR_17, VAR_6 |
    VAR_7 |
    VAR_5,
      VAR_10);
 FUNC_5(VAR_17, 0xff, VAR_13);
 FUNC_5(VAR_17, 0xff, VAR_9);
 FUNC_5(VAR_17, VAR_6 |
    VAR_7 |
    VAR_5,
      VAR_14);
 FUNC_5(VAR_17, 0x7f, VAR_13);
 FUNC_5(VAR_17, 0xff, VAR_12);




 FUNC_5(VAR_17, 0x09, VAR_16);
 FUNC_5(VAR_17, 0x0e, VAR_15);







 FUNC_5(VAR_17, VAR_3, VAR_8);
 FUNC_5(VAR_17, VAR_2, VAR_8);

 FUNC_5(VAR_17, VAR_3, VAR_11);
 FUNC_5(VAR_17, VAR_2, VAR_11);

 FUNC_5(VAR_17, VAR_3, FUNC_0(0));
 FUNC_5(VAR_17, VAR_2, FUNC_0(0));

 FUNC_5(VAR_17, VAR_3, FUNC_0(1));
 FUNC_5(VAR_17, VAR_2, FUNC_0(1));

 FUNC_5(VAR_17, VAR_3, FUNC_0(2));
 FUNC_5(VAR_17, VAR_2, FUNC_0(2));


 FUNC_5(VAR_17, 0x00, VAR_4);
}
