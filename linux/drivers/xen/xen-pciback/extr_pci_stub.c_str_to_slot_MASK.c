
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*,int*,int*,...) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_1, int *VAR_2, int *VAR_3,
         int *VAR_4, int *VAR_5)
{
 int VAR_6 = 0;

 switch (FUNC_0(VAR_1, " %x:%x:%x.%x %n", VAR_2, VAR_3, VAR_4, VAR_5,
         &VAR_6)) {
 case 3:
  *VAR_5 = -1;
  FUNC_0(VAR_1, " %x:%x:%x.* %n", VAR_2, VAR_3, VAR_4, &VAR_6);
  break;
 case 2:
  *VAR_4 = *VAR_5 = -1;
  FUNC_0(VAR_1, " %x:%x:*.* %n", VAR_2, VAR_3, &VAR_6);
  break;
 }
 if (VAR_6 && !VAR_1[VAR_6])
  return 0;


 *VAR_2 = 0;
 switch (FUNC_0(VAR_1, " %x:%x.%x %n", VAR_3, VAR_4, VAR_5, &VAR_6)) {
 case 2:
  *VAR_5 = -1;
  FUNC_0(VAR_1, " %x:%x.* %n", VAR_3, VAR_4, &VAR_6);
  break;
 case 1:
  *VAR_4 = *VAR_5 = -1;
  FUNC_0(VAR_1, " %x:*.* %n", VAR_3, &VAR_6);
  break;
 }
 if (VAR_6 && !VAR_1[VAR_6])
  return 0;

 return -VAR_0;
}
