
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_2__ {scalar_t__ lowerdata; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 struct inode* FUNC_3 (struct inode*) ;

struct inode *FUNC_4(struct inode *VAR_0)
{
 if (FUNC_2(!FUNC_1(VAR_0->i_mode)))
  return ((void*)0);

 return FUNC_0(VAR_0)->lowerdata ?: FUNC_3(VAR_0);
}
