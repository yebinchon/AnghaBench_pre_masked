
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int dummy; } ;
struct TYPE_3__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,struct dentry*,int,int ) ;
 int FUNC_3 (struct inode*,struct dentry*,int ,int ,unsigned long long,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1,
   struct dentry *VAR_2,
   umode_t VAR_3,
   bool VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_1, VAR_2, VAR_2->d_name.len, VAR_2->d_name.name,
      (unsigned long long)FUNC_0(VAR_1)->ip_blkno, VAR_3);
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3 | VAR_0, 0);
 if (VAR_5)
  FUNC_1(VAR_5);

 return VAR_5;
}
