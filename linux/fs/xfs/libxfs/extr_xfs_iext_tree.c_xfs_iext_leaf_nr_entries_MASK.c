
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ifork {int dummy; } ;
struct xfs_iext_leaf {int * recs; } ;


 int FUNC_0 (struct xfs_ifork*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_ifork *VAR_0,
 struct xfs_iext_leaf *VAR_1,
 int VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_2; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (FUNC_1(&VAR_1->recs[VAR_3]))
   break;
 }

 return VAR_3;
}
