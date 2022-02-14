
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max; } ;
struct rvu_pfvf {TYPE_1__ msix; } ;
struct rvu {struct rvu_pfvf* pf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rvu*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rvu *VAR_3)
{
 struct rvu_pfvf *VAR_4 = &VAR_3->pf[0];
 int VAR_5;

 VAR_4 = &VAR_3->pf[0];
 VAR_5 = FUNC_1(VAR_3, VAR_0, FUNC_0(0)) & 0x3ff;





 return (VAR_4->msix.max >= VAR_1 + VAR_2) &&
        VAR_5;
}
