
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gadget_info {int dummy; } ;
struct config_item {int dummy; } ;
struct TYPE_4__ {int ci_parent; } ;
struct TYPE_5__ {TYPE_1__ cg_item; } ;
struct TYPE_6__ {TYPE_2__ group; } ;


 struct gadget_info* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static inline struct gadget_info *FUNC_2(
  struct config_item *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0)->group.cg_item.ci_parent);
}
