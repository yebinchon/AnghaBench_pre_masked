
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct xfs_iext_leaf {TYPE_1__* recs; } ;
struct TYPE_2__ {int lo; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint64_t
FUNC_0(
 struct xfs_iext_leaf *VAR_1,
 int VAR_2)
{
 return VAR_1->recs[VAR_2].lo & VAR_0;
}
