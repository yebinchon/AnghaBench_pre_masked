
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct csiphy_device {scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct csiphy_device *VAR_3 = VAR_2;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 11; VAR_4++) {
  int VAR_5 = VAR_4 + 22;
  u8 VAR_6 = FUNC_2(VAR_3->base +
           FUNC_1(VAR_4));

  FUNC_3(VAR_6, VAR_3->base +
        FUNC_0(VAR_5));
 }

 FUNC_3(0x1, VAR_3->base + FUNC_0(10));
 FUNC_3(0x0, VAR_3->base + FUNC_0(10));

 for (VAR_4 = 22; VAR_4 < 33; VAR_4++)
  FUNC_3(0x0, VAR_3->base +
        FUNC_0(VAR_4));

 return VAR_0;
}
