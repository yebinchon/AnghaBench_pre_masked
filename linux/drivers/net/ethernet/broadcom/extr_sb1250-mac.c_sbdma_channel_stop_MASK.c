
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmacdma {int * sbdma_remptr; int * sbdma_addptr; int sbdma_config0; int sbdma_dscrbase; int sbdma_config1; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sbmacdma *VAR_0)
{




 FUNC_0(0, VAR_0->sbdma_config1);

 FUNC_0(0, VAR_0->sbdma_dscrbase);

 FUNC_0(0, VAR_0->sbdma_config0);





 VAR_0->sbdma_addptr = ((void*)0);
 VAR_0->sbdma_remptr = ((void*)0);
}
