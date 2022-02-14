
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct bnad_debug_info* private_data; } ;
struct bnad_debug_info {int buffer_len; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int,int ) ;

__attribute__((used)) static loff_t
FUNC_1(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct bnad_debug_info *VAR_4 = VAR_1->private_data;

 if (!VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4->buffer_len);
}
