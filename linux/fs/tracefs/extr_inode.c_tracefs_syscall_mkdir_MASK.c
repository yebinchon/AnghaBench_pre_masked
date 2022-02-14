
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* mkdir ) (char*) ;} ;


 int VAR_0 ;
 char* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct dentry *VAR_3, umode_t VAR_4)
{
 char *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5)
  return -VAR_0;






 FUNC_2(VAR_2);
 VAR_6 = VAR_1.mkdir(VAR_5);
 FUNC_1(VAR_2);

 FUNC_3(VAR_5);

 return VAR_6;
}
