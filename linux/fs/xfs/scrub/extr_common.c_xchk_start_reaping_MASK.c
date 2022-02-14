
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_scrub {int flags; int mp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void
FUNC_1(
 struct xfs_scrub *VAR_1)
{
 FUNC_0(VAR_1->mp);
 VAR_1->flags &= ~VAR_0;
}
