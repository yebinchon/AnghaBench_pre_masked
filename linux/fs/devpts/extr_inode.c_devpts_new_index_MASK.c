
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max; scalar_t__ reserve; } ;
struct pts_fs_info {TYPE_1__ mount_opts; int allocated_ptys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_3(struct pts_fs_info *VAR_5)
{
 int VAR_6 = -VAR_0;

 if (FUNC_1(&VAR_2) >= (VAR_3 -
     (VAR_5->mount_opts.reserve ? 0 : VAR_4)))
  goto out;

 VAR_6 = FUNC_2(&VAR_5->allocated_ptys, VAR_5->mount_opts.max - 1,
   VAR_1);

out:
 if (VAR_6 < 0)
  FUNC_0(&VAR_2);
 return VAR_6;
}
