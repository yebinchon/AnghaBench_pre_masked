
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_2, u32 *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6 = *VAR_4 << 2;

 VAR_5 = FUNC_0(VAR_2, (char *)VAR_3, VAR_6);
 if (VAR_5 <= 0)
  return VAR_0;

 VAR_6 = VAR_5;


 *VAR_4 = (VAR_6 + 3) >> 2;
 return VAR_1;
}
