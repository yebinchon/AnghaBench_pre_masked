
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct csiphy_device {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct csiphy_device *VAR_1,
       struct device *VAR_2)
{
 u32 VAR_3;

 FUNC_4(VAR_0,
        VAR_1->base + FUNC_0(6));

 VAR_3 = FUNC_3(VAR_1->base +
       FUNC_1(12));
 VAR_3 |= FUNC_3(VAR_1->base +
       FUNC_1(13)) << 8;
 VAR_3 |= FUNC_3(VAR_1->base +
       FUNC_1(14)) << 16;
 VAR_3 |= FUNC_3(VAR_1->base +
       FUNC_1(15)) << 24;

 FUNC_2(VAR_2, "CSIPHY 3PH HW Version = 0x%08x\n", VAR_3);
}
