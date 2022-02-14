
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_channel {int dummy; } ;
struct core_component {int dummy; } ;


 int VAR_0 ;
 struct most_channel* FUNC_0 (char*,char*) ;
 int FUNC_1 (struct most_channel*,struct core_component*,char*,char*) ;
 struct core_component* FUNC_2 (char*) ;

int FUNC_3(char *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4,
    char *VAR_5)
{
 struct most_channel *VAR_6 = FUNC_0(VAR_1, VAR_2);
 struct core_component *VAR_7 = FUNC_2(VAR_3);

 if (!VAR_6 || !VAR_7)
  return -VAR_0;

 return FUNC_1(VAR_6, VAR_7, VAR_4, VAR_5);
}
