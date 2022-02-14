
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_agblock_t ;
struct TYPE_2__ {int refc_cur; } ;
struct xfs_scrub {TYPE_1__ sa; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_scrub*,int ,int ,int *,int *) ;
 int FUNC_1 (struct xfs_scrub*,int ) ;
 int VAR_1 ;

int
FUNC_2(
 struct xfs_scrub *VAR_2)
{
 xfs_agblock_t VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_2->sa.refc_cur, VAR_1,
   &VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_2, VAR_3);

 return 0;
}
