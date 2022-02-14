
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dbi_base; struct device* dev; } ;
struct dra7xx_pcie {int link_gen; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct dra7xx_pcie*,int ) ;
 int FUNC_2 (struct dra7xx_pcie*,int ,int) ;
 scalar_t__ FUNC_3 (struct dw_pcie*) ;
 int FUNC_4 (int,int,int*) ;
 int FUNC_5 (int,int,int) ;
 struct dra7xx_pcie* FUNC_6 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_7(struct dw_pcie *VAR_7)
{
 struct dra7xx_pcie *VAR_8 = FUNC_6(VAR_7);
 struct device *VAR_9 = VAR_7->dev;
 u32 VAR_10;
 u32 VAR_11 = VAR_0;

 if (FUNC_3(VAR_7)) {
  FUNC_0(VAR_9, "link is already up\n");
  return 0;
 }

 if (VAR_8->link_gen == 1) {
  FUNC_4(VAR_7->dbi_base + VAR_11 + VAR_3,
        4, &VAR_10);
  if ((VAR_10 & VAR_4) != VAR_5) {
   VAR_10 &= ~((u32)VAR_4);
   VAR_10 |= VAR_5;
   FUNC_5(VAR_7->dbi_base + VAR_11 +
          VAR_3, 4, VAR_10);
  }

  FUNC_4(VAR_7->dbi_base + VAR_11 + VAR_6,
        2, &VAR_10);
  if ((VAR_10 & VAR_4) != VAR_5) {
   VAR_10 &= ~((u32)VAR_4);
   VAR_10 |= VAR_5;
   FUNC_5(VAR_7->dbi_base + VAR_11 +
          VAR_6, 2, VAR_10);
  }
 }

 VAR_10 = FUNC_1(VAR_8, VAR_2);
 VAR_10 |= VAR_1;
 FUNC_2(VAR_8, VAR_2, VAR_10);

 return 0;
}
