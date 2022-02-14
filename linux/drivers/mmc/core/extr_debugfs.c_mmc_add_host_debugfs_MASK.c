
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int fail_mmc_request; int caps2; int caps; struct dentry* debugfs_root; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,struct dentry*,struct mmc_host*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,struct dentry*,int *) ;
 int VAR_4 ;
 int FUNC_4 (struct mmc_host*) ;
 int VAR_5 ;
 int FUNC_5 (int *,scalar_t__) ;

void FUNC_6(struct mmc_host *VAR_6)
{
 struct dentry *VAR_7;

 VAR_7 = FUNC_0(FUNC_4(VAR_6), ((void*)0));
 VAR_6->debugfs_root = VAR_7;

 FUNC_1("ios", VAR_0, VAR_7, VAR_6, &VAR_5);
 FUNC_2("caps", VAR_0, VAR_7, &VAR_6->caps);
 FUNC_2("caps2", VAR_0, VAR_7, &VAR_6->caps2);
 FUNC_1("clock", VAR_0 | VAR_1, VAR_7, VAR_6,
       &VAR_4);
}
