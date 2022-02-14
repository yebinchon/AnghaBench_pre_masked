
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_pos; scalar_t__ i_attrs; scalar_t__ i_logstart; scalar_t__ i_start; scalar_t__ mmu_private; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_0)
{

 FUNC_0(VAR_0)->mmu_private = 0;
 FUNC_0(VAR_0)->i_start = 0;
 FUNC_0(VAR_0)->i_logstart = 0;
 FUNC_0(VAR_0)->i_attrs = 0;
 FUNC_0(VAR_0)->i_pos = 0;
}
