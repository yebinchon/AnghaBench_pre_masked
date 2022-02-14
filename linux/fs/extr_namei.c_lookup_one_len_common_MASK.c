
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {char const* name; int len; int hash; } ;
struct dentry {int d_flags; int d_inode; TYPE_1__* d_op; } ;
struct TYPE_2__ {int (* d_hash ) (struct dentry*,struct qstr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*,char const*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dentry*,struct qstr*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, struct dentry *VAR_4,
     int VAR_5, struct qstr *VAR_6)
{
 VAR_6->name = VAR_3;
 VAR_6->len = VAR_5;
 VAR_6->hash = FUNC_0(VAR_4, VAR_3, VAR_5);
 if (!VAR_5)
  return -VAR_1;

 if (FUNC_3(VAR_3[0] == '.')) {
  if (VAR_5 < 2 || (VAR_5 == 2 && VAR_3[1] == '.'))
   return -VAR_1;
 }

 while (VAR_5--) {
  unsigned int VAR_7 = *(const unsigned char *)VAR_3++;
  if (VAR_7 == '/' || VAR_7 == '\0')
   return -VAR_1;
 }




 if (VAR_4->d_flags & VAR_0) {
  int VAR_8 = VAR_4->d_op->d_hash(VAR_4, VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return FUNC_1(VAR_4->d_inode, VAR_2);
}
