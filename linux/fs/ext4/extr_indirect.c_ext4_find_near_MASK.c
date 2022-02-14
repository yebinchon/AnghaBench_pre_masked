
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_inode_info {scalar_t__* i_data; } ;
typedef int ext4_fsblk_t ;
typedef scalar_t__ __le32 ;
struct TYPE_5__ {TYPE_1__* bh; scalar_t__* p; } ;
struct TYPE_4__ {int b_blocknr; scalar_t__ b_data; } ;
typedef TYPE_2__ Indirect ;


 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static ext4_fsblk_t FUNC_3(struct inode *VAR_0, Indirect *VAR_1)
{
 struct ext4_inode_info *VAR_2 = FUNC_0(VAR_0);
 __le32 *VAR_3 = VAR_1->bh ? (__le32 *) VAR_1->bh->b_data : VAR_2->i_data;
 __le32 *VAR_4;


 for (VAR_4 = VAR_1->p - 1; VAR_4 >= VAR_3; VAR_4--) {
  if (*VAR_4)
   return FUNC_2(*VAR_4);
 }


 if (VAR_1->bh)
  return VAR_1->bh->b_blocknr;





 return FUNC_1(VAR_0);
}
