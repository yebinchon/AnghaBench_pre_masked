
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int root; } ;
struct TYPE_4__ {TYPE_1__ header; } ;
struct ctl_table_set {TYPE_2__ dir; } ;
struct ctl_table {char* procname; int mode; } ;
struct ctl_node {int dummy; } ;
struct ctl_dir {int header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,struct ctl_table_set*,struct ctl_node*,struct ctl_table*) ;
 struct ctl_dir* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static struct ctl_dir *FUNC_3(struct ctl_table_set *VAR_4,
          const char *VAR_5, int VAR_6)
{
 struct ctl_table *VAR_7;
 struct ctl_dir *VAR_8;
 struct ctl_node *VAR_9;
 char *VAR_10;

 VAR_8 = FUNC_1(sizeof(*VAR_8) + sizeof(struct ctl_node) +
        sizeof(struct ctl_table)*2 + VAR_6 + 1,
        VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = (struct ctl_node *)(VAR_8 + 1);
 VAR_7 = (struct ctl_table *)(VAR_9 + 1);
 VAR_10 = (char *)(VAR_7 + 2);
 FUNC_2(VAR_10, VAR_5, VAR_6);
 VAR_10[VAR_6] = '\0';
 VAR_7[0].procname = VAR_10;
 VAR_7[0].mode = VAR_1|VAR_2|VAR_3;
 FUNC_0(&VAR_8->header, VAR_4->dir.header.root, VAR_4, VAR_9, VAR_7);

 return VAR_8;
}
