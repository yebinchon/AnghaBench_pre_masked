
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {size_t max; } ;
struct rvu_pfvf {scalar_t__* msix_lfmap; TYPE_1__ msix; } ;
struct rvu {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 size_t VAR_0 ;

__attribute__((used)) static u16 FUNC_1(struct rvu *VAR_1, struct rvu_pfvf *VAR_2,
          int VAR_3, int VAR_4)
{
 u16 VAR_5;

 if (VAR_4 < 0)
  return VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2->msix.max; VAR_5++) {
  if (VAR_2->msix_lfmap[VAR_5] == FUNC_0(VAR_3, VAR_4))
   return VAR_5;
 }
 return VAR_0;
}
