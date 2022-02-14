
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct dentry*,int ,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct dentry *VAR_3, umode_t VAR_4,
       dev_t VAR_5)
{

 if (FUNC_0(VAR_4) && VAR_5 == VAR_1)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4, VAR_5, ((void*)0));
}
