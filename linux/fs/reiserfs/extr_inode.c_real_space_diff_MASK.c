
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_size; TYPE_1__* i_sb; int i_mode; } ;
typedef int loff_t ;
struct TYPE_2__ {int s_blocksize; int s_blocksize_bits; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, int VAR_2)
{
 int VAR_3;
 loff_t VAR_4 = VAR_1->i_sb->s_blocksize;

 if (FUNC_1(VAR_1->i_mode) || FUNC_0(VAR_1->i_mode))
  return VAR_2;
 VAR_3 =
     ((VAR_1->i_size +
       (VAR_4 - 1)) >> VAR_1->i_sb->s_blocksize_bits) * VAR_0 +
     VAR_2;
 return VAR_3;
}
