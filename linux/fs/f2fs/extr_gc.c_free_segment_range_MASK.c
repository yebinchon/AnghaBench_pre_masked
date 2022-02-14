
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_inode_list {int iroot; int ilist; } ;
struct f2fs_sb_info {int sb; int gc_mutex; scalar_t__ segs_per_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int,unsigned int,unsigned int) ;
 int FUNC_4 (struct f2fs_sb_info*,unsigned int,struct gc_inode_list*,int ) ;
 int FUNC_5 (struct f2fs_sb_info*,int) ;
 int FUNC_6 (struct f2fs_sb_info*,char*,unsigned int) ;
 int FUNC_7 (int ,int) ;
 unsigned int FUNC_8 (int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (struct f2fs_sb_info*,unsigned int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct gc_inode_list*) ;

__attribute__((used)) static int FUNC_13(struct f2fs_sb_info *VAR_5, unsigned int VAR_6,
       unsigned int VAR_7)
{
 int VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11 = 0;


 for (VAR_8 = VAR_0; VAR_8 < VAR_4; VAR_8++)
  FUNC_3(VAR_5, VAR_8, VAR_6, VAR_7);


 for (VAR_9 = VAR_6; VAR_9 <= VAR_7; VAR_9 += VAR_5->segs_per_sec) {
  struct gc_inode_list VAR_12 = {
   .ilist = FUNC_1(VAR_12.ilist),
   .iroot = FUNC_2(VAR_12.iroot, VAR_3),
  };

  FUNC_10(&VAR_5->gc_mutex);
  FUNC_4(VAR_5, VAR_9, &VAR_12, VAR_2);
  FUNC_11(&VAR_5->gc_mutex);
  FUNC_12(&VAR_12);

  if (FUNC_9(VAR_5, VAR_9, 1))
   return -VAR_1;
 }

 VAR_11 = FUNC_7(VAR_5->sb, 1);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_8(FUNC_0(VAR_5), VAR_7 + 1, VAR_6);
 if (VAR_10 <= VAR_7) {
  FUNC_6(VAR_5, "segno %u should be free but still inuse!",
    VAR_10);
  FUNC_5(VAR_5, 1);
 }
 return VAR_11;
}
