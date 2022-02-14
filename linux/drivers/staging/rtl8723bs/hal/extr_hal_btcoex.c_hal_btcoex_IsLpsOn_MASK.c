
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adapter {int dummy; } ;
struct TYPE_3__ {scalar_t__ bBtLpsOn; scalar_t__ bBtDisabled; } ;
struct TYPE_4__ {TYPE_1__ btInfo; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct adapter*) ;

bool FUNC_1(struct adapter *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return 0;

 if (VAR_0.btInfo.bBtDisabled)
  return 0;

 if (VAR_0.btInfo.bBtLpsOn)
  return 1;

 return 0;
}
