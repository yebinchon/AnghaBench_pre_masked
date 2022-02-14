
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int i_fsnotify_mask; struct dentry* dentry; } ;
struct name_snapshot {int name; } ;
typedef struct inode {int i_fsnotify_mask; struct dentry* dentry; } const inode ;
struct dentry {int d_flags; struct path const* d_inode; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct path const*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct path const*,int,struct path const*,int ,int *,int ) ;
 int FUNC_4 (struct path const*) ;
 int FUNC_5 (struct name_snapshot*) ;
 int FUNC_6 (struct name_snapshot*,struct dentry*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(const struct path *VAR_5, struct dentry *VAR_6, __u32 VAR_7)
{
 struct dentry *VAR_8;
 struct inode *VAR_9;
 int VAR_10 = 0;

 if (!VAR_6)
  VAR_6 = VAR_5->dentry;

 if (!(VAR_6->d_flags & VAR_1))
  return 0;

 VAR_8 = FUNC_1(VAR_6);
 VAR_9 = VAR_8->d_inode;

 if (FUNC_7(!FUNC_4(VAR_9))) {
  FUNC_0(VAR_9);
 } else if (VAR_9->i_fsnotify_mask & VAR_7 & VAR_0) {
  struct name_snapshot VAR_11;



  VAR_7 |= VAR_4;

  FUNC_6(&VAR_11, VAR_6);
  if (VAR_5)
   VAR_10 = FUNC_3(VAR_9, VAR_7, VAR_5, VAR_3,
           &VAR_11.name, 0);
  else
   VAR_10 = FUNC_3(VAR_9, VAR_7, VAR_6->d_inode, VAR_2,
           &VAR_11.name, 0);
  FUNC_5(&VAR_11);
 }

 FUNC_2(VAR_8);

 return VAR_10;
}
