
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int a_count; } ;
struct p9_fid {int dummy; } ;




 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,struct posix_acl*,void*,size_t) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct p9_fid*,char*,void*,size_t,int ) ;

__attribute__((used)) static int FUNC_6(struct p9_fid *VAR_5, int VAR_6, struct posix_acl *VAR_7)
{
 int VAR_8;
 char *VAR_9;
 size_t VAR_10;
 void *VAR_11;
 if (!VAR_7)
  return 0;


 VAR_10 = FUNC_4(VAR_7->a_count);
 VAR_11 = FUNC_2(VAR_10, VAR_1);
 if (!VAR_11)
  return -VAR_0;
 VAR_8 = FUNC_3(&VAR_4, VAR_7, VAR_11, VAR_10);
 if (VAR_8 < 0)
  goto err_free_out;
 switch (VAR_6) {
 case 129:
  VAR_9 = VAR_2;
  break;
 case 128:
  VAR_9 = VAR_3;
  break;
 default:
  FUNC_0();
 }
 VAR_8 = FUNC_5(VAR_5, VAR_9, VAR_11, VAR_10, 0);
err_free_out:
 FUNC_1(VAR_11);
 return VAR_8;
}
