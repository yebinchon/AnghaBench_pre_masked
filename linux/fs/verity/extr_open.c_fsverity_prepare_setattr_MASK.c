
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iattr {int ia_valid; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct dentry *VAR_2, struct iattr *VAR_3)
{
 if (FUNC_0(FUNC_1(VAR_2)) && (VAR_3->ia_valid & VAR_0)) {
  FUNC_2("Denying truncate of verity file (ino %lu)\n",
    FUNC_1(VAR_2)->i_ino);
  return -VAR_1;
 }
 return 0;
}
