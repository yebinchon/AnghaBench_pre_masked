
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handler {int dummy; } ;
struct input_dev {int keybit; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(struct input_handler *VAR_6, struct input_dev *VAR_7)
{
 int VAR_8;

 if (FUNC_0(VAR_2, VAR_7->evbit))
  return 1;

 if (FUNC_0(VAR_1, VAR_7->evbit)) {
  for (VAR_8 = VAR_5; VAR_8 < VAR_0; VAR_8++)
   if (FUNC_0(VAR_8, VAR_7->keybit))
    return 1;
  for (VAR_8 = VAR_3; VAR_8 <= VAR_4; VAR_8++)
   if (FUNC_0(VAR_8, VAR_7->keybit))
    return 1;
 }

 return 0;
}
