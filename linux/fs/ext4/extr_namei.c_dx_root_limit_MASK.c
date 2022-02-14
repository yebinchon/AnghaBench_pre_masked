
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct dx_tail {int dummy; } ;
struct dx_entry {int dummy; } ;
struct TYPE_2__ {unsigned int s_blocksize; } ;


 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline unsigned FUNC_2(struct inode *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = VAR_0->i_sb->s_blocksize - FUNC_0(1) -
  FUNC_0(2) - VAR_1;

 if (FUNC_1(VAR_0->i_sb))
  VAR_2 -= sizeof(struct dx_tail);
 return VAR_2 / sizeof(struct dx_entry);
}
