
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_nhi {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tb_nhi *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;

 if (!VAR_6)
  goto clear;

 VAR_7 = VAR_4 + FUNC_0(VAR_6);
 do {
  FUNC_2(VAR_5->pdev, VAR_1, &VAR_8);
  if (VAR_8 & VAR_2)
   goto clear;
  FUNC_1(100);
 } while (FUNC_4(VAR_4, VAR_7));

 return -VAR_0;

clear:

 FUNC_3(VAR_5->pdev, VAR_3, 0);
 return 0;
}
