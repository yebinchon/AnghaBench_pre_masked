
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; char const* name; } ;
struct dentry {char* d_fsdata; int d_lock; struct dentry* d_parent; TYPE_1__ d_name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,unsigned int) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const*) ;

char *FUNC_11(char **VAR_3, struct dentry *VAR_4, char *VAR_5, ssize_t VAR_6,
        unsigned VAR_7)
{
 char *VAR_8;
 int VAR_9;
 unsigned VAR_10;
 const char *VAR_11;

rename_retry:
 VAR_8 = VAR_5+VAR_6;
 *--VAR_8 = '\0';
 VAR_6--;

 VAR_10 = FUNC_6(&VAR_2);
 FUNC_4();
 while (1) {
  FUNC_8(&VAR_4->d_lock);
  if (FUNC_1(VAR_4))
   break;
  VAR_9 = VAR_4->d_name.len;
  VAR_6 -= VAR_9 + 1;
  if (VAR_6 < 0)
   goto Elong_unlock;
  VAR_8 -= VAR_9;
  FUNC_3(VAR_8, VAR_4->d_name.name, VAR_9);
  *--VAR_8 = '/';
  FUNC_9(&VAR_4->d_lock);
  VAR_4 = VAR_4->d_parent;
 }
 if (FUNC_7(&VAR_2, VAR_10)) {
  FUNC_9(&VAR_4->d_lock);
  FUNC_5();
  goto rename_retry;
 }
 if ((VAR_7 & VAR_1) && *VAR_8 != '/') {
  if (--VAR_6 < 0) {
   FUNC_9(&VAR_4->d_lock);
   FUNC_5();
   goto Elong;
  }
  *--VAR_8 = '/';
 }
 *VAR_3 = VAR_8;
 VAR_11 = VAR_4->d_fsdata;
 if (!VAR_11) {
  FUNC_9(&VAR_4->d_lock);
  FUNC_5();
  FUNC_2(1);
  return VAR_8;
 }
 VAR_9 = FUNC_10(VAR_11);
 if (*VAR_8 == '/') {

  while (VAR_9 > 0 && VAR_11[VAR_9 - 1] == '/')
   VAR_9--;
 }
 VAR_6 -= VAR_9;
 if (VAR_6 < 0) {
  FUNC_9(&VAR_4->d_lock);
  FUNC_5();
  goto Elong;
 }
 VAR_8 -= VAR_9;
 FUNC_3(VAR_8, VAR_11, VAR_9);
 FUNC_9(&VAR_4->d_lock);
 FUNC_5();
 return VAR_8;
Elong_unlock:
 FUNC_9(&VAR_4->d_lock);
 FUNC_5();
 if (FUNC_7(&VAR_2, VAR_10))
  goto rename_retry;
Elong:
 return FUNC_0(-VAR_0);
}
