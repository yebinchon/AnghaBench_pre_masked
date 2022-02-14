
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {long* nid_cnt; } ;


 size_t VAR_0 ;
 long VAR_1 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;

__attribute__((used)) static unsigned long FUNC_1(struct f2fs_sb_info *VAR_2)
{
 long VAR_3 = FUNC_0(VAR_2)->nid_cnt[VAR_0] - VAR_1;

 return VAR_3 > 0 ? VAR_3 : 0;
}
