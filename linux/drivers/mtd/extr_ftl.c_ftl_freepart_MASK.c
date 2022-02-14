
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bam_cache; int * XferInfo; int * EUNInfo; int * VirtualBlockMap; } ;
typedef TYPE_1__ partition_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(partition_t *VAR_0)
{
 FUNC_1(VAR_0->VirtualBlockMap);
 VAR_0->VirtualBlockMap = ((void*)0);
 FUNC_0(VAR_0->EUNInfo);
 VAR_0->EUNInfo = ((void*)0);
 FUNC_0(VAR_0->XferInfo);
 VAR_0->XferInfo = ((void*)0);
 FUNC_0(VAR_0->bam_cache);
 VAR_0->bam_cache = ((void*)0);
}
