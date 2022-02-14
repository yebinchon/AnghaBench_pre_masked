
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_path {scalar_t__ id; int dev; } ;
struct lcd_regs {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct mmp_path*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static inline struct lcd_regs *FUNC_3(struct mmp_path *VAR_3)
{
 if (VAR_3->id == VAR_1)
  return (struct lcd_regs *)(FUNC_1(VAR_3) + 0xc0);
 else if (VAR_3->id == VAR_2)
  return (struct lcd_regs *)FUNC_1(VAR_3);
 else if (VAR_3->id == VAR_0)
  return (struct lcd_regs *)(FUNC_1(VAR_3) + 0x200);
 else {
  FUNC_2(VAR_3->dev, "path id %d invalid\n", VAR_3->id);
  FUNC_0(1);
  return ((void*)0);
 }
}
