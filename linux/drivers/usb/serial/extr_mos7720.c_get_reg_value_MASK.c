
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mos_regs { ____Placeholder_mos_regs } mos_regs ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline __u16 FUNC_0(enum mos_regs VAR_2,
      unsigned int VAR_3)
{
 if (VAR_2 >= VAR_1)
  return 0x0000;

 else if (VAR_2 >= VAR_0)
  return 0x0100;

 else
  return (VAR_3 + 2) << 8;
}
