
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {void* mon2_type; void* mon1_type; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(struct radeonfb_info *VAR_3,
           const char *VAR_4)
{
 char VAR_5[5], VAR_6[5];
 int VAR_7 = 0, VAR_8 = 0;
 const char *VAR_9;

 if (!VAR_4)
  return 0;

 VAR_9 = VAR_4;
 do {
  switch(*VAR_9) {
  case ',':
   VAR_5[VAR_7] = '\0';
   VAR_7 = 0;
   VAR_8 = 1;
   break;
  case ' ':
  case '\0':
   break;
  default:
   if (VAR_7 > 4)
    break;
   if (VAR_8)
    VAR_6[VAR_7] = *VAR_9;
   else
    VAR_5[VAR_7] = *VAR_9;
   VAR_7++;
  }

  if (VAR_7 > 4)
   VAR_7 = 4;

 } while (*VAR_9++);
 if (VAR_8)
  VAR_6[VAR_7] = 0;
 else {
  VAR_5[VAR_7] = 0;
  VAR_6[0] = 0;
 }
 if (FUNC_0(VAR_5, "CRT") == 0)
  VAR_3->mon1_type = VAR_0;
 else if (FUNC_0(VAR_5, "TMDS") == 0)
  VAR_3->mon1_type = VAR_1;
 else if (FUNC_0(VAR_5, "LVDS") == 0)
  VAR_3->mon1_type = VAR_2;

 if (FUNC_0(VAR_6, "CRT") == 0)
  VAR_3->mon2_type = VAR_0;
 else if (FUNC_0(VAR_6, "TMDS") == 0)
  VAR_3->mon2_type = VAR_1;
 else if (FUNC_0(VAR_6, "LVDS") == 0)
  VAR_3->mon2_type = VAR_2;

 return 1;
}
