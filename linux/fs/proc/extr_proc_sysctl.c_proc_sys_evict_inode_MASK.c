
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ctl_table_header {int count; } ;
struct TYPE_2__ {int sysctl_inodes; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ctl_table_header*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

void FUNC_5(struct inode *VAR_2, struct ctl_table_header *VAR_3)
{
 FUNC_3(&VAR_1);
 FUNC_1(&FUNC_0(VAR_2)->sysctl_inodes);
 if (!--VAR_3->count)
  FUNC_2(VAR_3, VAR_0);
 FUNC_4(&VAR_1);
}
