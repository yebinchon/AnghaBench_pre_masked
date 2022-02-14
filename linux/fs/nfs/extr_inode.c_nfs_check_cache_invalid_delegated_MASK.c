
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int cache_validity; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct inode *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = FUNC_1(FUNC_0(VAR_2)->cache_validity);


 if (VAR_3 == VAR_1 &&
     !(VAR_4 & VAR_0))
  return 0;
 return (VAR_4 & VAR_3) != 0;
}
