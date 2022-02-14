
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int group; } ;
struct f_uvc_opts {TYPE_1__ func_inst; } ;
struct TYPE_5__ {int type; int name; } ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int *,TYPE_2__*) ;

int FUNC_3(struct f_uvc_opts *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->func_inst.group, VAR_0.name,
        &VAR_0.type);

 VAR_2 = FUNC_2(&VAR_1->func_inst.group,
       &VAR_0);
 if (VAR_2 < 0)
  FUNC_1(&VAR_1->func_inst.group);

 return VAR_2;
}
