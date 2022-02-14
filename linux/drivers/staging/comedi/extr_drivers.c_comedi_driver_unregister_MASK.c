
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_driver {struct comedi_driver* next; } ;
struct comedi_device {int mutex; scalar_t__ use_count; int class_dev; struct comedi_driver* driver; scalar_t__ attached; } ;


 int VAR_0 ;
 struct comedi_device* FUNC_0 (int) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 struct comedi_driver* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct comedi_driver *VAR_3)
{
 struct comedi_driver *VAR_4;
 int VAR_5;


 FUNC_4(&VAR_2);
 if (VAR_1 == VAR_3) {
  VAR_1 = VAR_3->next;
 } else {
  for (VAR_4 = VAR_1; VAR_4->next; VAR_4 = VAR_4->next) {
   if (VAR_4->next == VAR_3) {
    VAR_4->next = VAR_3->next;
    break;
   }
  }
 }
 FUNC_5(&VAR_2);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct comedi_device *VAR_6 = FUNC_0(VAR_5);

  if (!VAR_6)
   continue;

  FUNC_4(&VAR_6->mutex);
  if (VAR_6->attached && VAR_6->driver == VAR_3) {
   if (VAR_6->use_count)
    FUNC_3(VAR_6->class_dev,
      "BUG! detaching device with use_count=%d\n",
      VAR_6->use_count);
   FUNC_2(VAR_6);
  }
  FUNC_5(&VAR_6->mutex);
  FUNC_1(VAR_6);
 }
}
