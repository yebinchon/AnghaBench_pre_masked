
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_name; struct dentry* d_parent; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (char**,int*,char*,int) ;
 int FUNC_6 (char**,int*,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int*) ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_10(struct dentry *VAR_2, char *VAR_3, int VAR_4)
{
 struct dentry *VAR_5;
 char *VAR_6, *VAR_7;
 int VAR_8, VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_4 < 2)
  goto Elong;

 FUNC_7();
restart:
 VAR_5 = VAR_2;
 VAR_6 = VAR_3 + VAR_4;
 VAR_8 = VAR_4;
 FUNC_5(&VAR_6, &VAR_8, "\0", 1);

 VAR_7 = VAR_6-1;
 *VAR_7 = '/';
 FUNC_9(&VAR_1, &VAR_9);
 while (!FUNC_1(VAR_5)) {
  struct dentry *VAR_11 = VAR_5->d_parent;

  FUNC_4(VAR_11);
  VAR_10 = FUNC_6(&VAR_6, &VAR_8, &VAR_5->d_name);
  if (VAR_10)
   break;

  VAR_7 = VAR_6;
  VAR_5 = VAR_11;
 }
 if (!(VAR_9 & 1))
  FUNC_8();
 if (FUNC_3(&VAR_1, VAR_9)) {
  VAR_9 = 1;
  goto restart;
 }
 FUNC_2(&VAR_1, VAR_9);
 if (VAR_10)
  goto Elong;
 return VAR_7;
Elong:
 return FUNC_0(-VAR_0);
}
