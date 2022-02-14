
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gem {int swrst_base; scalar_t__ phy_type; int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gem*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct gem *VAR_7)
{
 int VAR_8;
 u32 VAR_9;


 FUNC_4(0xffffffff, VAR_7->regs + VAR_0);


 FUNC_4(VAR_7->swrst_base | VAR_3 | VAR_2,
        VAR_7->regs + VAR_1);

 VAR_8 = VAR_4;

 do {
  FUNC_3(20);
  VAR_9 = FUNC_2(VAR_7->regs + VAR_1);
  if (VAR_8-- <= 0)
   break;
 } while (VAR_9 & (VAR_3 | VAR_2));

 if (VAR_8 < 0)
  FUNC_1(VAR_7->dev, "SW reset is ghetto\n");

 if (VAR_7->phy_type == VAR_6 || VAR_7->phy_type == VAR_5)
  FUNC_0(VAR_7);
}
