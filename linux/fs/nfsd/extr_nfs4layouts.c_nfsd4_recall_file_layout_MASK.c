
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_count; int sc_stateid; TYPE_2__* sc_file; } ;
struct nfs4_layout_stateid {int ls_recalled; int ls_lock; int ls_recall; TYPE_1__ ls_stid; int ls_layouts; } ;
struct TYPE_4__ {int fi_lo_recalls; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct nfs4_layout_stateid *VAR_0)
{
 FUNC_4(&VAR_0->ls_lock);
 if (VAR_0->ls_recalled)
  goto out_unlock;

 VAR_0->ls_recalled = 1;
 FUNC_0(&VAR_0->ls_stid.sc_file->fi_lo_recalls);
 if (FUNC_1(&VAR_0->ls_layouts))
  goto out_unlock;

 FUNC_6(&VAR_0->ls_stid.sc_stateid);

 FUNC_3(&VAR_0->ls_stid.sc_count);
 FUNC_2(&VAR_0->ls_recall);

out_unlock:
 FUNC_5(&VAR_0->ls_lock);
}
