
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int i_state; } ;
struct TYPE_2__ {int i_location; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,unsigned long) ;
 int FUNC_4 (int *,struct kernel_lb_addr*,int) ;
 unsigned long FUNC_5 (struct super_block*,struct kernel_lb_addr*,int ) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct inode*) ;

struct inode *FUNC_8(struct super_block *VAR_2, struct kernel_lb_addr *VAR_3,
    bool VAR_4)
{
 unsigned long VAR_5 = FUNC_5(VAR_2, VAR_3, 0);
 struct inode *VAR_6 = FUNC_3(VAR_2, VAR_5);
 int VAR_7;

 if (!VAR_6)
  return FUNC_0(-VAR_0);

 if (!(VAR_6->i_state & VAR_1))
  return VAR_6;

 FUNC_4(&FUNC_1(VAR_6)->i_location, VAR_3, sizeof(struct kernel_lb_addr));
 VAR_7 = FUNC_6(VAR_6, VAR_4);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6);
  return FUNC_0(VAR_7);
 }
 FUNC_7(VAR_6);

 return VAR_6;
}
