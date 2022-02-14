
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_8)
{
 int VAR_9;


 FUNC_3(0, VAR_8->iobase + FUNC_2(0));
 FUNC_3(0, VAR_8->iobase + FUNC_2(1));
 FUNC_3(0, VAR_8->iobase + FUNC_2(3));


 FUNC_4(VAR_8, VAR_0, 0);


 FUNC_4(VAR_8, VAR_2, 0);


 FUNC_4(VAR_8, VAR_1, 0);


 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  FUNC_4(VAR_8, FUNC_1(VAR_9), 0x8000);
  FUNC_4(VAR_8, FUNC_0(VAR_9), 0x0000);
 }


 FUNC_4(VAR_8, VAR_5, 0xff);


 FUNC_4(VAR_8, VAR_6, 0);


 FUNC_4(VAR_8, VAR_3, 0);


 FUNC_4(VAR_8, VAR_4, 0);


 FUNC_4(VAR_8, VAR_7, 0);
}
