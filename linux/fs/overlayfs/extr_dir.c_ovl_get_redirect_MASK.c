
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int len; } ;
struct dentry {int d_lock; int d_parent; TYPE_1__ d_name; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int,int ) ;
 char* FUNC_7 (char*,int ) ;
 char* FUNC_8 (char*,int,int ) ;
 int FUNC_9 (char*,char const*,int) ;
 char* FUNC_10 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static char *FUNC_14(struct dentry *VAR_4, bool VAR_5)
{
 char *VAR_6, *VAR_7;
 struct dentry *VAR_8, *VAR_9;
 int VAR_10 = VAR_3 + 1;

 if (!VAR_5) {
  VAR_7 = FUNC_8(VAR_4->d_name.name, VAR_4->d_name.len,
          VAR_2);
  goto out;
 }

 VAR_6 = VAR_7 = FUNC_6(VAR_10, VAR_2);
 if (!VAR_6)
  goto out;

 VAR_10--;
 VAR_6[VAR_10] = '\0';
 for (VAR_8 = FUNC_2(VAR_4); !FUNC_1(VAR_8);) {
  const char *VAR_11;
  int VAR_12;

  FUNC_11(&VAR_8->d_lock);
  VAR_11 = FUNC_10(VAR_8);
  if (VAR_11) {
   VAR_12 = FUNC_13(VAR_11);
  } else {
   VAR_11 = VAR_8->d_name.name;
   VAR_12 = VAR_8->d_name.len;
  }


  if (VAR_12 + (VAR_11[0] != '/') > VAR_10) {
   VAR_7 = FUNC_0(-VAR_1);
   FUNC_12(&VAR_8->d_lock);
   goto out_put;
  }

  VAR_10 -= VAR_12;
  FUNC_9(&VAR_6[VAR_10], VAR_11, VAR_12);
  VAR_9 = FUNC_3(VAR_8->d_parent);
  FUNC_12(&VAR_8->d_lock);

  FUNC_4(VAR_8);
  VAR_8 = VAR_9;


  if (VAR_6[VAR_10] == '/')
   break;
  VAR_10--;
  VAR_6[VAR_10] = '/';
 }
 VAR_7 = FUNC_7(&VAR_6[VAR_10], VAR_2);
out_put:
 FUNC_4(VAR_8);
 FUNC_5(VAR_6);
out:
 return VAR_7 ? VAR_7 : FUNC_0(-VAR_0);
}
