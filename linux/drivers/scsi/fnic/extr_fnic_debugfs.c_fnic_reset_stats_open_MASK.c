
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_debug_info {int i_private; } ;
struct inode {int i_private; } ;
struct file {struct stats_debug_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stats_debug_info* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 struct stats_debug_info *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct stats_debug_info), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->i_private = VAR_2->i_private;

 VAR_3->private_data = VAR_4;

 return 0;
}
