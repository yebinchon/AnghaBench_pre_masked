
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset; } ;
union REG_DCTL {void* reg; TYPE_1__ bits; } ;
struct fjes_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;

int FUNC_3(struct fjes_hw *VAR_3)
{
 union REG_DCTL VAR_4;
 int VAR_5;

 VAR_4.reg = 0;
 VAR_4.bits.reset = 1;
 FUNC_2(VAR_2, VAR_4.reg);

 VAR_5 = VAR_1 * 1000;
 VAR_4.reg = FUNC_1(VAR_2);
 while ((VAR_4.bits.reset == 1) && (VAR_5 > 0)) {
  FUNC_0(1000);
  VAR_4.reg = FUNC_1(VAR_2);
  VAR_5 -= 1000;
 }

 return VAR_5 > 0 ? 0 : -VAR_0;
}
