
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_1(struct inode *VAR_2)
{
 if (FUNC_0(VAR_2)->flags & VAR_0 ||
     FUNC_0(VAR_2)->flags & VAR_1)
  return 0;
 return 1;
}
