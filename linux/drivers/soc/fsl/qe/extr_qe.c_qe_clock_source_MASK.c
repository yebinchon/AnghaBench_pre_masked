
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum qe_clock { ____Placeholder_qe_clock } qe_clock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (char const*,int *,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

enum qe_clock FUNC_4(const char *VAR_6)
{
 unsigned int VAR_7;

 if (FUNC_1(VAR_6, "none") == 0)
  return VAR_3;

 if (FUNC_2(VAR_6, "tsync_pin") == 0)
  return VAR_5;

 if (FUNC_2(VAR_6, "rsync_pin") == 0)
  return VAR_4;

 if (FUNC_3(VAR_6, "brg", 3) == 0) {
  VAR_7 = FUNC_0(VAR_6 + 3, ((void*)0), 10);
  if ((VAR_7 >= 1) && (VAR_7 <= 16))
   return (VAR_0 - 1) + VAR_7;
  else
   return VAR_2;
 }

 if (FUNC_3(VAR_6, "clk", 3) == 0) {
  VAR_7 = FUNC_0(VAR_6 + 3, ((void*)0), 10);
  if ((VAR_7 >= 1) && (VAR_7 <= 24))
   return (VAR_1 - 1) + VAR_7;
  else
   return VAR_2;
 }

 return VAR_2;
}
