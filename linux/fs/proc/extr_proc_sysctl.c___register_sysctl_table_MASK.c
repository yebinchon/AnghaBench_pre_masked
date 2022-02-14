
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nreg; struct ctl_table_root* root; } ;
struct ctl_dir {TYPE_1__ header; } ;
struct ctl_table_set {struct ctl_dir dir; } ;
struct ctl_table_root {int dummy; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {scalar_t__ procname; } ;
struct ctl_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ctl_dir*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 struct ctl_dir* FUNC_3 (struct ctl_dir*,char const*,int) ;
 int FUNC_4 (struct ctl_table_header*,struct ctl_table_root*,struct ctl_table_set*,struct ctl_node*,struct ctl_table*) ;
 scalar_t__ FUNC_5 (struct ctl_dir*,struct ctl_table_header*) ;
 int FUNC_6 (struct ctl_table_header*) ;
 struct ctl_table_header* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (char const*,char) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,struct ctl_table*) ;
 int VAR_1 ;

struct ctl_table_header *FUNC_13(
 struct ctl_table_set *VAR_2,
 const char *VAR_3, struct ctl_table *VAR_4)
{
 struct ctl_table_root *VAR_5 = VAR_2->dir.header.root;
 struct ctl_table_header *VAR_6;
 const char *VAR_7, *VAR_8;
 struct ctl_dir *VAR_9;
 struct ctl_table *VAR_10;
 struct ctl_node *VAR_11;
 int VAR_12 = 0;

 for (VAR_10 = VAR_4; VAR_10->procname; VAR_10++)
  VAR_12++;

 VAR_6 = FUNC_7(sizeof(struct ctl_table_header) +
    sizeof(struct ctl_node)*VAR_12, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_11 = (struct ctl_node *)(VAR_6 + 1);
 FUNC_4(VAR_6, VAR_5, VAR_2, VAR_11, VAR_4);
 if (FUNC_12(VAR_3, VAR_4))
  goto fail;

 FUNC_8(&VAR_1);
 VAR_9 = &VAR_2->dir;

 VAR_9->header.nreg++;
 FUNC_9(&VAR_1);


 for (VAR_7 = VAR_3; VAR_7; VAR_7 = VAR_8) {
  int VAR_13;
  VAR_8 = FUNC_10(VAR_7, '/');
  if (VAR_8) {
   VAR_13 = VAR_8 - VAR_7;
   VAR_8++;
  } else {
   VAR_13 = FUNC_11(VAR_7);
  }
  if (VAR_13 == 0)
   continue;

  VAR_9 = FUNC_3(VAR_9, VAR_7, VAR_13);
  if (FUNC_0(VAR_9))
   goto fail;
 }

 FUNC_8(&VAR_1);
 if (FUNC_5(VAR_9, VAR_6))
  goto fail_put_dir_locked;

 FUNC_1(&VAR_9->header);
 FUNC_9(&VAR_1);

 return VAR_6;

fail_put_dir_locked:
 FUNC_1(&VAR_9->header);
 FUNC_9(&VAR_1);
fail:
 FUNC_6(VAR_6);
 FUNC_2();
 return ((void*)0);
}
