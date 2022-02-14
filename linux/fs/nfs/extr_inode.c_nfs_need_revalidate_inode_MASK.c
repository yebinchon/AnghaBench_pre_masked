
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int cache_validity; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;

__attribute__((used)) static bool FUNC_2(struct inode *VAR_2)
{
 if (FUNC_0(VAR_2)->cache_validity &
   (VAR_0|VAR_1))
  return 1;
 if (FUNC_1(VAR_2))
  return 1;
 return 0;
}
