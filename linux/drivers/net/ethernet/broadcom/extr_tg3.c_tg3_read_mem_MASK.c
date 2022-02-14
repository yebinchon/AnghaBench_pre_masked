
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {int indirect_lock; int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct tg3*) ;
 scalar_t__ FUNC_5 (struct tg3*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct tg3 *VAR_6, u32 VAR_7, u32 *VAR_8)
{
 unsigned long VAR_9;

 if (FUNC_4(VAR_6) == VAR_0 &&
     (VAR_7 >= VAR_1) && (VAR_7 < VAR_2)) {
  *VAR_8 = 0;
  return;
 }

 FUNC_2(&VAR_6->indirect_lock, VAR_9);
 if (FUNC_5(VAR_6, VAR_3)) {
  FUNC_1(VAR_6->pdev, VAR_4, VAR_7);
  FUNC_0(VAR_6->pdev, VAR_5, VAR_8);


  FUNC_1(VAR_6->pdev, VAR_4, 0);
 } else {
  FUNC_7(VAR_4, VAR_7);
  *VAR_8 = FUNC_6(VAR_5);


  FUNC_7(VAR_4, 0);
 }
 FUNC_3(&VAR_6->indirect_lock, VAR_9);
}
