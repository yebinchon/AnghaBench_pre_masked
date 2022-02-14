
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wd719x {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct wd719x*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct wd719x *VAR_4)
{
 int VAR_5 = 0;

 do {
  if (FUNC_2(VAR_4, VAR_1) == VAR_2)
   return 0;
  FUNC_1(1);
 } while (VAR_5++ < VAR_3);

 FUNC_0(&VAR_4->pdev->dev, "command register is not ready: 0x%02x\n",
  FUNC_2(VAR_4, VAR_1));

 return -VAR_0;
}
