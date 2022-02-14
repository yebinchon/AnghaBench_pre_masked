
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ethqsets; } ;
struct adapter {int flags; TYPE_1__ sge; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct adapter *VAR_2)
{
 return FUNC_0(VAR_2->sge.ethqsets, VAR_1) + 1 +
  ((VAR_2->flags & VAR_0) != 0);
}
