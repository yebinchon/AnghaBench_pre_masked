
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_sb; } ;
struct cred {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 struct cred* FUNC_4 (int ) ;
 int FUNC_5 (struct cred const*) ;
 int FUNC_6 (char*,size_t) ;
 size_t FUNC_7 (struct dentry*,char*,size_t) ;

ssize_t FUNC_8(struct dentry *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct dentry *VAR_4 = FUNC_3(VAR_1);
 ssize_t VAR_5;
 size_t VAR_6;
 char *VAR_7;
 const struct cred *VAR_8;

 VAR_8 = FUNC_4(VAR_1->d_sb);
 VAR_5 = FUNC_7(VAR_4, VAR_2, VAR_3);
 FUNC_5(VAR_8);
 if (VAR_5 <= 0 || VAR_3 == 0)
  return VAR_5;


 for (VAR_7 = VAR_2, VAR_6 = VAR_5; VAR_6;) {
  size_t VAR_9 = FUNC_6(VAR_7, VAR_6) + 1;


  if (FUNC_0(VAR_9 > VAR_6))
   return -VAR_0;

  VAR_6 -= VAR_9;
  if (!FUNC_2(VAR_7)) {
   VAR_5 -= VAR_9;
   FUNC_1(VAR_7, VAR_7 + VAR_9, VAR_6);
  } else {
   VAR_7 += VAR_9;
  }
 }

 return VAR_5;
}
