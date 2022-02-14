
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_internal {int dummy; } ;
struct fpga_inode {struct fpga_inode* next_inode; struct fpga_internal* internal; } ;


 scalar_t__ FUNC_0 (struct fpga_internal*,void*,int) ;
 struct fpga_inode* VAR_0 ;

__attribute__((used)) static struct fpga_inode *FUNC_1(void *VAR_1)
{
 struct fpga_inode *VAR_2 = VAR_0;
 struct fpga_internal *VAR_3;





 while (VAR_2 != ((void*)0)) {
  if (VAR_2->internal != ((void*)0)) {
   VAR_3 = VAR_2->internal;
   if (FUNC_0(VAR_3, VAR_1, 0))
    break;
   if (FUNC_0(VAR_3, VAR_1, 1))
    break;
  }

  VAR_2 = VAR_2->next_inode;
 }

 return VAR_2;
}
