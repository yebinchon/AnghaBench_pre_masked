
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eisa_device {scalar_t__ base_addr; } ;


 unsigned short FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct eisa_device *VAR_0)
{
 unsigned short VAR_1 = FUNC_0(VAR_0->base_addr + 0xc86);
 unsigned int VAR_2 = ((VAR_1 >> 8) & 0x07) + 10;
 if ((VAR_2 == 13) || (VAR_2 > 15))
  return 0;
 return VAR_2;
}
