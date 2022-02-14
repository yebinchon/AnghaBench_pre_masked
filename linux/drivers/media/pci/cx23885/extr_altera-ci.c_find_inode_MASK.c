
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_inode {struct fpga_inode* next_inode; TYPE_1__* internal; } ;
struct TYPE_2__ {void* dev; } ;


 struct fpga_inode* VAR_0 ;

__attribute__((used)) static struct fpga_inode *FUNC_0(void *VAR_1)
{
 struct fpga_inode *VAR_2 = VAR_0;

 if (VAR_2 == ((void*)0))
  return VAR_2;




 while ((VAR_2 != ((void*)0)) &&
    (VAR_2->internal->dev != VAR_1))
  VAR_2 = VAR_2->next_inode;

 return VAR_2;
}
