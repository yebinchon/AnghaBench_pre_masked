
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int rev; scalar_t__ gen; } ;
struct TYPE_4__ {TYPE_1__ sb_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 () ;

bool FUNC_1(void)
{
 u8 VAR_3;

 FUNC_0();
 VAR_3 = VAR_2.sb_type.rev;

 return VAR_2.sb_type.gen == VAR_0 ||
   (VAR_2.sb_type.gen == VAR_1 &&
    VAR_3 >= 0x3a && VAR_3 <= 0x3b);
}
