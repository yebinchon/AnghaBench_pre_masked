
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct asus_wmi {int wmi_event_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,struct asus_wmi*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(u32 VAR_4, void *VAR_5)
{
 struct asus_wmi *VAR_6 = VAR_5;
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2 + 1; VAR_8++) {
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7 < 0) {
   FUNC_2("Failed to get notify code: %d\n", VAR_7);
   return;
  }

  if (VAR_7 == VAR_1 || VAR_7 == VAR_0)
   return;

  FUNC_1(VAR_7, VAR_6);





  if (!VAR_6->wmi_event_queue || VAR_4 != VAR_3)
   return;
 }

 FUNC_2("Failed to process event queue, last code: 0x%x\n", VAR_7);
}
