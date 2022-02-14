
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct orangefs_object_kref {int fs_id; int khandle; } ;
struct inode {int i_state; unsigned long i_ino; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *,int ,unsigned long,unsigned long) ;
 struct inode* FUNC_2 (struct super_block*,unsigned long,int ,int ,struct orangefs_object_kref*) ;
 int FUNC_3 (struct inode*) ;
 unsigned long FUNC_4 (struct orangefs_object_kref*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct inode*) ;

struct inode *FUNC_8(struct super_block *VAR_6,
  struct orangefs_object_kref *VAR_7)
{
 struct inode *VAR_8 = ((void*)0);
 unsigned long VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_7);
 VAR_8 = FUNC_2(VAR_6,
   VAR_9,
   VAR_5,
   VAR_4,
   VAR_7);

 if (!VAR_8)
  return FUNC_0(-VAR_0);

 if (!(VAR_8->i_state & VAR_2))
  return VAR_8;

 VAR_10 = FUNC_6(VAR_8, VAR_3);
 if (VAR_10) {
  FUNC_3(VAR_8);
  return FUNC_0(VAR_10);
 }

 VAR_8->i_ino = VAR_9;
 FUNC_5(VAR_8);
 FUNC_7(VAR_8);

 FUNC_1(VAR_1,
       "iget handle %pU, fsid %d hash %ld i_ino %lu\n",
       &VAR_7->khandle,
       VAR_7->fs_id,
       VAR_9,
       VAR_8->i_ino);

 return VAR_8;
}
