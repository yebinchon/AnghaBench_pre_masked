
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short base; scalar_t__ mode; } ;
typedef TYPE_1__ imm_struct ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned short,int) ;

__attribute__((used)) static inline int FUNC_1(imm_struct *VAR_3, int VAR_4)
{
 unsigned short VAR_5 = VAR_3->base;

 FUNC_0(VAR_5, 0xe0);
 FUNC_0(VAR_5, 0x30);

 if ((VAR_3->mode == VAR_2) ||
     (VAR_3->mode == VAR_0) ||
     (VAR_3->mode == VAR_1))
  return FUNC_0(VAR_5, 0x28);
 return FUNC_0(VAR_5, 0xe0);
}
