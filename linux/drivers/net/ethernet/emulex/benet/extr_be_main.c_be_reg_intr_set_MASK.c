
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_adapter {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_2, bool VAR_3)
{
 u32 VAR_4, VAR_5;

 FUNC_0(VAR_2->pdev, VAR_1,
         &VAR_4);
 VAR_5 = VAR_4 & VAR_0;

 if (!VAR_5 && VAR_3)
  VAR_4 |= VAR_0;
 else if (VAR_5 && !VAR_3)
  VAR_4 &= ~VAR_0;
 else
  return;

 FUNC_1(VAR_2->pdev,
          VAR_1, VAR_4);
}
