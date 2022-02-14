
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int system_file_mutex; struct inode** global_system_inodes; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 struct inode* FUNC_1 (struct ocfs2_super*,int,int ) ;
 struct inode** FUNC_2 (struct ocfs2_super*,int,int ) ;
 struct inode* FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct inode *FUNC_7(struct ocfs2_super *VAR_0,
       int VAR_1,
       u32 VAR_2)
{
 struct inode *VAR_3 = ((void*)0);
 struct inode **VAR_4 = ((void*)0);


 if (FUNC_4(VAR_1)) {
  VAR_4 = &(VAR_0->global_system_inodes[VAR_1]);
 } else
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);

 FUNC_5(&VAR_0->system_file_mutex);
 if (VAR_4 && ((VAR_3 = *VAR_4) != ((void*)0))) {

  VAR_3 = FUNC_3(VAR_3);
  FUNC_6(&VAR_0->system_file_mutex);
  FUNC_0(!VAR_3);

  return VAR_3;
 }


 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);


 if (VAR_4 && VAR_3) {
  *VAR_4 = FUNC_3(VAR_3);
  FUNC_0(!*VAR_4);
 }
 FUNC_6(&VAR_0->system_file_mutex);
 return VAR_3;
}
