
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; int i_atime; int i_mode; int i_gid; int i_uid; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct inode *VAR_0, struct inode *VAR_1)
{
 VAR_1->i_uid = VAR_0->i_uid;
 VAR_1->i_gid = VAR_0->i_gid;
 VAR_1->i_mode = VAR_0->i_mode;
 VAR_1->i_atime = VAR_0->i_atime;
 VAR_1->i_mtime = VAR_0->i_mtime;
 VAR_1->i_ctime = VAR_0->i_ctime;
 FUNC_1(VAR_1, FUNC_0(VAR_0));
}
