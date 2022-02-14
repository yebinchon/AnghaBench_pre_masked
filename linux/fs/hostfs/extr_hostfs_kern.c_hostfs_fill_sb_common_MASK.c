
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_blocksize_bits; char* s_fs_info; int * s_root; int s_maxbytes; int * s_d_op; int * s_op; int s_magic; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct inode*) ;
 char* FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (scalar_t__,int ) ;
 struct inode* FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct inode*,char*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_7, void *VAR_8, int VAR_9)
{
 struct inode *VAR_10;
 char *VAR_11, *VAR_12 = VAR_8;
 int VAR_13;

 VAR_7->s_blocksize = 1024;
 VAR_7->s_blocksize_bits = 10;
 VAR_7->s_magic = VAR_2;
 VAR_7->s_op = &VAR_4;
 VAR_7->s_d_op = &VAR_6;
 VAR_7->s_maxbytes = VAR_3;


 if (VAR_12 == ((void*)0))
  VAR_12 = "";

 VAR_13 = -VAR_0;
 VAR_7->s_fs_info = VAR_11 =
  FUNC_7(FUNC_11(VAR_5) + FUNC_11(VAR_12) + 2, VAR_1);
 if (VAR_11 == ((void*)0))
  goto out;

 FUNC_10(VAR_11, "%s/%s", VAR_5, VAR_12);

 VAR_10 = FUNC_8(VAR_7);
 if (!VAR_10)
  goto out;

 VAR_13 = FUNC_9(VAR_10, VAR_11);
 if (VAR_13)
  goto out_put;

 if (FUNC_2(VAR_10->i_mode)) {
  char *VAR_14 = FUNC_4(VAR_11);
  if (FUNC_0(VAR_14)) {
   VAR_13 = FUNC_1(VAR_14);
   goto out_put;
  }
  VAR_13 = FUNC_9(VAR_10, VAR_14);
  FUNC_6(VAR_14);
  if (VAR_13)
   goto out_put;
 }

 VAR_13 = -VAR_0;
 VAR_7->s_root = FUNC_3(VAR_10);
 if (VAR_7->s_root == ((void*)0))
  goto out;

 return 0;

out_put:
 FUNC_5(VAR_10);
out:
 return VAR_13;
}
