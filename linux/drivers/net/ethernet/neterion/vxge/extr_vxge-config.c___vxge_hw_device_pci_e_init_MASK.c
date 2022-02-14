
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct __vxge_hw_device {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct __vxge_hw_device *VAR_1)
{
 u16 VAR_2 = 0;


 FUNC_0(VAR_1->pdev, VAR_0, &VAR_2);
 VAR_2 |= 0x140;
 FUNC_2(VAR_1->pdev, VAR_0, VAR_2);

 FUNC_1(VAR_1->pdev);
}
