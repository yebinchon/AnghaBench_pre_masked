
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501fb_info {scalar_t__ regs; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sm501fb_info *VAR_0,
    unsigned long VAR_1)
{
 unsigned long VAR_2 = 0;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < 256 * 4; VAR_3 += 4) {
  FUNC_0(VAR_2, VAR_0->regs + VAR_1 + VAR_3);
  VAR_2 += 0x010101;
 }
}
