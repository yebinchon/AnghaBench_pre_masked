
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dell_wmi_event {int type; int length; } ;



__attribute__((used)) static bool FUNC_0(u8 *VAR_0, int VAR_1)
{
 struct dell_wmi_event *VAR_2 = (struct dell_wmi_event *)VAR_0;

 if (VAR_2 == ((void*)0) || VAR_1 < 6)
  return 0;

 if ((VAR_2->type == 0 || VAR_2->type == 0xf) &&
   VAR_2->length >= 2)
  return 1;

 return 0;
}
