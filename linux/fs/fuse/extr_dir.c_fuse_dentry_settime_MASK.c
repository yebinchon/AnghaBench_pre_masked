
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fuse_conn {scalar_t__ delete_stale; } ;
struct dentry {int d_flags; int d_lock; int d_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,int ) ;
 struct fuse_conn* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dentry *VAR_1, u64 VAR_2)
{
 struct fuse_conn *VAR_3 = FUNC_1(VAR_1->d_sb);
 bool VAR_4 = !VAR_2 && VAR_3->delete_stale;




 if ((!VAR_4 && (VAR_1->d_flags & VAR_0)) ||
     (VAR_4 && !(VAR_1->d_flags & VAR_0))) {
  FUNC_2(&VAR_1->d_lock);
  if (!VAR_4)
   VAR_1->d_flags &= ~VAR_0;
  else
   VAR_1->d_flags |= VAR_0;
  FUNC_3(&VAR_1->d_lock);
 }

 FUNC_0(VAR_1, VAR_2);
}
