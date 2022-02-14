
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_repeat {scalar_t__ delay; scalar_t__ period; } ;
struct input_handle {struct input_dev* dev; } ;
struct input_dev {scalar_t__* rep; int evbit; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct input_handle*,int ,size_t,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct input_handle *VAR_3, void *VAR_4)
{
 struct input_dev *VAR_5 = VAR_3->dev;
 struct kbd_repeat *VAR_6 = VAR_4;

 if (FUNC_1(VAR_0, VAR_5->evbit)) {

  if (VAR_6[0].delay > 0)
   FUNC_0(VAR_3,
        VAR_0, VAR_1, VAR_6[0].delay);
  if (VAR_6[0].period > 0)
   FUNC_0(VAR_3,
        VAR_0, VAR_2, VAR_6[0].period);

  VAR_6[1].delay = VAR_5->rep[VAR_1];
  VAR_6[1].period = VAR_5->rep[VAR_2];
 }

 return 0;
}
