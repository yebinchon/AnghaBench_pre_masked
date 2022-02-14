
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ctl_table_set {int dummy; } ;
struct ctl_table_header {int root; int ctl_table; int parent; struct ctl_table_set* set; } ;
struct TYPE_4__ {int nreg; } ;
struct ctl_dir {TYPE_2__ header; } ;
struct TYPE_3__ {struct ctl_table_set default_set; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ctl_dir*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct ctl_dir*,int ,int ) ;
 int FUNC_3 (struct ctl_dir*,struct ctl_table_header*) ;
 int FUNC_4 (struct ctl_table_header*) ;
 struct ctl_table_header* FUNC_5 (struct ctl_dir*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct ctl_dir* FUNC_8 (struct ctl_table_set*,int ) ;

__attribute__((used)) static int FUNC_9(struct ctl_table_header *VAR_3)
{
 struct ctl_table_set *VAR_4 = &VAR_2.default_set;
 struct ctl_dir *VAR_5 = ((void*)0);
 struct ctl_table_header *VAR_6;
 int VAR_7;

 if (VAR_3->set == VAR_4)
  return 0;

 VAR_5 = FUNC_8(VAR_4, VAR_3->parent);
 if (FUNC_0(VAR_5))
  return 0;

 if (FUNC_2(VAR_5, VAR_3->ctl_table, VAR_3->root))
  return 0;

 VAR_5->header.nreg++;
 FUNC_7(&VAR_1);

 VAR_6 = FUNC_5(VAR_5, VAR_3->ctl_table, VAR_3->root);

 FUNC_6(&VAR_1);
 VAR_7 = -VAR_0;
 if (!VAR_6)
  goto out;

 VAR_7 = 0;
 if (FUNC_2(VAR_5, VAR_3->ctl_table, VAR_3->root)) {
  FUNC_4(VAR_6);
  goto out;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_6);
 if (VAR_7)
  FUNC_4(VAR_6);
out:
 FUNC_1(&VAR_5->header);
 return VAR_7;
}
