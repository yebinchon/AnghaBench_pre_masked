
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int xattr_sem; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*,char*,size_t) ;
 int FUNC_4 (struct dentry*,char*,size_t) ;
 int FUNC_5 (int *) ;

ssize_t
FUNC_6(struct dentry *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2(&FUNC_0(FUNC_1(VAR_0))->xattr_sem);
 VAR_3 = VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto errout;
 if (VAR_1) {
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
 }
 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto errout;
 VAR_3 += VAR_4;
errout:
 FUNC_5(&FUNC_0(FUNC_1(VAR_0))->xattr_sem);
 return VAR_3;
}
