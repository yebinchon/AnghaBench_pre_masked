
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct omfs_sb_info {int s_mirrors; } ;
struct omfs_header {int dummy; } ;
struct omfs_extent_entry {int e_blocks; int e_cluster; } ;
struct omfs_extent {struct omfs_extent_entry e_entry; int e_next; int e_extent_count; } ;
struct inode {scalar_t__ i_ino; scalar_t__ i_size; int i_sb; } ;
struct buffer_head {char* b_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct omfs_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_7 (struct omfs_sb_info*,struct omfs_header*,scalar_t__) ;
 int FUNC_8 (struct buffer_head*,int) ;
 int FUNC_9 (struct omfs_sb_info*,size_t) ;

int FUNC_10(struct inode *VAR_3)
{
 struct omfs_sb_info *VAR_4 = FUNC_0(VAR_3->i_sb);
 struct omfs_extent *VAR_5;
 struct omfs_extent_entry *VAR_6;
 struct buffer_head *VAR_7;
 u64 VAR_8, VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;




 VAR_8 = VAR_3->i_ino;


 VAR_12 = -VAR_0;
 if (VAR_3->i_size != 0)
  goto out;

 VAR_7 = FUNC_5(VAR_3->i_sb, VAR_8);
 if (!VAR_7)
  goto out;

 VAR_5 = (struct omfs_extent *)(&VAR_7->b_data[VAR_2]);
 VAR_11 = FUNC_9(VAR_4, VAR_2);

 for (;;) {

  if (FUNC_7(VAR_4, (struct omfs_header *) VAR_7->b_data, VAR_8))
   goto out_brelse;

  VAR_10 = FUNC_1(VAR_5->e_extent_count);

  if (VAR_10 > VAR_11)
   goto out_brelse;

  VAR_9 = VAR_8;
  VAR_8 = FUNC_2(VAR_5->e_next);
  VAR_6 = &VAR_5->e_entry;


  for (; VAR_10 > 1; VAR_10--) {
   u64 VAR_13, VAR_14;
   VAR_13 = FUNC_2(VAR_6->e_cluster);
   VAR_14 = FUNC_2(VAR_6->e_blocks);

   FUNC_6(VAR_3->i_sb, VAR_13, (int) VAR_14);
   VAR_6++;
  }
  FUNC_8(VAR_7, (char *) VAR_5 - VAR_7->b_data);
  FUNC_4(VAR_7);
  FUNC_3(VAR_7);

  if (VAR_9 != VAR_3->i_ino)
   FUNC_6(VAR_3->i_sb, VAR_9, VAR_4->s_mirrors);

  if (VAR_8 == ~0)
   break;

  VAR_7 = FUNC_5(VAR_3->i_sb, VAR_8);
  if (!VAR_7)
   goto out;
  VAR_5 = (struct omfs_extent *) (&VAR_7->b_data[VAR_1]);
  VAR_11 = FUNC_9(VAR_4, VAR_1);
 }
 VAR_12 = 0;
out:
 return VAR_12;
out_brelse:
 FUNC_3(VAR_7);
 return VAR_12;
}
