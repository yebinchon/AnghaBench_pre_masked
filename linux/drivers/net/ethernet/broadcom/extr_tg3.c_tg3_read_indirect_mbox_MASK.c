
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {int indirect_lock; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_4(struct tg3 *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_2->indirect_lock, VAR_4);
 FUNC_1(VAR_2->pdev, VAR_0, VAR_3 + 0x5600);
 FUNC_0(VAR_2->pdev, VAR_1, &VAR_5);
 FUNC_3(&VAR_2->indirect_lock, VAR_4);
 return VAR_5;
}
