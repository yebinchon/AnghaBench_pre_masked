
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rc {TYPE_1__* dbg; } ;
struct uwb_pal {scalar_t__ name; struct uwb_rc* rc; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ root_d; } ;


 struct dentry* FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

struct dentry *FUNC_1(struct uwb_pal *VAR_1)
{
 struct uwb_rc *VAR_2 = VAR_1->rc;

 if (VAR_0 && VAR_2->dbg && VAR_2->dbg->root_d && VAR_1->name)
  return FUNC_0(VAR_1->name, VAR_2->dbg->root_d);
 return ((void*)0);
}
