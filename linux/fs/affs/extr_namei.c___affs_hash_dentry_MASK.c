
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int (* toupper_t ) (int const) ;
struct qstr {int hash; int len; int * name; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct dentry const*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 unsigned long FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static inline int
FUNC_5(const struct dentry *VAR_1, struct qstr *VAR_2, toupper_t VAR_3, bool VAR_4)
{
 const u8 *VAR_5 = VAR_2->name;
 unsigned long VAR_6;
 int VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_0(VAR_2->name, VAR_2->len, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_2(VAR_1);
 VAR_8 = FUNC_3(VAR_2->len, VAR_0);
 for (; VAR_8 > 0; VAR_5++, VAR_8--)
  VAR_6 = FUNC_4(VAR_3(*VAR_5), VAR_6);
 VAR_2->hash = FUNC_1(VAR_6);

 return 0;
}
