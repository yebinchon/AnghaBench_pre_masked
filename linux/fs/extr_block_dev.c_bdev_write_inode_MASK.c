
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_lock; } ;
struct block_device {struct inode* bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block_device*,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,int) ;

__attribute__((used)) static void FUNC_5(struct block_device *VAR_2)
{
 struct inode *VAR_3 = VAR_2->bd_inode;
 int VAR_4;

 FUNC_2(&VAR_3->i_lock);
 while (VAR_3->i_state & VAR_1) {
  FUNC_3(&VAR_3->i_lock);
  VAR_4 = FUNC_4(VAR_3, 1);
  if (VAR_4) {
   char VAR_5[VAR_0];
   FUNC_1("VFS: Dirty inode writeback failed "
         "for block device %s (err=%d).\n",
         FUNC_0(VAR_2, VAR_5), VAR_4);
  }
  FUNC_2(&VAR_3->i_lock);
 }
 FUNC_3(&VAR_3->i_lock);
}
