
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hantro_dev {int dummy; } ;
struct TYPE_8__ {int error; } ;
struct hantro_ctx {TYPE_1__ ctrl_handler; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_10__ {int codec; TYPE_2__ cfg; } ;


 int FUNC_0 (TYPE_6__*) ;
 TYPE_6__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hantro_dev *VAR_1,
         struct hantro_ctx *VAR_2,
         int VAR_3)
{
 int VAR_4, VAR_5 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->ctrl_handler, VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (!(VAR_3 & VAR_0[VAR_4].codec))
   continue;

  FUNC_4(&VAR_2->ctrl_handler,
         &VAR_0[VAR_4].cfg, ((void*)0));
  if (VAR_2->ctrl_handler.error) {
   FUNC_5("Adding control (%d) failed %d\n",
    VAR_0[VAR_4].cfg.id,
    VAR_2->ctrl_handler.error);
   FUNC_1(&VAR_2->ctrl_handler);
   return VAR_2->ctrl_handler.error;
  }
 }
 return FUNC_3(&VAR_2->ctrl_handler);
}
