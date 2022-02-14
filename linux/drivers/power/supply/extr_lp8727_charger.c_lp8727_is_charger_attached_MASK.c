
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_3, int VAR_4)
{
 if (!FUNC_0(VAR_3, "ac"))
  return VAR_4 == VAR_1 || VAR_4 == VAR_0;
 else if (!FUNC_0(VAR_3, "usb"))
  return VAR_4 == VAR_2;

 return VAR_4 >= VAR_1 && VAR_4 <= VAR_2;
}
