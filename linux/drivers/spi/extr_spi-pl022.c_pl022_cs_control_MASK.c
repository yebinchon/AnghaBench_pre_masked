
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pl022 {TYPE_2__* cur_chip; int cur_cs; TYPE_1__* vendor; } ;
struct TYPE_4__ {int (* cs_control ) (int ) ;} ;
struct TYPE_3__ {scalar_t__ internal_cs_ctrl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pl022*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pl022 *VAR_0, u32 VAR_1)
{
 if (VAR_0->vendor->internal_cs_ctrl)
  FUNC_2(VAR_0, VAR_1);
 else if (FUNC_0(VAR_0->cur_cs))
  FUNC_1(VAR_0->cur_cs, VAR_1);
 else
  VAR_0->cur_chip->cs_control(VAR_1);
}
