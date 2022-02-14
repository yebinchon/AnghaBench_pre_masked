
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ctl_table_header {int dummy; } ;
struct TYPE_8__ {struct ctl_table_header* sysctl; } ;
struct TYPE_5__ {struct ctl_table_header header; } ;
struct TYPE_6__ {TYPE_1__ dir; } ;
struct TYPE_7__ {TYPE_2__ default_set; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 struct ctl_table_header* FUNC_1 (struct ctl_table_header*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static struct ctl_table_header *FUNC_2(struct inode *VAR_1)
{
 struct ctl_table_header *VAR_2 = FUNC_0(VAR_1)->sysctl;
 if (!VAR_2)
  VAR_2 = &VAR_0.default_set.dir.header;
 return FUNC_1(VAR_2);
}
