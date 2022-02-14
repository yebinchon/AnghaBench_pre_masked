
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int hash; int len; int name; } ;
struct fat_mount_options {int dummy; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {struct fat_mount_options options; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry const*,unsigned char*,int) ;
 int FUNC_2 (int ,int ,unsigned char*,struct fat_mount_options*) ;

__attribute__((used)) static int FUNC_3(const struct dentry *VAR_1, struct qstr *VAR_2)
{
 struct fat_mount_options *VAR_3 = &FUNC_0(VAR_1->d_sb)->options;
 unsigned char VAR_4[VAR_0];
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2->name, VAR_2->len, VAR_4, VAR_3);
 if (!VAR_5)
  VAR_2->hash = FUNC_1(VAR_1, VAR_4, VAR_0);
 return 0;
}
