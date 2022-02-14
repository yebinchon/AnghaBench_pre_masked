
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_to_name_map {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(struct value_to_name_map *VAR_1, int VAR_2,
    const char *VAR_3, int *VAR_4)
{
 int VAR_5;

 *VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (FUNC_0(VAR_3, VAR_1[VAR_5].name)) {
   *VAR_4 = VAR_5;
   return 0;
  }
 }
 return -VAR_0;
}
