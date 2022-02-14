
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_audio_manager_module_attribute {int dummy; } ;
struct TYPE_2__ {int pid; } ;
struct gb_audio_manager_module {TYPE_1__ desc; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(
 struct gb_audio_manager_module *VAR_0,
 struct gb_audio_manager_module_attribute *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, "%d", VAR_0->desc.pid);
}
