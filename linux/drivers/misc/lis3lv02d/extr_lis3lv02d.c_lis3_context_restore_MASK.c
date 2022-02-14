
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int regs_size; int * reg_cache; int * regs; int (* write ) (struct lis3lv02d*,int ,int ) ;scalar_t__ regs_stored; } ;


 int FUNC_0 (struct lis3lv02d*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct lis3lv02d *VAR_0)
{
 int VAR_1;
 if (VAR_0->regs_stored)
  for (VAR_1 = 0; VAR_1 < VAR_0->regs_size; VAR_1++)
   VAR_0->write(VAR_0, VAR_0->regs[VAR_1], VAR_0->reg_cache[VAR_1]);
}
