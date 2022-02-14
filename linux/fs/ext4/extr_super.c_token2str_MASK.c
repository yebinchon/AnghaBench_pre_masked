
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_token {int token; char const* pattern; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char) ;
 struct match_token* VAR_1 ;

__attribute__((used)) static const char *FUNC_1(int VAR_2)
{
 const struct match_token *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->token != VAR_0; VAR_3++)
  if (VAR_3->token == VAR_2 && !FUNC_0(VAR_3->pattern, '='))
   break;
 return VAR_3->pattern;
}
