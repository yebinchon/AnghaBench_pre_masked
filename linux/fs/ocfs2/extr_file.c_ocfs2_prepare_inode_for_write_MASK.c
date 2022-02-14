
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_sb; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;
struct TYPE_6__ {int ip_blkno; } ;
struct TYPE_5__ {int s_clustersize_bits; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int,size_t) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct inode*,struct buffer_head**,int,int,int,int) ;
 int FUNC_7 (struct inode*,struct buffer_head**,int,int) ;
 int FUNC_8 (struct inode*,struct buffer_head*,int,size_t) ;
 int FUNC_9 (struct inode*,struct buffer_head*,int,int,int ) ;
 int FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct dentry*) ;
 int FUNC_12 (int ,int,size_t,int) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_2,
      loff_t VAR_3, size_t VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0;
 struct dentry *VAR_10 = VAR_2->f_path.dentry;
 struct inode *VAR_11 = FUNC_2(VAR_10);
 struct buffer_head *VAR_12 = ((void*)0);
 u32 VAR_13;
 u32 VAR_14;





 for(;;) {
  VAR_6 = FUNC_6(VAR_11,
             &VAR_12,
             VAR_7,
             VAR_8,
             VAR_9,
             VAR_5);
  if (VAR_6 < 0) {
   if (VAR_6 != -VAR_0)
    FUNC_3(VAR_6);
   goto out;
  }





  if (!VAR_5 && !VAR_8) {
   VAR_8 = 1;

   VAR_6 = FUNC_8(VAR_11, VAR_12, VAR_3, VAR_4);
   if (VAR_6 < 0) {
    if (VAR_6 != -VAR_0)
     FUNC_3(VAR_6);
    goto out_unlock;
   }
  }
  if (FUNC_11(VAR_10)) {
   if (VAR_7 == 0) {
    FUNC_7(VAR_11,
           &VAR_12,
           VAR_7,
           VAR_9);
    VAR_7 = 1;
    continue;
   }

   VAR_6 = FUNC_10(VAR_11);
   if (VAR_6 < 0) {
    FUNC_3(VAR_6);
    goto out_unlock;
   }
  }

  VAR_6 = FUNC_4(VAR_11, VAR_3, VAR_4);
  if (VAR_6 == 1) {
   FUNC_7(VAR_11,
          &VAR_12,
          VAR_7,
          VAR_9);
   VAR_6 = FUNC_6(VAR_11,
              &VAR_12,
              VAR_7,
              VAR_8,
              1,
              VAR_5);
   VAR_9 = 1;
   if (VAR_6 < 0) {
    if (VAR_6 != -VAR_0)
     FUNC_3(VAR_6);
    goto out;
   }

   VAR_13 = VAR_3 >> FUNC_1(VAR_11->i_sb)->s_clustersize_bits;
   VAR_14 =
    FUNC_5(VAR_11->i_sb, VAR_3 + VAR_4) - VAR_13;
   VAR_6 = FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_1);
  }

  if (VAR_6 < 0) {
   if (VAR_6 != -VAR_0)
    FUNC_3(VAR_6);
   goto out_unlock;
  }

  break;
 }

out_unlock:
 FUNC_12(FUNC_0(VAR_11)->ip_blkno,
         VAR_3, VAR_4, VAR_5);

 FUNC_7(VAR_11,
        &VAR_12,
        VAR_7,
        VAR_9);

out:
 return VAR_6;
}
