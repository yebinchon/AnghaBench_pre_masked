
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_internal {int dev; } ;
struct fpga_inode {struct fpga_inode* next_inode; } ;


 struct fpga_inode* FUNC_0 (int ) ;
 struct fpga_inode* VAR_0 ;
 int FUNC_1 (struct fpga_inode*) ;

__attribute__((used)) static void FUNC_2(struct fpga_internal *VAR_1)
{
 struct fpga_inode *VAR_2 = VAR_0;
 struct fpga_inode *VAR_3 = FUNC_0(VAR_1->dev);

 if (VAR_3 != ((void*)0)) {
  if (VAR_3 == VAR_0) {
   VAR_0 = VAR_3->next_inode;
  } else {
   while (VAR_2->next_inode != VAR_3)
    VAR_2 = VAR_2->next_inode;

   if (VAR_3->next_inode == ((void*)0))
    VAR_2->next_inode = ((void*)0);
   else
    VAR_2->next_inode =
     VAR_2->next_inode->next_inode;
  }

  FUNC_1(VAR_3);
 }
}
