
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unit_str ;
typedef int u8 ;
typedef int u64 ;
typedef int test_str ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char const*,...) ;
 scalar_t__ FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1, u8 *VAR_2, u64 *VAR_3,
     int *VAR_4, const char *VAR_5, int VAR_6,
     const char *VAR_7, const char *VAR_8)
{
 char VAR_9[VAR_0], VAR_10[VAR_0];


 if (VAR_3)
  VAR_3[VAR_1] = *VAR_4;


 if (VAR_2) {
  if (FUNC_1(VAR_5, '%'))
   FUNC_0(VAR_9, sizeof(VAR_9),
     VAR_5, VAR_6);
  else
   FUNC_2(VAR_9, VAR_5);
  FUNC_0(VAR_10, sizeof(VAR_10), VAR_7, VAR_8);
  FUNC_0(VAR_2 + VAR_1 * VAR_0,
    VAR_0,
    "%-6s %-24s", VAR_9, VAR_10);
 }
}
