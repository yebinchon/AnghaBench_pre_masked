
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef int u64 ;
struct omfs_sb_info {int s_sys_blocksize; int s_mirrors; } ;
struct inode {int i_size; int * i_fop; int * i_op; int i_ctime; int i_mtime; int i_atime; TYPE_1__* i_mapping; int i_ino; int i_sb; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 struct omfs_sb_info* FUNC_1 (int ) ;

 int VAR_1 ;

 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int *,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int *,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

struct inode *FUNC_11(struct inode *VAR_7, umode_t VAR_8)
{
 struct inode *VAR_9;
 u64 VAR_10;
 int VAR_11;
 int VAR_12;
 struct omfs_sb_info *VAR_13 = FUNC_1(VAR_7->i_sb);

 VAR_9 = FUNC_9(VAR_7->i_sb);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_10(VAR_7->i_sb, VAR_13->s_mirrors, VAR_13->s_mirrors,
   &VAR_10, &VAR_12);
 if (VAR_11)
  goto fail;

 VAR_9->i_ino = VAR_10;
 FUNC_4(VAR_9, ((void*)0), VAR_8);
 VAR_9->i_mapping->a_ops = &VAR_2;

 VAR_9->i_atime = VAR_9->i_mtime = VAR_9->i_ctime = FUNC_2(VAR_9);
 switch (VAR_8 & VAR_1) {
 case 129:
  VAR_9->i_op = &VAR_3;
  VAR_9->i_fop = &VAR_4;
  VAR_9->i_size = VAR_13->s_sys_blocksize;
  FUNC_3(VAR_9);
  break;
 case 128:
  VAR_9->i_op = &VAR_5;
  VAR_9->i_fop = &VAR_6;
  VAR_9->i_size = 0;
  break;
 }

 FUNC_5(VAR_9);
 FUNC_8(VAR_9);
 return VAR_9;
fail:
 FUNC_7(VAR_9);
 FUNC_6(VAR_9);
 return FUNC_0(VAR_11);
}
