
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; int i_mapping; int i_mode; int i_ino; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,scalar_t__) ;
 int FUNC_11 (struct inode*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_12 (struct inode*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_3, loff_t VAR_4)
{
 int VAR_5 = 0;

 FUNC_5("ENTER: ino %lu, i_size: %llu, old_i_size: %llu\n",
      VAR_3->i_ino, (unsigned long long)VAR_4,
      (unsigned long long)FUNC_8(VAR_3));

 if (!(FUNC_4(VAR_3->i_mode) || FUNC_2(VAR_3->i_mode) ||
       FUNC_3(VAR_3->i_mode)))
  return -VAR_0;
 if (FUNC_0(VAR_3) || FUNC_1(VAR_3))
  return -VAR_1;

 VAR_5 = FUNC_11(VAR_3, VAR_4);

 if (VAR_5)
  goto out;

 FUNC_6(VAR_3->i_mapping, VAR_4, VAR_2);

 FUNC_10(VAR_3, VAR_4);

 FUNC_12(VAR_3);
 VAR_3->i_mtime = VAR_3->i_ctime = FUNC_7(VAR_3);
 FUNC_9(VAR_3);
out:
 FUNC_5("EXIT: err %d\n", VAR_5);
 return VAR_5;
}
