
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*,int *,int ,long long*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ubifs_info*,char*,long long,...) ;

int FUNC_4(struct ubifs_info *VAR_2, long long VAR_3)
{
 int VAR_4;
 long long VAR_5 = 0;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_4 = FUNC_1(VAR_2, ((void*)0), VAR_1, &VAR_5);
 if (VAR_4) {
  FUNC_3(VAR_2, "error %d while walking the index", VAR_4);
  return VAR_4;
 }

 if (VAR_5 != VAR_3) {
  FUNC_3(VAR_2, "index size check failed: calculated size is %lld, should be %lld",
     VAR_5, VAR_3);
  FUNC_2();
  return -VAR_0;
 }

 return 0;
}
