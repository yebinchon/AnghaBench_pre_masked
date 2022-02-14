
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct dentry const*,struct qstr const*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 int VAR_0 ;

struct dentry *FUNC_3(const struct dentry *VAR_1, const struct qstr *VAR_2)
{
 struct dentry *VAR_3;
 unsigned VAR_4;

 do {
  VAR_4 = FUNC_1(&VAR_0);
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3)
   break;
 } while (FUNC_2(&VAR_0, VAR_4));
 return VAR_3;
}
