
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_audio_manager_module_descriptor {int dummy; } ;
struct gb_audio_manager_module {int id; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gb_audio_manager_module**,int ,int,struct gb_audio_manager_module_descriptor*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

int FUNC_6(struct gb_audio_manager_module_descriptor *VAR_5)
{
 struct gb_audio_manager_module *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(&VAR_2, 0, 0, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_1(&VAR_6, VAR_1,
          VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_3(&VAR_2, VAR_7);
  return VAR_8;
 }


 FUNC_0(&VAR_4);
 FUNC_4(&VAR_6->list, &VAR_3);
 FUNC_5(&VAR_4);

 return VAR_6->id;
}
