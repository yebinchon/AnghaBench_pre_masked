
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qstr {scalar_t__ len; unsigned char* name; int hash; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {scalar_t__ s_namelen; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (struct dentry const*) ;
 unsigned long FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int
FUNC_5(const struct dentry *VAR_1, struct qstr *VAR_2)
{
 const unsigned char *VAR_3;
 unsigned long VAR_4;
 u32 VAR_5;

 if (VAR_2->len > FUNC_0(VAR_1->d_sb)->s_namelen)
  return -VAR_0;

 VAR_5 = VAR_2->len;
 VAR_3 = VAR_2->name;
 VAR_4 = FUNC_3(VAR_1);
 while (VAR_5--)
  VAR_4 = FUNC_4(FUNC_1(*VAR_3++), VAR_4);
 VAR_2->hash = FUNC_2(VAR_4);

 return 0;
}
