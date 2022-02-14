
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gtk_cipher; int ptk_cipher; } ;
struct rsi_common {TYPE_1__ secinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(struct rsi_common *VAR_2)
{
 if (((VAR_2->secinfo.gtk_cipher == VAR_0) ||
      (VAR_2->secinfo.gtk_cipher == VAR_1)) &&
     (!VAR_2->secinfo.ptk_cipher))
  return 1;
 else
  return 0;
}
