
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ctl_table; struct ctl_dir* parent; } ;
struct ctl_dir {TYPE_2__ header; } ;
struct ctl_table_set {struct ctl_dir dir; } ;
struct TYPE_3__ {char* procname; } ;


 scalar_t__ FUNC_0 (struct ctl_dir*) ;
 struct ctl_dir* FUNC_1 (struct ctl_dir*,char const*,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static struct ctl_dir *FUNC_3(struct ctl_table_set *VAR_0, struct ctl_dir *VAR_1)
{
 struct ctl_dir *VAR_2;
 const char *VAR_3;
 if (!VAR_1->header.parent)
  return &VAR_0->dir;
 VAR_2 = FUNC_3(VAR_0, VAR_1->header.parent);
 if (FUNC_0(VAR_2))
  return VAR_2;
 VAR_3 = VAR_1->header.ctl_table[0].procname;
 return FUNC_1(VAR_2, VAR_3, FUNC_2(VAR_3));
}
