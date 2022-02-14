
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvcg_streaming_class_group {char* name; int group; } ;
struct config_group {int dummy; } ;


 unsigned int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,struct config_group*) ;
 struct uvcg_streaming_class_group* FUNC_3 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct config_group *VAR_3)
{
 static const char * const VAR_4[] = { "fs", "hs", "ss" };
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); ++VAR_5) {
  struct uvcg_streaming_class_group *VAR_6;

  VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;

  VAR_6->name = VAR_4[VAR_5];

  FUNC_1(&VAR_6->group, VAR_6->name,
         &VAR_2);
  FUNC_2(&VAR_6->group, VAR_3);
 }

 return 0;
}
