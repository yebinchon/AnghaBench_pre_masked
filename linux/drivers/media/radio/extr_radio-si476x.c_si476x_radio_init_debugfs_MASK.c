
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct si476x_radio {struct dentry* debugfs; TYPE_1__ v4l2dev; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_2 (int ,int *) ;
 struct dentry* FUNC_3 (char*,int ,struct dentry*,struct si476x_radio*,int *) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct si476x_radio *VAR_6)
{
 struct dentry *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(FUNC_5(VAR_6->v4l2dev.dev), ((void*)0));
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto exit;
 }
 VAR_6->debugfs = VAR_7;

 VAR_7 = FUNC_3("acf", VAR_0,
         VAR_6->debugfs, VAR_6, &VAR_1);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto cleanup;
 }

 VAR_7 = FUNC_3("rds_blckcnt", VAR_0,
         VAR_6->debugfs, VAR_6,
         &VAR_3);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto cleanup;
 }

 VAR_7 = FUNC_3("agc", VAR_0,
         VAR_6->debugfs, VAR_6, &VAR_2);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto cleanup;
 }

 VAR_7 = FUNC_3("rsq", VAR_0,
         VAR_6->debugfs, VAR_6, &VAR_4);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto cleanup;
 }

 VAR_7 = FUNC_3("rsq_primary", VAR_0,
         VAR_6->debugfs, VAR_6,
         &VAR_5);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto cleanup;
 }

 return 0;
cleanup:
 FUNC_4(VAR_6->debugfs);
exit:
 return VAR_8;
}
