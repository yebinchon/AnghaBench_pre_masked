
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_name {scalar_t__ type; int len; int name; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_name *VAR_2,
 struct dentry *VAR_3,
 int VAR_4)
{
 VAR_2->name = VAR_3->d_name.name;
 VAR_2->len = VAR_3->d_name.len;
 VAR_2->type = FUNC_1(VAR_4);

 if (FUNC_0(VAR_2->type == VAR_1))
  return -VAR_0;

 return 0;
}
