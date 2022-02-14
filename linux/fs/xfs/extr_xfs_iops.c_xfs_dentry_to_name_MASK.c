
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_name {int type; int len; int name; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(
 struct xfs_name *VAR_1,
 struct dentry *VAR_2)
{
 VAR_1->name = VAR_2->d_name.name;
 VAR_1->len = VAR_2->d_name.len;
 VAR_1->type = VAR_0;
}
