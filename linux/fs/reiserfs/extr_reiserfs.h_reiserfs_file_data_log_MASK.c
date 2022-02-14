
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {int i_flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_1)
{
 if (FUNC_1(VAR_1->i_sb) ||
     (FUNC_0(VAR_1)->i_flags & VAR_0))
  return 1;
 return 0;
}
