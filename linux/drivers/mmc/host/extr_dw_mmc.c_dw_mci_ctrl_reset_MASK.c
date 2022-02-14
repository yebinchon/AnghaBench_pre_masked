
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mci {int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dw_mci*,int ) ;
 int FUNC_2 (struct dw_mci*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static bool FUNC_4(struct dw_mci *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_5 |= VAR_4;
 FUNC_2(VAR_3, VAR_0, VAR_5);


 if (FUNC_3(VAR_3->regs + VAR_1, VAR_5,
          !(VAR_5 & VAR_4),
          1, 500 * VAR_2)) {
  FUNC_0(VAR_3->dev,
   "Timeout resetting block (ctrl reset %#x)\n",
   VAR_5 & VAR_4);
  return 0;
 }

 return 1;
}
