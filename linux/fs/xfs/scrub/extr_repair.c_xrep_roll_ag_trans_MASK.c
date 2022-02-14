
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ agfl_bp; scalar_t__ agf_bp; scalar_t__ agi_bp; } ;
struct xfs_scrub {TYPE_1__ sa; int tp; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;

int
FUNC_3(
 struct xfs_scrub *VAR_0)
{
 int VAR_1;


 if (VAR_0->sa.agi_bp)
  FUNC_0(VAR_0->tp, VAR_0->sa.agi_bp);
 if (VAR_0->sa.agf_bp)
  FUNC_0(VAR_0->tp, VAR_0->sa.agf_bp);
 if (VAR_0->sa.agfl_bp)
  FUNC_0(VAR_0->tp, VAR_0->sa.agfl_bp);
 VAR_1 = FUNC_2(&VAR_0->tp);
 if (VAR_1)
  return VAR_1;


 if (VAR_0->sa.agi_bp)
  FUNC_1(VAR_0->tp, VAR_0->sa.agi_bp);
 if (VAR_0->sa.agf_bp)
  FUNC_1(VAR_0->tp, VAR_0->sa.agf_bp);
 if (VAR_0->sa.agfl_bp)
  FUNC_1(VAR_0->tp, VAR_0->sa.agfl_bp);

 return 0;
}
