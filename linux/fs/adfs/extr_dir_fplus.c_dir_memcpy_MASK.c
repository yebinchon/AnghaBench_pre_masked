
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize_bits; int s_blocksize; } ;
struct adfs_dir {TYPE_1__** bh_fplus; struct super_block* sb; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int FUNC_0 (char*,scalar_t__,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct adfs_dir *VAR_0, unsigned int VAR_1, void *VAR_2, int VAR_3)
{
 struct super_block *VAR_4 = VAR_0->sb;
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_1 >> VAR_4->s_blocksize_bits;
 VAR_1 &= VAR_4->s_blocksize - 1;

 VAR_6 = VAR_4->s_blocksize - VAR_1;

 if (VAR_6 >= VAR_3)
  FUNC_0(VAR_2, VAR_0->bh_fplus[VAR_5]->b_data + VAR_1, VAR_3);
 else {
  char *VAR_8 = (char *)VAR_2;

  VAR_7 = VAR_3 - VAR_6;

  FUNC_0(VAR_8,
   VAR_0->bh_fplus[VAR_5]->b_data + VAR_1,
   VAR_6);

  FUNC_0(VAR_8 + VAR_6,
   VAR_0->bh_fplus[VAR_5 + 1]->b_data,
   VAR_7);
 }
}
