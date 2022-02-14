
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctl_table_root {int dummy; } ;
struct ctl_table_header {int nreg; } ;
struct ctl_table {char* procname; int mode; struct ctl_table_root* data; } ;
struct ctl_node {int dummy; } ;
struct TYPE_2__ {int set; int root; } ;
struct ctl_dir {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ctl_table_header*,int ,int ,struct ctl_node*,struct ctl_table*) ;
 struct ctl_table_header* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct ctl_table_header *FUNC_4(struct ctl_dir *VAR_3, struct ctl_table *VAR_4,
 struct ctl_table_root *VAR_5)
{
 struct ctl_table *VAR_6, *VAR_7, *VAR_8;
 struct ctl_table_header *VAR_9;
 struct ctl_node *VAR_10;
 char *VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = 0;
 VAR_12 = 0;
 for (VAR_7 = VAR_4; VAR_7->procname; VAR_7++) {
  VAR_12++;
  VAR_13 += FUNC_3(VAR_7->procname) + 1;
 }

 VAR_9 = FUNC_1(sizeof(struct ctl_table_header) +
   sizeof(struct ctl_node)*VAR_12 +
   sizeof(struct ctl_table)*(VAR_12 + 1) +
   VAR_13,
   VAR_0);

 if (!VAR_9)
  return ((void*)0);

 VAR_10 = (struct ctl_node *)(VAR_9 + 1);
 VAR_6 = (struct ctl_table *)(VAR_10 + VAR_12);
 VAR_11 = (char *)&VAR_6[VAR_12 + 1];

 for (VAR_8 = VAR_6, VAR_7 = VAR_4; VAR_7->procname; VAR_8++, VAR_7++) {
  int VAR_14 = FUNC_3(VAR_7->procname) + 1;
  FUNC_2(VAR_11, VAR_7->procname, VAR_14);
  VAR_8->procname = VAR_11;
  VAR_8->mode = VAR_1|VAR_2;
  VAR_8->data = VAR_5;
  VAR_11 += VAR_14;
 }
 FUNC_0(VAR_9, VAR_3->header.root, VAR_3->header.set, VAR_10, VAR_6);
 VAR_9->nreg = VAR_12;

 return VAR_9;
}
