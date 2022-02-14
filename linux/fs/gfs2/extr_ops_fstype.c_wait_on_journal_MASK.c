
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ls_ops; } ;
struct gfs2_sbd {int sd_flags; TYPE_2__ sd_lockstruct; } ;
struct TYPE_3__ {int * lm_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gfs2_sbd *VAR_3)
{
 if (VAR_3->sd_lockstruct.ls_ops->lm_mount == ((void*)0))
  return 0;

 return FUNC_0(&VAR_3->sd_flags, VAR_1, VAR_2)
  ? -VAR_0 : 0;
}
