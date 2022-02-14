
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int a_count; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,struct posix_acl const*,void*,size_t) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*,char const*,void*,size_t,int ) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_5, const char *VAR_6,
        const struct posix_acl *VAR_7)
{
 void *VAR_8;
 size_t VAR_9;
 int VAR_10;

 if (!FUNC_0(VAR_0) || !VAR_7)
  return 0;

 VAR_9 = FUNC_4(VAR_7->a_count);
 VAR_8 = FUNC_2(VAR_9, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_3(&VAR_4, VAR_7, VAR_8, VAR_9);
 if (VAR_10 < 0)
  goto out_free;

 VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_8, VAR_9, VAR_3);
out_free:
 FUNC_1(VAR_8);
 return VAR_10;
}
