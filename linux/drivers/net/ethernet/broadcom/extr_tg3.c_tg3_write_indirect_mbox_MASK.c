
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {scalar_t__ grc_local_ctrl; int pdev; int indirect_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_10, u32 VAR_11, u32 VAR_12)
{
 unsigned long VAR_13;

 if (VAR_11 == (VAR_2 + VAR_8)) {
  FUNC_0(VAR_10->pdev, VAR_4 +
           VAR_8, VAR_12);
  return;
 }
 if (VAR_11 == VAR_9) {
  FUNC_0(VAR_10->pdev, VAR_7 +
           VAR_8, VAR_12);
  return;
 }

 FUNC_1(&VAR_10->indirect_lock, VAR_13);
 FUNC_0(VAR_10->pdev, VAR_5, VAR_11 + 0x5600);
 FUNC_0(VAR_10->pdev, VAR_6, VAR_12);
 FUNC_2(&VAR_10->indirect_lock, VAR_13);




 if ((VAR_11 == (VAR_1 + VAR_8)) &&
     (VAR_12 == 0x1)) {
  FUNC_0(VAR_10->pdev, VAR_3,
           VAR_10->grc_local_ctrl|VAR_0);
 }
}
