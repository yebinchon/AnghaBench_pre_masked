
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cxl {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxl*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(struct cxl *VAR_1)
{
 u64 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 FUNC_1(&VAR_1->dev, "PSL_FIR: 0x%016llx\n", VAR_2);
}
