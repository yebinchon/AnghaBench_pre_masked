
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rfkill {int dummy; } ;
struct TYPE_2__ {scalar_t__ ec_read_only; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct rfkill*,int) ;
 int FUNC_1 (struct rfkill*,int) ;

__attribute__((used)) static bool FUNC_2(struct rfkill *VAR_1, bool VAR_2)
{
 if (VAR_0->ec_read_only)
  return FUNC_0(VAR_1, VAR_2);
 else
  return FUNC_1(VAR_1, VAR_2);
}
