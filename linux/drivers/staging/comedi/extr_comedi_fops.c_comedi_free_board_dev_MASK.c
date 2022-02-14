
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int minor; scalar_t__ class_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2)
{
 if (VAR_2) {
  FUNC_2(VAR_2);
  if (VAR_2->class_dev) {
   FUNC_3(VAR_1,
           FUNC_0(VAR_0, VAR_2->minor));
  }
  FUNC_1(VAR_2);
 }
}
