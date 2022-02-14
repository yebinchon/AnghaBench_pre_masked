
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmic_wrapper {int dev; TYPE_1__* master; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int caps; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct pmic_wrapper*,int ) ;
 int FUNC_3 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 struct pmic_wrapper *VAR_9 = VAR_7;

 VAR_8 = FUNC_2(VAR_9, VAR_5);
 FUNC_1(VAR_9->dev, "unexpected interrupt int=0x%x\n", VAR_8);
 FUNC_3(VAR_9, 0xffffffff, VAR_4);

 if (FUNC_0(VAR_9->master->caps, VAR_1)) {
  VAR_8 = FUNC_2(VAR_9, VAR_3);
  FUNC_1(VAR_9->dev, "unexpected interrupt int1=0x%x\n", VAR_8);
  FUNC_3(VAR_9, 0xffffffff, VAR_2);
 }

 return VAR_0;
}
