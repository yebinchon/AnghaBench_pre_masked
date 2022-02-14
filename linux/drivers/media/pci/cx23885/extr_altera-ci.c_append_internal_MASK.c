
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_internal {int dummy; } ;
struct fpga_inode {struct fpga_inode* next_inode; struct fpga_internal* internal; } ;


 int VAR_0 ;
 struct fpga_inode* VAR_1 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static struct fpga_inode *FUNC_1(struct fpga_internal *VAR_2)
{
 struct fpga_inode *VAR_3 = VAR_1;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(sizeof(struct fpga_inode), VAR_0);
  VAR_1 = VAR_3;
 } else {
  while (VAR_3->next_inode != ((void*)0))
   VAR_3 = VAR_3->next_inode;

  VAR_3->next_inode =
    FUNC_0(sizeof(struct fpga_inode), VAR_0);
  if (VAR_3->next_inode != ((void*)0))
   VAR_3 = VAR_3->next_inode;
  else
   VAR_3 = ((void*)0);
 }

 if (VAR_3 != ((void*)0)) {
  VAR_3->internal = VAR_2;
  VAR_3->next_inode = ((void*)0);
 }

 return VAR_3;
}
