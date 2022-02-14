
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct gb_audio_manager_module_attribute {int (* show ) (struct gb_audio_manager_module*,struct gb_audio_manager_module_attribute*,char*) ;} ;
struct gb_audio_manager_module {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct gb_audio_manager_module*,struct gb_audio_manager_module_attribute*,char*) ;
 struct gb_audio_manager_module* FUNC_1 (struct kobject*) ;
 struct gb_audio_manager_module_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
      struct attribute *VAR_2, char *VAR_3)
{
 struct gb_audio_manager_module_attribute *VAR_4;
 struct gb_audio_manager_module *VAR_5;

 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = FUNC_1(VAR_1);

 if (!VAR_4->show)
  return -VAR_0;

 return VAR_4->show(VAR_5, VAR_4, VAR_3);
}
