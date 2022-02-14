
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct be_adapter {int pdev; scalar_t__ csr; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int*) ;

u16 FUNC_3(struct be_adapter *VAR_3)
{
 u32 VAR_4;

 if (FUNC_0(VAR_3))
  VAR_4 = FUNC_1(VAR_3->csr + VAR_1);
 else
  FUNC_2(VAR_3->pdev,
          VAR_2, &VAR_4);

 return VAR_4 & VAR_0;
}
