
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct path {int dentry; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {int mask; } ;
struct audit_parent {TYPE_1__ mark; int watches; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct audit_parent* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct audit_parent*) ;
 int VAR_3 ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,struct inode*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 struct audit_parent* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct audit_parent *FUNC_8(struct path *VAR_4)
{
 struct inode *VAR_5 = FUNC_3(VAR_4->dentry);
 struct audit_parent *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_2);
 if (FUNC_7(!VAR_6))
  return FUNC_0(-VAR_1);

 FUNC_1(&VAR_6->watches);

 FUNC_5(&VAR_6->mark, VAR_3);
 VAR_6->mark.mask = VAR_0;
 VAR_7 = FUNC_4(&VAR_6->mark, VAR_5, 0);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6);
  return FUNC_0(VAR_7);
 }

 return VAR_6;
}
