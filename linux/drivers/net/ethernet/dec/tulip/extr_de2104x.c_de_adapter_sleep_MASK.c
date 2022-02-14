
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct de_private {int pdev; scalar_t__ de21040; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3 (struct de_private *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->de21040)
  return;

 FUNC_0(VAR_0, 0);
 FUNC_1(VAR_3->pdev, VAR_1, &VAR_4);
 VAR_4 |= VAR_2;
 FUNC_2(VAR_3->pdev, VAR_1, VAR_4);
}
