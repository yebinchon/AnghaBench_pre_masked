
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct csiphy_device {scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct csiphy_device *VAR_4 = VAR_3;
 u8 VAR_5;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  u8 VAR_6 = FUNC_2(VAR_4->base +
           FUNC_1(VAR_5));
  FUNC_3(VAR_6, VAR_4->base +
          FUNC_0(VAR_5));
  FUNC_3(0x1, VAR_4->base + VAR_0);
  FUNC_3(0x0, VAR_4->base + VAR_0);
  FUNC_3(0x0, VAR_4->base +
          FUNC_0(VAR_5));
 }

 return VAR_1;
}
