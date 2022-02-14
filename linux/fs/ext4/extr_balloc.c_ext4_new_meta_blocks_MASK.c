
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_allocation_request {unsigned long len; unsigned int flags; int goal; struct inode* inode; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
typedef int ar ;


 int FUNC_0 (int ,unsigned long) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int *,struct ext4_allocation_request*,int*) ;
 int FUNC_4 (struct ext4_allocation_request*,int ,int) ;

ext4_fsblk_t FUNC_5(handle_t *VAR_1, struct inode *VAR_2,
      ext4_fsblk_t VAR_3, unsigned int VAR_4,
      unsigned long *VAR_5, int *VAR_6)
{
 struct ext4_allocation_request VAR_7;
 ext4_fsblk_t VAR_8;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.inode = VAR_2;
 VAR_7.goal = VAR_3;
 VAR_7.len = VAR_5 ? *VAR_5 : 1;
 VAR_7.flags = VAR_4;

 VAR_8 = FUNC_3(VAR_1, &VAR_7, VAR_6);
 if (VAR_5)
  *VAR_5 = VAR_7.len;




 if (!(*VAR_6) && (VAR_4 & VAR_0)) {
  FUNC_2(VAR_2,
    FUNC_0(FUNC_1(VAR_2->i_sb), VAR_7.len));
 }
 return VAR_8;
}
