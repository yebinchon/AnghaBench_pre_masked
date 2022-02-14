
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_audio_manager_module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct gb_audio_manager_module* FUNC_1 (int) ;
 int FUNC_2 (struct gb_audio_manager_module*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_2)
{
 struct gb_audio_manager_module *VAR_3;

 FUNC_0(&VAR_1);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(&VAR_1);

 if (!VAR_3)
  return -VAR_0;

 FUNC_2(VAR_3);
 return 0;
}
