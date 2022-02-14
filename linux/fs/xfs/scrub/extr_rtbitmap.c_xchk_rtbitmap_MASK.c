
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_scrub {int tp; TYPE_1__* sm; } ;
struct TYPE_2__ {int sm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_scrub*,int ,int ,int*) ;
 int FUNC_1 (struct xfs_scrub*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,struct xfs_scrub*) ;

int
FUNC_3(
 struct xfs_scrub *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 || (VAR_3->sm->sm_flags & VAR_1))
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3->tp, VAR_2, VAR_3);
 if (!FUNC_0(VAR_3, VAR_0, 0, &VAR_4))
  goto out;

out:
 return VAR_4;
}
