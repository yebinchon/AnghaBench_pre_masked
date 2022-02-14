
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_blocks; int i_size; void* i_ctime; void* i_mtime; void* i_atime; int i_ino; TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct hostfs_stat {int mode; int blocks; int size; int ctime; int mtime; int atime; int gid; int uid; int nlink; int ino; int min; int maj; } ;
typedef int dev_t ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;





 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,int,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (char*,struct hostfs_stat*,int) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_8, char *VAR_9)
{
 dev_t VAR_10;
 struct hostfs_stat VAR_11;
 int VAR_12 = FUNC_5(VAR_9, &VAR_11, -1);
 if (VAR_12)
  return VAR_12;


 VAR_10 = FUNC_0(VAR_11.maj, VAR_11.min);

 switch (VAR_11.mode & VAR_1) {
 case 130:
  VAR_8->i_op = &VAR_7;
  break;
 case 132:
  VAR_8->i_op = &VAR_4;
  VAR_8->i_fop = &VAR_3;
  break;
 case 133:
 case 134:
 case 131:
 case 128:
  FUNC_3(VAR_8, VAR_11.mode & VAR_1, VAR_10);
  VAR_8->i_op = &VAR_6;
  break;
 case 129:
  VAR_8->i_op = &VAR_6;
  VAR_8->i_fop = &VAR_5;
  VAR_8->i_mapping->a_ops = &VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_8->i_ino = VAR_11.ino;
 VAR_8->i_mode = VAR_11.mode;
 FUNC_4(VAR_8, VAR_11.nlink);
 FUNC_2(VAR_8, VAR_11.uid);
 FUNC_1(VAR_8, VAR_11.gid);
 VAR_8->i_atime = FUNC_6(VAR_11.atime);
 VAR_8->i_mtime = FUNC_6(VAR_11.mtime);
 VAR_8->i_ctime = FUNC_6(VAR_11.ctime);
 VAR_8->i_size = VAR_11.size;
 VAR_8->i_blocks = VAR_11.blocks;
 return 0;
}
