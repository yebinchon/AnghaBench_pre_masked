
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,struct dentry*,int ,int) ;
 struct dentry* FUNC_2 (struct dentry*,int ,int ) ;

__attribute__((used)) static inline struct dentry *FUNC_3(struct dentry *VAR_0, umode_t VAR_1)
{
 struct dentry *VAR_2 = FUNC_2(VAR_0, VAR_1, 0);
 int VAR_3 = FUNC_0(VAR_2);

 FUNC_1("tmpfile(%pd2, 0%o) = %i\n", VAR_0, VAR_1, VAR_3);
 return VAR_2;
}
