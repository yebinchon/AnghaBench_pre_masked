
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ls_ops; } ;
struct gfs2_sbd {int sd_kobj; TYPE_2__ sd_lockstruct; } ;
struct TYPE_3__ {int (* lm_first_done ) (struct gfs2_sbd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_sbd*,char*) ;
 int FUNC_1 (int *,int ,char**) ;
 int FUNC_2 (struct gfs2_sbd*) ;

__attribute__((used)) static void FUNC_3(struct gfs2_sbd *VAR_1)
{
 char *VAR_2 = "FIRSTMOUNT=Done";
 char *VAR_3[] = { VAR_2, ((void*)0) };

 FUNC_0(VAR_1, "first mount done, others may mount\n");

 if (VAR_1->sd_lockstruct.ls_ops->lm_first_done)
  VAR_1->sd_lockstruct.ls_ops->lm_first_done(VAR_1);

 FUNC_1(&VAR_1->sd_kobj, VAR_0, VAR_3);
}
