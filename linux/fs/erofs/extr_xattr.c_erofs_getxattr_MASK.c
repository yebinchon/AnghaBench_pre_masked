
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_4__ {int sb; } ;
struct TYPE_3__ {scalar_t__ len; char const* name; } ;
struct getxattr_iter {int index; size_t buffer_size; TYPE_2__ it; void* buffer; TYPE_1__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct getxattr_iter*) ;
 int FUNC_2 (struct inode*,struct getxattr_iter*) ;
 scalar_t__ FUNC_3 (char const*) ;

int FUNC_4(struct inode *VAR_4, int VAR_5,
     const char *VAR_6,
     void *VAR_7, size_t VAR_8)
{
 int VAR_9;
 struct getxattr_iter VAR_10;

 if (!VAR_6)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_10.index = VAR_5;

 VAR_10.name.len = FUNC_3(VAR_6);
 if (VAR_10.name.len > VAR_3)
  return -VAR_2;
 VAR_10.name.name = VAR_6;

 VAR_10.buffer = VAR_7;
 VAR_10.buffer_size = VAR_8;

 VAR_10.it.sb = VAR_4->i_sb;
 VAR_9 = FUNC_1(VAR_4, &VAR_10);
 if (VAR_9 == -VAR_1)
  VAR_9 = FUNC_2(VAR_4, &VAR_10);
 return VAR_9;
}
