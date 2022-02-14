
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {long nat_cnt; long dirty_nat_cnt; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;

__attribute__((used)) static unsigned long FUNC_1(struct f2fs_sb_info *VAR_0)
{
 long VAR_1 = FUNC_0(VAR_0)->nat_cnt - FUNC_0(VAR_0)->dirty_nat_cnt;

 return VAR_1 > 0 ? VAR_1 : 0;
}
