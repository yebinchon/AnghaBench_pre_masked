
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int i_inline_size; scalar_t__ i_inline_off; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0)
{
 if (FUNC_0(VAR_0)->i_inline_off)
  return FUNC_0(VAR_0)->i_inline_size;

 return 0;
}
