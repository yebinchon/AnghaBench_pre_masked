
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int * FUNC_3 (struct inode*,int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct super_block*,int*) ;
 int FUNC_6 (struct inode*,size_t,int,int*) ;
 int FUNC_7 (int *,struct inode*,int,char const*,void const*,size_t,int) ;

int
FUNC_8(struct inode *VAR_3, int VAR_4, const char *VAR_5,
        const void *VAR_6, size_t VAR_7, int VAR_8)
{
 handle_t *VAR_9;
 struct super_block *VAR_10 = VAR_3->i_sb;
 int VAR_11, VAR_12 = 0;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_3);
 if (VAR_11)
  return VAR_11;

retry:
 VAR_11 = FUNC_6(VAR_3, VAR_7, VAR_8 & VAR_2,
           &VAR_13);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_3(VAR_3, VAR_1, VAR_13);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
 } else {
  int VAR_14;

  VAR_11 = FUNC_7(VAR_9, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7, VAR_8);
  VAR_14 = FUNC_4(VAR_9);
  if (VAR_11 == -VAR_0 &&
      FUNC_5(VAR_10, &VAR_12))
   goto retry;
  if (VAR_11 == 0)
   VAR_11 = VAR_14;
 }

 return VAR_11;
}
