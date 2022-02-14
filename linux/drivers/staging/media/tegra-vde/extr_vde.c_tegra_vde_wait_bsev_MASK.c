
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device* parent; } ;
struct tegra_vde {scalar_t__ bsev; TYPE_1__ miscdev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct tegra_vde *VAR_3, bool VAR_4)
{
 struct device *VAR_5 = VAR_3->miscdev.parent;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3->bsev + VAR_2, VAR_6,
      !(VAR_6 & FUNC_0(2)), 1, 100);
 if (VAR_7) {
  FUNC_1(VAR_5, "BSEV unknown bit timeout\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_3->bsev + VAR_2, VAR_6,
      (VAR_6 & VAR_1), 1, 100);
 if (VAR_7) {
  FUNC_1(VAR_5, "BSEV ICMDQUE flush timeout\n");
  return VAR_7;
 }

 if (!VAR_4)
  return 0;

 VAR_7 = FUNC_2(VAR_3->bsev + VAR_2, VAR_6,
      !(VAR_6 & VAR_0), 1, 100);
 if (VAR_7) {
  FUNC_1(VAR_5, "BSEV DMA timeout\n");
  return VAR_7;
 }

 return 0;
}
