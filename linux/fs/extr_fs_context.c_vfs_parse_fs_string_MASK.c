
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_parameter {char const* key; size_t size; int string; int type; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (struct fs_context*,struct fs_parameter*) ;

int FUNC_3(struct fs_context *VAR_3, const char *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 int VAR_7;

 struct fs_parameter VAR_8 = {
  .key = VAR_4,
  .type = VAR_2,
  .size = VAR_6,
 };

 if (VAR_6 > 0) {
  VAR_8.string = FUNC_1(VAR_5, VAR_6, VAR_1);
  if (!VAR_8.string)
   return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_3, &VAR_8);
 FUNC_0(VAR_8.string);
 return VAR_7;
}
