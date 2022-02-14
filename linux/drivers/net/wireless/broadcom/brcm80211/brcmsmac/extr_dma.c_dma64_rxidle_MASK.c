
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_info {scalar_t__ nrxd; int core; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_info*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(struct dma_info *VAR_3)
{
 FUNC_2(VAR_3->core, "%s:\n", VAR_3->name);

 if (VAR_3->nrxd == 0)
  return 1;

 return ((FUNC_1(VAR_3->core,
        FUNC_0(VAR_3, VAR_2)) & VAR_0) ==
  (FUNC_1(VAR_3->core, FUNC_0(VAR_3, VAR_1)) &
   VAR_0));
}
