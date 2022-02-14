
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_fmt {int color; } ;






__attribute__((used)) static inline int FUNC_0(struct fimc_fmt *VAR_0)
{
 switch (VAR_0->color) {
 case 130: return 0x0f;
 case 129: return 0x01;
 case 128: return 0xff;
 default: return 0;
 };
}
