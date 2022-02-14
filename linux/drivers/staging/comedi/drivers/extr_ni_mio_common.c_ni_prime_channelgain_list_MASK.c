
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_6, VAR_1, VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  if (!(FUNC_1(VAR_6, VAR_4) &
        VAR_3)) {
   FUNC_2(VAR_6, 1, VAR_0);
   return;
  }
  FUNC_3(1);
 }
 FUNC_0(VAR_6->class_dev, "timeout loading channel/gain list\n");
}
