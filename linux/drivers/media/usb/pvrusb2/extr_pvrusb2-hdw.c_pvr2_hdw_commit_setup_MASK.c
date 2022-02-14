
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {int force_dirty; unsigned int control_cnt; scalar_t__ state_pipeline_config; struct pvr2_ctrl* controls; } ;
struct pvr2_ctrl {TYPE_1__* info; } ;
typedef int buf ;
struct TYPE_2__ {int type; int (* get_value ) (struct pvr2_ctrl*,int*) ;int name; int (* is_dirty ) (struct pvr2_ctrl*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pvr2_ctrl*,int ,int,char*,int,unsigned int*) ;
 int FUNC_2 (struct pvr2_hdw*) ;
 int FUNC_3 (int,char*,unsigned int,char*) ;
 int VAR_1 ;
 unsigned int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (struct pvr2_ctrl*) ;
 int FUNC_6 (struct pvr2_ctrl*,int*) ;
 int FUNC_7 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct pvr2_hdw *VAR_2)
{
 unsigned int VAR_3;
 struct pvr2_ctrl *VAR_4;
 int VAR_5;
 int VAR_6 = VAR_2->force_dirty;
 char VAR_7[100];
 unsigned int VAR_8,VAR_9;

 for (VAR_3 = 0; VAR_3 < VAR_2->control_cnt; VAR_3++) {
  VAR_4 = VAR_2->controls + VAR_3;
  if (!VAR_4->info->is_dirty) continue;
  if (!VAR_4->info->is_dirty(VAR_4)) continue;
  VAR_6 = !0;

  if (!(VAR_1 & VAR_0)) continue;
  VAR_8 = FUNC_4(VAR_7,sizeof(VAR_7),"\"%s\" <-- ",
     VAR_4->info->name);
  VAR_5 = 0;
  VAR_4->info->get_value(VAR_4,&VAR_5);
  FUNC_1(VAR_4,~0,VAR_5,
      VAR_7+VAR_8,
      sizeof(VAR_7)-VAR_8,&VAR_9);
  VAR_8 += VAR_9;
  VAR_8 += FUNC_4(VAR_7+VAR_8,sizeof(VAR_7)-VAR_8," <%s>",
      FUNC_0(VAR_4->info->type));
  FUNC_3(VAR_0,
      "/*--TRACE_COMMIT--*/ %.*s",
      VAR_8,VAR_7);
 }

 if (!VAR_6) {

  return 0;
 }

 VAR_2->state_pipeline_config = 0;
 FUNC_7("state_pipeline_config",VAR_2->state_pipeline_config);
 FUNC_2(VAR_2);

 return !0;
}
