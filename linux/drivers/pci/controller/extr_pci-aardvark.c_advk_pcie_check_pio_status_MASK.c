
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct advk_pcie {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct advk_pcie*,int ) ;
 int FUNC_1 (struct device*,char*,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct advk_pcie *VAR_5)
{
 struct device *VAR_6 = &VAR_5->pdev->dev;
 u32 VAR_7;
 unsigned int VAR_8;
 char *VAR_9, *VAR_10;

 VAR_7 = FUNC_0(VAR_5, VAR_4);
 VAR_8 = (VAR_7 & VAR_1) >>
  VAR_2;

 if (!VAR_8)
  return;

 switch (VAR_8) {
 case 128:
  VAR_9 = "UR";
  break;
 case 129:
  VAR_9 = "CRS";
  break;
 case 130:
  VAR_9 = "CA";
  break;
 default:
  VAR_9 = "Unknown";
  break;
 }

 if (VAR_7 & VAR_3)
  VAR_10 = "Non-posted";
 else
  VAR_10 = "Posted";

 FUNC_1(VAR_6, "%s PIO Response Status: %s, %#x @ %#x\n",
  VAR_10, VAR_9, VAR_7, FUNC_0(VAR_5, VAR_0));
}
