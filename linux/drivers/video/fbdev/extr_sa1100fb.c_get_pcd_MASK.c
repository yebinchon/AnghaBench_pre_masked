
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100fb_info {int clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct sa1100fb_info *VAR_0,
  unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0->clk) / 100 / 1000;

 VAR_2 *= VAR_1;
 VAR_2 /= 10000000;

 return VAR_2 + 1;
}
