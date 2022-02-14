
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct gb_audio_manager_module {int id; } ;


 int FUNC_0 (struct gb_audio_manager_module*) ;
 int FUNC_1 (char*,int ) ;
 struct gb_audio_manager_module* FUNC_2 (struct kobject*) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0)
{
 struct gb_audio_manager_module *VAR_1 = FUNC_2(VAR_0);

 FUNC_1("Destroying audio module #%d\n", VAR_1->id);

 FUNC_0(VAR_1);
}
