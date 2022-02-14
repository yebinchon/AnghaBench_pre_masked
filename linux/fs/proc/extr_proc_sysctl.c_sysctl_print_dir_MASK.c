
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ctl_table; struct ctl_dir* parent; } ;
struct ctl_dir {TYPE_2__ header; } ;
struct TYPE_3__ {int procname; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct ctl_dir *VAR_0)
{
 if (VAR_0->header.parent)
  FUNC_1(VAR_0->header.parent);
 FUNC_0("%s/", VAR_0->header.ctl_table[0].procname);
}
