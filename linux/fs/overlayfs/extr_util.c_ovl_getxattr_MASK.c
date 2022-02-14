
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (struct dentry*,char*,char*,size_t) ;

ssize_t FUNC_4(struct dentry *VAR_4, char *VAR_5, char **VAR_6,
       size_t VAR_7)
{
 ssize_t VAR_8;
 char *VAR_9 = ((void*)0);

 VAR_8 = FUNC_3(VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_8 < 0) {
  if (VAR_8 == -VAR_0 || VAR_8 == -VAR_2)
   return -VAR_0;
  goto fail;
 }

 if (VAR_8 != 0) {
  VAR_9 = FUNC_1(VAR_8 + VAR_7, VAR_3);
  if (!VAR_9)
   return -VAR_1;

  VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_9, VAR_8);
  if (VAR_8 < 0)
   goto fail;
 }
 *VAR_6 = VAR_9;

 return VAR_8;

fail:
 FUNC_2("overlayfs: failed to get xattr %s: err=%zi)\n",
       VAR_5, VAR_8);
 FUNC_0(VAR_9);
 return VAR_8;
}
