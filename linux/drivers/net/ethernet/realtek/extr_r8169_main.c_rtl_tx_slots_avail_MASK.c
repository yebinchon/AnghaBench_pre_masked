
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {unsigned int dirty_tx; unsigned int cur_tx; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct rtl8169_private *VAR_1,
          unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1->dirty_tx + VAR_0 - VAR_1->cur_tx;


 return VAR_3 > VAR_2;
}
