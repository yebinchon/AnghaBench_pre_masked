
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct TYPE_2__ {int s_mount_opt; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_1)
{
 if (!FUNC_1(VAR_1->i_mode))
  return 0;
 if (FUNC_0(VAR_1->i_sb)->s_mount_opt & VAR_0)
  return 0;
 return 1;
}
