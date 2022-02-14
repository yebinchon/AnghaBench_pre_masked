
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct bfad_debug_info* private_data; } ;
struct bfad_debug_info {scalar_t__ debug_buffer; } ;


 int FUNC_0 (struct bfad_debug_info*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct bfad_debug_info *VAR_2 = VAR_1->private_data;

 if (!VAR_2)
  return 0;

 if (VAR_2->debug_buffer)
  FUNC_1(VAR_2->debug_buffer);

 VAR_1->private_data = ((void*)0);
 FUNC_0(VAR_2);
 return 0;
}
