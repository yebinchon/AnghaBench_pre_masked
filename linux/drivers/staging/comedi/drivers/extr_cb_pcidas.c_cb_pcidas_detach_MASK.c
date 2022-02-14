
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {int ao_pacer; scalar_t__ amcc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2)
{
 struct cb_pcidas_private *VAR_3 = VAR_2->private;

 if (VAR_3) {
  if (VAR_3->amcc)
   FUNC_2(VAR_1,
        VAR_3->amcc + VAR_0);
  FUNC_1(VAR_3->ao_pacer);
 }
 FUNC_0(VAR_2);
}
