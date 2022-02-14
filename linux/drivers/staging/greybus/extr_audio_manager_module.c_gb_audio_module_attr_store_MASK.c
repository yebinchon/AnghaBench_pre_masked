
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct gb_audio_manager_module_attribute {int (* store ) (struct gb_audio_manager_module*,struct gb_audio_manager_module_attribute*,char const*,size_t) ;} ;
struct gb_audio_manager_module {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct gb_audio_manager_module*,struct gb_audio_manager_module_attribute*,char const*,size_t) ;
 struct gb_audio_manager_module* FUNC_1 (struct kobject*) ;
 struct gb_audio_manager_module_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
       struct attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct gb_audio_manager_module_attribute *VAR_5;
 struct gb_audio_manager_module *VAR_6;

 VAR_5 = FUNC_2(VAR_2);
 VAR_6 = FUNC_1(VAR_1);

 if (!VAR_5->store)
  return -VAR_0;

 return VAR_5->store(VAR_6, VAR_5, VAR_3, VAR_4);
}
