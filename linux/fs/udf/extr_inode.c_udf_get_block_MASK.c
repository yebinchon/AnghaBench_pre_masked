
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_inode_info {scalar_t__ i_next_alloc_block; int i_data_sem; int i_next_alloc_goal; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct inode*,scalar_t__,int*,int*) ;
 int FUNC_3 (struct buffer_head*,int ,scalar_t__) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct inode*,scalar_t__) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, sector_t VAR_2,
    struct buffer_head *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 sector_t VAR_7 = 0;
 struct udf_inode_info *VAR_8;

 if (!VAR_4) {
  VAR_7 = FUNC_5(VAR_1, VAR_2);
  if (VAR_7)
   FUNC_3(VAR_3, VAR_1->i_sb, VAR_7);
  return 0;
 }

 VAR_5 = -VAR_0;
 VAR_6 = 0;
 VAR_8 = FUNC_0(VAR_1);

 FUNC_1(&VAR_8->i_data_sem);
 if (VAR_2 == VAR_8->i_next_alloc_block + 1) {
  VAR_8->i_next_alloc_block++;
  VAR_8->i_next_alloc_goal++;
 }

 FUNC_6(VAR_1);
 VAR_7 = FUNC_2(VAR_1, VAR_2, &VAR_5, &VAR_6);
 if (!VAR_7)
  goto abort;

 if (VAR_6)
  FUNC_4(VAR_3);
 FUNC_3(VAR_3, VAR_1->i_sb, VAR_7);

abort:
 FUNC_7(&VAR_8->i_data_sem);
 return VAR_5;
}
