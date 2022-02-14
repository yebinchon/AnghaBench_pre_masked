
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_alloc_type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 size_t FUNC_1 (struct inode*) ;

__attribute__((used)) static inline size_t FUNC_2(struct inode *VAR_1)
{
 if (FUNC_0(VAR_1)->i_alloc_type == VAR_0)
  return FUNC_1(VAR_1);
 else
  return 0;
}
