
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msdos_dir_entry {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int loff_t ;
struct TYPE_2__ {int dir_per_block; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int*,struct buffer_head**,struct msdos_dir_entry**) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0, loff_t *VAR_1,
    struct buffer_head **VAR_2,
    struct msdos_dir_entry **VAR_3)
{

 if (*VAR_2 && *VAR_3 &&
    (*VAR_3 - (struct msdos_dir_entry *)(*VAR_2)->b_data) <
    FUNC_0(VAR_0->i_sb)->dir_per_block - 1) {
  *VAR_1 += sizeof(struct msdos_dir_entry);
  (*VAR_3)++;
  return 0;
 }
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
