
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct iattr {int ia_valid; int ia_mode; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int (* create ) (struct inode*,struct dentry*,struct iattr*,int) ;} ;
struct TYPE_3__ {int s_id; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,char*,int ,int ,struct dentry*) ;
 int FUNC_3 (struct inode*,struct dentry*,struct iattr*,int) ;
 int FUNC_4 (struct inode*,struct dentry*,int) ;
 int FUNC_5 (struct inode*,struct dentry*,int,int) ;

int FUNC_6(struct inode *VAR_4, struct dentry *VAR_5,
  umode_t VAR_6, bool VAR_7)
{
 struct iattr VAR_8;
 int VAR_9 = VAR_7 ? VAR_1 | VAR_2 : VAR_1;
 int VAR_10;

 FUNC_2(VAR_3, "NFS: create(%s/%lu), %pd\n",
   VAR_4->i_sb->s_id, VAR_4->i_ino, VAR_5);

 VAR_8.ia_mode = VAR_6;
 VAR_8.ia_valid = VAR_0;

 FUNC_4(VAR_4, VAR_5, VAR_9);
 VAR_10 = FUNC_0(VAR_4)->create(VAR_4, VAR_5, &VAR_8, VAR_9);
 FUNC_5(VAR_4, VAR_5, VAR_9, VAR_10);
 if (VAR_10 != 0)
  goto out_err;
 return 0;
out_err:
 FUNC_1(VAR_5);
 return VAR_10;
}
