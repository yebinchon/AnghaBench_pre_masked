
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cxl {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxl*,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;

void FUNC_2(struct cxl *VAR_2)
{
 u64 VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 FUNC_1(&VAR_2->dev,
   "PSL_FIR1: 0x%016llx\nPSL_FIR2: 0x%016llx\n",
   VAR_3, VAR_4);
}
