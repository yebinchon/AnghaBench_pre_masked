
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_iloc {int * bh; } ;
typedef int handle_t ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct ext4_iloc*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8(handle_t *VAR_1, struct inode *VAR_2,
    struct ext4_iloc *VAR_3)
{
 int VAR_4;

 if (FUNC_7(FUNC_3(FUNC_1(VAR_2->i_sb))))
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_3->bh, "get_write_access");
  VAR_4 = FUNC_5(VAR_1, VAR_3->bh);
  if (VAR_4) {
   FUNC_2(VAR_3->bh);
   VAR_3->bh = ((void*)0);
  }
 }
 FUNC_6(VAR_2->i_sb, VAR_4);
 return VAR_4;
}
