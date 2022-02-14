
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ptp_dte {scalar_t__ regs; int ptp_clk; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct ptp_dte* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct ptp_dte *VAR_2 = FUNC_0(VAR_1);
 u8 VAR_3;

 FUNC_1(VAR_2->ptp_clk);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(0, VAR_2->regs + (VAR_3 * sizeof(u32)));

 return 0;
}
