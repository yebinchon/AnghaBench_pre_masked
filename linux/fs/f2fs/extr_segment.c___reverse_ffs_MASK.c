
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_0)
{
 int VAR_1 = 0;







 if ((VAR_0 & 0xffff0000) == 0)
  VAR_1 += 16;
 else
  VAR_0 >>= 16;

 if ((VAR_0 & 0xff00) == 0)
  VAR_1 += 8;
 else
  VAR_0 >>= 8;

 if ((VAR_0 & 0xf0) == 0)
  VAR_1 += 4;
 else
  VAR_0 >>= 4;

 if ((VAR_0 & 0xc) == 0)
  VAR_1 += 2;
 else
  VAR_0 >>= 2;

 if ((VAR_0 & 0x2) == 0)
  VAR_1 += 1;
 return VAR_1;
}
