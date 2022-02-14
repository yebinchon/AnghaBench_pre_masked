
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kset {int dummy; } ;
struct gb_audio_manager_module_descriptor {int dummy; } ;
struct TYPE_3__ {struct kset* kset; } ;
struct gb_audio_manager_module {int id; TYPE_1__ kobj; int desc; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int *,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 struct gb_audio_manager_module* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct gb_audio_manager_module_descriptor*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct gb_audio_manager_module*) ;

int FUNC_8(
 struct gb_audio_manager_module **VAR_3,
 struct kset *VAR_4,
 int VAR_5, struct gb_audio_manager_module_descriptor *VAR_6)
{
 int VAR_7;
 struct gb_audio_manager_module *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;


 FUNC_0(&VAR_8->list);


 VAR_8->id = VAR_5;


 FUNC_4(&VAR_8->desc, VAR_6, sizeof(*VAR_6));


 VAR_8->kobj.kset = VAR_4;







 VAR_7 = FUNC_1(&VAR_8->kobj, &VAR_2, ((void*)0), "%d",
       VAR_5);
 if (VAR_7) {
  FUNC_5("failed initializing kobject for audio module #%d\n",
         VAR_5);
  FUNC_2(&VAR_8->kobj);
  return VAR_7;
 }




 FUNC_7(VAR_8);

 *VAR_3 = VAR_8;
 FUNC_6("Created audio module #%d\n", VAR_5);
 return 0;
}
