
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct migrate_struct {scalar_t__ first_pblock; scalar_t__ last_pblock; scalar_t__ last_block; scalar_t__ curr_block; scalar_t__ first_block; } ;
struct inode {int dummy; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int FUNC_0 (int *,struct inode*,struct migrate_struct*) ;

__attribute__((used)) static int FUNC_1(handle_t *VAR_0, struct inode *VAR_1,
          ext4_fsblk_t VAR_2, struct migrate_struct *VAR_3)
{
 int VAR_4;



 if (VAR_3->first_pblock &&
  (VAR_3->last_pblock+1 == VAR_2) &&
  (VAR_3->last_block+1 == VAR_3->curr_block)) {
  VAR_3->last_pblock = VAR_2;
  VAR_3->last_block = VAR_3->curr_block;
  VAR_3->curr_block++;
  return 0;
 }



 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);
 VAR_3->first_pblock = VAR_3->last_pblock = VAR_2;
 VAR_3->first_block = VAR_3->last_block = VAR_3->curr_block;
 VAR_3->curr_block++;
 return VAR_4;
}
