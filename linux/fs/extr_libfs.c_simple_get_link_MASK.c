
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {char const* i_link; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;



const char *FUNC_0(struct dentry *VAR_0, struct inode *VAR_1,
       struct delayed_call *VAR_2)
{
 return VAR_1->i_link;
}
