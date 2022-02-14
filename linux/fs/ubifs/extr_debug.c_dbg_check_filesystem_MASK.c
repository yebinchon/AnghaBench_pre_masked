
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct fsck_data {int inodes; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,struct fsck_data*) ;
 int VAR_1 ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*,int ,int *,struct fsck_data*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct fsck_data*) ;
 int FUNC_5 (struct ubifs_info*,char*,int) ;

int FUNC_6(struct ubifs_info *VAR_2)
{
 int VAR_3;
 struct fsck_data VAR_4;

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_4.inodes = VAR_0;
 VAR_3 = FUNC_2(VAR_2, VAR_1, ((void*)0), &VAR_4);
 if (VAR_3)
  goto out_free;

 VAR_3 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_3)
  goto out_free;

 FUNC_4(&VAR_4);
 return 0;

out_free:
 FUNC_5(VAR_2, "file-system check failed with error %d", VAR_3);
 FUNC_3();
 FUNC_4(&VAR_4);
 return VAR_3;
}
