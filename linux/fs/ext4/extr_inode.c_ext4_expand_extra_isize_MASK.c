
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_iloc {int bh; } ;
typedef int handle_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,unsigned int,struct ext4_iloc*,int *,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (struct inode*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct inode*,struct ext4_iloc*) ;
 scalar_t__ FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*,int*) ;
 int FUNC_12 (struct inode*,int*) ;

int FUNC_13(struct inode *VAR_3,
       unsigned int VAR_4,
       struct ext4_iloc *VAR_5)
{
 handle_t *VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_10(VAR_3, VAR_2)) {
  FUNC_5(VAR_5->bh);
  return -VAR_0;
 }

 VAR_6 = FUNC_7(VAR_3, VAR_1,
        FUNC_1(VAR_3->i_sb));
 if (FUNC_2(VAR_6)) {
  VAR_8 = FUNC_3(VAR_6);
  FUNC_5(VAR_5->bh);
  return VAR_8;
 }

 FUNC_11(VAR_3, &VAR_7);

 FUNC_0(VAR_5->bh, "get_write_access");
 VAR_8 = FUNC_6(VAR_6, VAR_5->bh);
 if (VAR_8) {
  FUNC_5(VAR_5->bh);
  goto out_stop;
 }

 VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5,
       VAR_6, &VAR_7);

 VAR_9 = FUNC_9(VAR_6, VAR_3, VAR_5);
 if (!VAR_8)
  VAR_8 = VAR_9;

 FUNC_12(VAR_3, &VAR_7);
out_stop:
 FUNC_8(VAR_6);
 return VAR_8;
}
