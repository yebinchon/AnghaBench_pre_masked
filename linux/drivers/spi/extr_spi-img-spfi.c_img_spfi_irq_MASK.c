
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_spfi {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct img_spfi*,int ) ;
 int FUNC_2 (struct img_spfi*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct img_spfi *VAR_7 = (struct img_spfi *)VAR_6;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_4);
 if (VAR_8 & VAR_3) {
  FUNC_2(VAR_7, VAR_3, VAR_2);
  FUNC_0(VAR_7->dev, "Illegal access interrupt");
  return VAR_0;
 }

 return VAR_1;
}
