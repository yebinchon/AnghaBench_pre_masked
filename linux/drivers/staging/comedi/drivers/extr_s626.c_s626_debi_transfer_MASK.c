
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int class_dev; scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 scalar_t__ FUNC_3 (struct comedi_device*,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_4)
{
 static const int VAR_5 = 10000;
 int VAR_6;


 FUNC_2(VAR_4, VAR_0, VAR_2);





 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (FUNC_3(VAR_4, VAR_0, VAR_2))
   break;
  FUNC_4(1);
 }
 if (VAR_6 == VAR_5)
  FUNC_0(VAR_4->class_dev,
   "Timeout while uploading to DEBI control register\n");


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (!(FUNC_1(VAR_4->mmio + VAR_3) & VAR_1))
   break;
  FUNC_4(1);
 }
 if (VAR_6 == VAR_5)
  FUNC_0(VAR_4->class_dev, "DEBI transfer timeout\n");
}
