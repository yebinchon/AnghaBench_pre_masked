
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; int pacer; struct atao_private* private; } ;
struct atao_private {scalar_t__ cfg3; scalar_t__ cfg1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_10)
{
 struct atao_private *VAR_11 = VAR_10->private;



 VAR_11->cfg1 = 0;
 FUNC_4(VAR_11->cfg1, VAR_10->iobase + VAR_3);


 FUNC_1(VAR_10->pacer, 0, VAR_9 | VAR_8);
 FUNC_1(VAR_10->pacer, 1, VAR_9 | VAR_8);
 FUNC_2(VAR_10->pacer, 0, 0x0003);

 FUNC_4(VAR_4, VAR_10->iobase + VAR_5);

 VAR_11->cfg3 = 0;
 FUNC_4(VAR_11->cfg3, VAR_10->iobase + VAR_6);

 FUNC_3(VAR_10->iobase + VAR_7);

 FUNC_0(VAR_10, 1);
 FUNC_4(0, VAR_10->iobase + VAR_1);
 FUNC_4(0, VAR_10->iobase + VAR_2);
 FUNC_4(0, VAR_10->iobase + VAR_0);
 FUNC_0(VAR_10, 0);
}
