
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sja1105_status {int crcchkg; int ids; int crcchkl; int configs; } ;


 int FUNC_0 (int *,int *,int,int,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct sja1105_status *VAR_1)
{

 u32 *VAR_2 = VAR_0;






 VAR_2--;
 FUNC_0(VAR_2 + 0x1, &VAR_1->configs, 31, 31, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->crcchkl, 30, 30, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->ids, 29, 29, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->crcchkg, 28, 28, 4);
}
