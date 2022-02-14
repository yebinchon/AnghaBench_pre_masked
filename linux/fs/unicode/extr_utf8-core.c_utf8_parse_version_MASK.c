
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version_string ;
typedef int substring_t ;
struct match_token {int member_0; char* member_1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned int*) ;
 int FUNC_1 (char*,struct match_token const*,int *) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, unsigned int *VAR_2,
         unsigned int *VAR_3, unsigned int *VAR_4)
{
 substring_t VAR_5[3];
 char VAR_6[12];
 static const struct match_token VAR_7[] = {
  {1, "%d.%d.%d"},
  {0, ((void*)0)}
 };

 FUNC_2(VAR_6, VAR_1, sizeof(VAR_6));

 if (FUNC_1(VAR_6, VAR_7, VAR_5) != 1)
  return -VAR_0;

 if (FUNC_0(&VAR_5[0], VAR_2) || FUNC_0(&VAR_5[1], VAR_3) ||
     FUNC_0(&VAR_5[2], VAR_4))
  return -VAR_0;

 return 0;
}
