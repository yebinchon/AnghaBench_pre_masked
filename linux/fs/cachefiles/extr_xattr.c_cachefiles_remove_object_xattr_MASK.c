
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct cachefiles_cache {int dummy; } ;
struct TYPE_2__ {int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct cachefiles_cache*,char*,int ,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,int ) ;

int FUNC_4(struct cachefiles_cache *VAR_4,
       struct dentry *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (VAR_6 < 0) {
  if (VAR_6 == -VAR_1 || VAR_6 == -VAR_0)
   VAR_6 = 0;
  else if (VAR_6 != -VAR_2)
   FUNC_1(VAR_4,
         "Can't remove xattr from %lu"
         " (error %d)",
         FUNC_2(VAR_5)->i_ino, -VAR_6);
 }

 FUNC_0(" = %d", VAR_6);
 return VAR_6;
}
