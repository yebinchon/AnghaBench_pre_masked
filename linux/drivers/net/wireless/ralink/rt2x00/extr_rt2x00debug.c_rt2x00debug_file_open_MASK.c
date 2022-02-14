
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00debug_intf {TYPE_1__* debug; } ;
struct inode {struct rt2x00debug_intf* i_private; } ;
struct file {struct rt2x00debug_intf* private_data; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct rt2x00debug_intf *VAR_3 = VAR_1->i_private;

 VAR_2->private_data = VAR_1->i_private;

 if (!FUNC_0(VAR_3->debug->owner))
  return -VAR_0;

 return 0;
}
