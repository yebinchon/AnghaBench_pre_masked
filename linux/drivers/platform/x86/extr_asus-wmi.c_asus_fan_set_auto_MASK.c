
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asus_wmi {int fan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct asus_wmi*,int ,int *) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct asus_wmi *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 switch (VAR_3->fan_type) {
 case 128:
  VAR_4 = FUNC_1(VAR_0,
            0, &VAR_5);
  if (VAR_4)
   return VAR_4;

  if (VAR_5 != 1)
   return -VAR_1;
  break;

 case 129:
  VAR_4 = FUNC_0(VAR_3, 0, ((void*)0));
  if (VAR_4)
   return -VAR_2;
  break;

 default:
  return -VAR_2;
 }


 return 0;
}
