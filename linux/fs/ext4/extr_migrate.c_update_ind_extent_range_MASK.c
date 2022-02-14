
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct migrate_struct {int curr_block; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {int s_blocksize; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *,struct inode*,int ,struct migrate_struct*) ;

__attribute__((used)) static int FUNC_6(handle_t *VAR_0, struct inode *VAR_1,
       ext4_fsblk_t VAR_2,
       struct migrate_struct *VAR_3)
{
 struct buffer_head *VAR_4;
 __le32 *VAR_5;
 int VAR_6, VAR_7 = 0;
 unsigned long VAR_8 = VAR_1->i_sb->s_blocksize >> 2;

 VAR_4 = FUNC_2(VAR_1->i_sb, VAR_2, 0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = (__le32 *)VAR_4->b_data;
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  if (VAR_5[VAR_6]) {
   VAR_7 = FUNC_5(VAR_0, VAR_1,
      FUNC_3(VAR_5[VAR_6]), VAR_3);
   if (VAR_7)
    break;
  } else {
   VAR_3->curr_block++;
  }
 }
 FUNC_4(VAR_4);
 return VAR_7;

}
