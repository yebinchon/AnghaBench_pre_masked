
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,int,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct dentry *VAR_2, umode_t VAR_3)
{
 return FUNC_0(VAR_2, (VAR_3 & 07777) | VAR_0, 0, ((void*)0));
}
