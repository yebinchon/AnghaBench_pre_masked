
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int s_mount_opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_3, unsigned long VAR_4)
{
 FUNC_0(VAR_3)->s_mount_opt &= ~((1 << VAR_0) |
      (1 << VAR_1) |
      (1 << VAR_2));
 FUNC_0(VAR_3)->s_mount_opt |= (1 << VAR_4);
}
