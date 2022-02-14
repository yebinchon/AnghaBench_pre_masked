
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct solo_dev {int pdev; scalar_t__ reg_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct solo_dev *VAR_1, int VAR_2,
      u32 VAR_3)
{
 u16 VAR_4;

 FUNC_1(VAR_3, VAR_1->reg_base + VAR_2);
 FUNC_0(VAR_1->pdev, VAR_0, &VAR_4);
}
