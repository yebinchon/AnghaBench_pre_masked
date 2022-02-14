
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum fman_intr_type { ____Placeholder_fman_intr_type } fman_intr_type ;
typedef enum fman_event_modules { ____Placeholder_fman_event_modules } fman_event_modules ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




__attribute__((used)) static int FUNC_0(enum fman_event_modules VAR_5, u8 VAR_6,
       enum fman_intr_type VAR_7)
{
 int VAR_8;

 switch (VAR_5) {
 case 128:
  if (VAR_7 == VAR_4)
   VAR_8 = VAR_1 + VAR_6;
  else
   VAR_8 = VAR_3 + VAR_6;
  break;
 case 129:
  if (VAR_7 == VAR_4)
   VAR_8 = VAR_0;
  else
   VAR_8 = (VAR_2 + VAR_6);
  break;
 case 130:
  VAR_8 = VAR_0;
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }

 return VAR_8;
}
