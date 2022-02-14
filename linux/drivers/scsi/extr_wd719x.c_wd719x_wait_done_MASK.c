
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wd719x {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct wd719x*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct wd719x *VAR_7, int VAR_8)
{
 u8 VAR_9;

 while (VAR_8 > 0) {
  VAR_9 = FUNC_2(VAR_7, VAR_2);
  if (VAR_9)
   break;
  VAR_8--;
  FUNC_1(1);
 }

 if (VAR_8 <= 0) {
  FUNC_0(&VAR_7->pdev->dev, "direct command timed out\n");
  return -VAR_1;
 }

 if (VAR_9 != VAR_4) {
  u8 VAR_10 = FUNC_2(VAR_7, VAR_3);

  if (VAR_10 == VAR_6)
   return 0;

  if (VAR_10 == VAR_5)
   return 0;
  FUNC_0(&VAR_7->pdev->dev, "direct command failed, status 0x%02x, SUE 0x%02x\n",
   VAR_9, VAR_10);
  return -VAR_0;
 }

 return 0;
}
