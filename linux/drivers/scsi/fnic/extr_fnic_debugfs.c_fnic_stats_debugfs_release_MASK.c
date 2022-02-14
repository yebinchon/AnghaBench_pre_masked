
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_debug_info {int debug_buffer; } ;
struct inode {int dummy; } ;
struct file {struct stats_debug_info* private_data; } ;


 int FUNC_0 (struct stats_debug_info*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0,
     struct file *VAR_1)
{
 struct stats_debug_info *VAR_2 = VAR_1->private_data;
 FUNC_1(VAR_2->debug_buffer);
 FUNC_0(VAR_2);
 return 0;
}
