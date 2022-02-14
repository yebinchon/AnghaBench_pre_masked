
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* xfs_agfl_walk_fn ) (struct xfs_mount*,unsigned int,void*) ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct xfs_agf {scalar_t__ agf_flcount; int agf_fllast; int agf_flfirst; } ;
typedef int __be32 ;


 int * FUNC_0 (struct xfs_mount*,struct xfs_buf*) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct xfs_mount*) ;

int
FUNC_4(
 struct xfs_mount *VAR_0,
 struct xfs_agf *VAR_1,
 struct xfs_buf *VAR_2,
 xfs_agfl_walk_fn VAR_3,
 void *VAR_4)
{
 __be32 *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_0, VAR_2);
 VAR_6 = FUNC_1(VAR_1->agf_flfirst);


 if (VAR_1->agf_flcount == FUNC_2(0))
  return 0;


 for (;;) {
  VAR_7 = VAR_3(VAR_0, FUNC_1(VAR_5[VAR_6]), VAR_4);
  if (VAR_7)
   return VAR_7;
  if (VAR_6 == FUNC_1(VAR_1->agf_fllast))
   break;
  if (++VAR_6 == FUNC_3(VAR_0))
   VAR_6 = 0;
 }

 return 0;
}
