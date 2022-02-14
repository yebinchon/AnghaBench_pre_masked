
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iattr {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int
FUNC_3(struct dentry *VAR_1, struct iattr *VAR_2)
{
 if (FUNC_0(FUNC_1(VAR_1))->size != 0)
  return FUNC_2(VAR_1, VAR_2);
 return -VAR_0;
}
