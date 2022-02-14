
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtsx_pcr {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* full_on ) (struct rtsx_pcr*) ;} ;


 int FUNC_0 (struct rtsx_pcr*) ;
 int FUNC_1 (struct rtsx_pcr*) ;

__attribute__((used)) static void FUNC_2(struct rtsx_pcr *VAR_0)
{
 if (VAR_0->ops->full_on)
  VAR_0->ops->full_on(VAR_0);
 else
  FUNC_0(VAR_0);
}
