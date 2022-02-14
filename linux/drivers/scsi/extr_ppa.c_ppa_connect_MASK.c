
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short base; int mode; } ;
typedef TYPE_1__ ppa_struct ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int) ;

__attribute__((used)) static inline void FUNC_2(ppa_struct *VAR_1, int VAR_2)
{
 unsigned short VAR_3 = VAR_1->base;

 FUNC_1(VAR_3, 0);
 FUNC_1(VAR_3, 0x3c);
 FUNC_1(VAR_3, 0x20);
 if ((VAR_2 == VAR_0) && FUNC_0(VAR_1->mode))
  FUNC_1(VAR_3, 0xcf);
 else
  FUNC_1(VAR_3, 0x8f);
}
