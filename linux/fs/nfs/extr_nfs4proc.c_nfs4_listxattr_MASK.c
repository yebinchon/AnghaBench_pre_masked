
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*,char*,size_t) ;
 scalar_t__ FUNC_2 (int ,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct dentry *VAR_0, char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_1) {
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
 }

 VAR_4 = FUNC_2(FUNC_0(VAR_0), VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 return VAR_3 + VAR_4;
}
