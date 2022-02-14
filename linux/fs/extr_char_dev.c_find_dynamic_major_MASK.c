
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct char_device_struct {int major; struct char_device_struct* next; } ;


 int FUNC_0 (struct char_device_struct**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct char_device_struct** VAR_4 ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_5;
 struct char_device_struct *VAR_6;

 for (VAR_5 = FUNC_0(VAR_4)-1; VAR_5 >= VAR_0; VAR_5--) {
  if (VAR_4[VAR_5] == ((void*)0))
   return VAR_5;
 }

 for (VAR_5 = VAR_2;
      VAR_5 >= VAR_1; VAR_5--) {
  for (VAR_6 = VAR_4[FUNC_1(VAR_5)]; VAR_6; VAR_6 = VAR_6->next)
   if (VAR_6->major == VAR_5)
    break;

  if (VAR_6 == ((void*)0))
   return VAR_5;
 }

 return -VAR_3;
}
