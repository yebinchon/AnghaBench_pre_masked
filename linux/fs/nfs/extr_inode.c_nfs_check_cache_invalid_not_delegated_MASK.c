
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int cache_validity; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static bool FUNC_3(struct inode *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = FUNC_1(FUNC_0(VAR_0)->cache_validity);

 if ((VAR_2 & VAR_1) != 0)
  return 1;
 if (FUNC_2(VAR_0))
  return 1;
 return 0;
}
