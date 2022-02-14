
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {char const* name; unsigned int len; } ;
struct fat_mount_options {int dummy; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {struct fat_mount_options options; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,...) ;
 int FUNC_2 (char const*,unsigned int,unsigned char*,struct fat_mount_options*) ;

__attribute__((used)) static int FUNC_3(const struct dentry *VAR_1,
  unsigned int VAR_2, const char *VAR_3, const struct qstr *VAR_4)
{
 struct fat_mount_options *VAR_5 = &FUNC_0(VAR_1->d_sb)->options;
 unsigned char VAR_6[VAR_0], VAR_7[VAR_0];
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4->name, VAR_4->len, VAR_6, VAR_5);
 if (VAR_8)
  goto old_compare;
 VAR_8 = FUNC_2(VAR_3, VAR_2, VAR_7, VAR_5);
 if (VAR_8)
  goto old_compare;
 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_0);
out:
 return VAR_8;

old_compare:
 VAR_8 = 1;
 if (VAR_4->len == VAR_2)
  VAR_8 = FUNC_1(VAR_4->name, VAR_3, VAR_2);
 goto out;
}
