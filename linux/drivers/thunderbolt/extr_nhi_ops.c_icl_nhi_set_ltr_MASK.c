
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_nhi {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tb_nhi *VAR_2)
{
 u32 VAR_3, VAR_4;

 FUNC_0(VAR_2->pdev, VAR_1, &VAR_3);
 VAR_3 &= 0xffff;

 VAR_4 = VAR_3 << 16 | VAR_3;
 FUNC_1(VAR_2->pdev, VAR_0, VAR_4);
}
