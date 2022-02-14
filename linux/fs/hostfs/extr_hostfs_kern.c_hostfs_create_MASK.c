
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int fd; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 char* FUNC_5 (struct dentry*) ;
 int FUNC_6 (char*,int) ;
 struct inode* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,char*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5,
    bool VAR_6)
{
 struct inode *VAR_7;
 char *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_7(VAR_3->i_sb);
 if (FUNC_1(VAR_7)) {
  VAR_9 = FUNC_2(VAR_7);
  goto out;
 }

 VAR_9 = -VAR_0;
 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8 == ((void*)0))
  goto out_put;

 VAR_10 = FUNC_6(VAR_8, VAR_5 & 0777);
 if (VAR_10 < 0)
  VAR_9 = VAR_10;
 else
  VAR_9 = FUNC_9(VAR_7, VAR_8);

 FUNC_3(VAR_8);
 if (VAR_9)
  goto out_put;

 FUNC_0(VAR_7)->fd = VAR_10;
 FUNC_0(VAR_7)->mode = VAR_1 | VAR_2;
 FUNC_4(VAR_4, VAR_7);
 return 0;

 out_put:
 FUNC_8(VAR_7);
 out:
 return VAR_9;
}
