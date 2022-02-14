
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb {int msi; int pdev; } ;


 int FUNC_0 (struct ddb*) ;
 int FUNC_1 (int ,struct ddb*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ddb *VAR_0)
{
 FUNC_0(VAR_0);
 if (VAR_0->msi == 2)
  FUNC_1(FUNC_2(VAR_0->pdev, 1), VAR_0);
 FUNC_1(FUNC_2(VAR_0->pdev, 0), VAR_0);
}
