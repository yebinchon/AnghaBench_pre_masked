
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_info {TYPE_1__* dbg; } ;
struct TYPE_4__ {scalar_t__ chk_index; } ;
struct TYPE_3__ {scalar_t__ chk_index; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct ubifs_info *VAR_1)
{
 return !!(VAR_0.chk_index || VAR_1->dbg->chk_index);
}
