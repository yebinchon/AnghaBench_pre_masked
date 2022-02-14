
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct advk_pcie {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct advk_pcie*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct advk_pcie *VAR_5)
{
 struct device *VAR_6 = &VAR_5->pdev->dev;
 unsigned long VAR_7;

 VAR_7 = VAR_4 + FUNC_2(VAR_3);

 while (FUNC_3(VAR_4, VAR_7)) {
  u32 VAR_8, VAR_9;

  VAR_8 = FUNC_0(VAR_5, VAR_2);
  VAR_9 = FUNC_0(VAR_5, VAR_1);
  if (!VAR_8 && VAR_9)
   return 0;
 }

 FUNC_1(VAR_6, "config read/write timed out\n");
 return -VAR_0;
}
