
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct p9_fid {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct posix_acl* FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct posix_acl*) ;
 int VAR_6 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ) ;
 struct posix_acl* FUNC_4 (int *,void*,int ) ;
 int FUNC_5 (struct p9_fid*,char*,void*,int ) ;

__attribute__((used)) static struct posix_acl *FUNC_6(struct p9_fid *VAR_7, char *VAR_8)
{
 ssize_t VAR_9;
 void *VAR_10 = ((void*)0);
 struct posix_acl *VAR_11 = ((void*)0);

 VAR_9 = FUNC_5(VAR_7, VAR_8, ((void*)0), 0);
 if (VAR_9 > 0) {
  VAR_10 = FUNC_3(VAR_9, VAR_5);
  if (!VAR_10)
   return FUNC_0(-VAR_2);
  VAR_9 = FUNC_5(VAR_7, VAR_8, VAR_10, VAR_9);
  if (VAR_9 > 0) {
   VAR_11 = FUNC_4(&VAR_6, VAR_10, VAR_9);
   if (FUNC_1(VAR_11))
    goto err_out;
  }
 } else if (VAR_9 == -VAR_1 || VAR_9 == 0 ||
     VAR_9 == -VAR_3 || VAR_9 == -VAR_4) {
  VAR_11 = ((void*)0);
 } else
  VAR_11 = FUNC_0(-VAR_0);

err_out:
 FUNC_2(VAR_10);
 return VAR_11;
}
