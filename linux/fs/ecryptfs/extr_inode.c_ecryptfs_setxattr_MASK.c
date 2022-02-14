
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {int i_opflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,TYPE_1__*) ;
 int FUNC_3 (struct dentry*,char const*,void const*,size_t,int) ;

int
FUNC_4(struct dentry *VAR_2, struct inode *VAR_3,
    const char *VAR_4, const void *VAR_5,
    size_t VAR_6, int VAR_7)
{
 int VAR_8;
 struct dentry *VAR_9;

 VAR_9 = FUNC_1(VAR_2);
 if (!(FUNC_0(VAR_9)->i_opflags & VAR_1)) {
  VAR_8 = -VAR_0;
  goto out;
 }
 VAR_8 = FUNC_3(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_8 && VAR_3)
  FUNC_2(VAR_3, FUNC_0(VAR_9));
out:
 return VAR_8;
}
