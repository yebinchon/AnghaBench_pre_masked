
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {int jinode; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(handle_t *VAR_0,
  struct inode *VAR_1, loff_t VAR_2, loff_t VAR_3)
{
 if (FUNC_1(VAR_0))
  return FUNC_2(VAR_0,
    FUNC_0(VAR_1)->jinode, VAR_2, VAR_3);
 return 0;
}
