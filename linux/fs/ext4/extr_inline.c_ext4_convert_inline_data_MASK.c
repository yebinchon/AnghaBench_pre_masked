
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_iloc {int * bh; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_5 (struct inode*,struct ext4_iloc*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int * FUNC_7 (struct inode*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,int*) ;
 int FUNC_10 (struct inode*,int*) ;
 int FUNC_11 (struct inode*) ;

int FUNC_12(struct inode *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 handle_t *VAR_6;
 struct ext4_iloc VAR_7;

 if (!FUNC_6(VAR_2)) {
  FUNC_3(VAR_2, VAR_1);
  return 0;
 }

 VAR_4 = FUNC_11(VAR_2);

 VAR_7.bh = ((void*)0);
 VAR_3 = FUNC_5(VAR_2, &VAR_7);
 if (VAR_3)
  return VAR_3;

 VAR_6 = FUNC_7(VAR_2, VAR_0, VAR_4);
 if (FUNC_0(VAR_6)) {
  VAR_3 = FUNC_1(VAR_6);
  goto out_free;
 }

 FUNC_9(VAR_2, &VAR_5);
 if (FUNC_6(VAR_2))
  VAR_3 = FUNC_4(VAR_6, VAR_2, &VAR_7);
 FUNC_10(VAR_2, &VAR_5);
 FUNC_8(VAR_6);
out_free:
 FUNC_2(VAR_7.bh);
 return VAR_3;
}
