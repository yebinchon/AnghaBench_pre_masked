
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct mb_cmd_name {scalar_t__ cmd; char const* str; } ;


 int FUNC_0 (struct mb_cmd_name*) ;
 struct mb_cmd_name* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(uint16_t VAR_1)
{
 int VAR_2;
 struct mb_cmd_name *VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = VAR_0 + VAR_2;
  if (VAR_1 == VAR_3->cmd)
   return VAR_3->str;
 }
 return "unknown";
}
