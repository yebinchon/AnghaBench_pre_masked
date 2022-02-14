
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int pdev; int pf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,void*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct adapter *VAR_1, u32 VAR_2, u32 VAR_3,
         void *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_1->pf, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_0(VAR_1->pdev, VAR_5, VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
