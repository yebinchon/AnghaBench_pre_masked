
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tid_t ;
struct jfs_inode_info {int commit_mutex; } ;
struct inode {int i_sb; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct inode*,char const*,void const*,size_t,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,struct inode**,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, const char *VAR_1,
      const void *VAR_2, size_t VAR_3, int VAR_4)
{
 struct jfs_inode_info *VAR_5 = FUNC_0(VAR_0);
 tid_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_0->i_sb, 0);
 FUNC_2(&VAR_5->commit_mutex);
 VAR_7 = FUNC_1(VAR_6, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_7)
  VAR_7 = FUNC_5(VAR_6, 1, &VAR_0, 0);
 FUNC_6(VAR_6);
 FUNC_3(&VAR_5->commit_mutex);

 return VAR_7;
}
