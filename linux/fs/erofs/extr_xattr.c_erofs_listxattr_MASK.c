
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb; } ;
struct listxattr_iter {char* buffer; size_t buffer_size; TYPE_1__ it; scalar_t__ buffer_ofs; struct dentry* dentry; } ;
struct dentry {int d_sb; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct listxattr_iter*) ;
 int FUNC_3 (struct listxattr_iter*) ;

ssize_t FUNC_4(struct dentry *VAR_1,
   char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 struct listxattr_iter VAR_5;

 VAR_4 = FUNC_1(FUNC_0(VAR_1));
 if (VAR_4)
  return VAR_4;

 VAR_5.dentry = VAR_1;
 VAR_5.buffer = VAR_2;
 VAR_5.buffer_size = VAR_3;
 VAR_5.buffer_ofs = 0;

 VAR_5.it.sb = VAR_1->d_sb;

 VAR_4 = FUNC_2(&VAR_5);
 if (VAR_4 < 0 && VAR_4 != -VAR_0)
  return VAR_4;
 return FUNC_3(&VAR_5);
}
