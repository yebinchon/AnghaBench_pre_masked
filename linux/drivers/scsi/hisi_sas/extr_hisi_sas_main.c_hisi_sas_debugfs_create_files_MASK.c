
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {int n_phy; int queue_count; struct hisi_hba* dq; struct hisi_hba* cq; struct hisi_hba* phy; struct dentry* debugfs_dump_dentry; struct dentry* debugfs_dir; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct hisi_hba*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_10)
{
 struct dentry *VAR_11;
 struct dentry *VAR_12;
 char VAR_13[256];
 int VAR_14;
 int VAR_15;
 int VAR_16;


 VAR_11 = FUNC_0("dump", VAR_10->debugfs_dir);
 VAR_10->debugfs_dump_dentry = VAR_11;

 FUNC_1("global", 0400, VAR_11, VAR_10,
       &VAR_3);


 VAR_12 = FUNC_0("port", VAR_11);
 for (VAR_14 = 0; VAR_14 < VAR_10->n_phy; VAR_14++) {
  FUNC_2(VAR_13, 256, "%d", VAR_14);

  FUNC_1(VAR_13, 0400, VAR_12, &VAR_10->phy[VAR_14],
        &VAR_8);
 }


 VAR_12 = FUNC_0("cq", VAR_11);
 for (VAR_15 = 0; VAR_15 < VAR_10->queue_count; VAR_15++) {
  FUNC_2(VAR_13, 256, "%d", VAR_15);

  FUNC_1(VAR_13, 0400, VAR_12, &VAR_10->cq[VAR_15],
        &VAR_1);
 }


 VAR_12 = FUNC_0("dq", VAR_11);
 for (VAR_16 = 0; VAR_16 < VAR_10->queue_count; VAR_16++) {
  FUNC_2(VAR_13, 256, "%d", VAR_16);

  FUNC_1(VAR_13, 0400, VAR_12, &VAR_10->dq[VAR_16],
        &VAR_2);
 }

 FUNC_1("iost", 0400, VAR_11, VAR_10,
       &VAR_5);

 FUNC_1("iost_cache", 0400, VAR_11, VAR_10,
       &VAR_4);

 FUNC_1("itct", 0400, VAR_11, VAR_10,
       &VAR_7);

 FUNC_1("itct_cache", 0400, VAR_11, VAR_10,
       &VAR_6);

 FUNC_1("axi", 0400, VAR_11, VAR_10,
       &VAR_0);

 FUNC_1("ras", 0400, VAR_11, VAR_10,
       &VAR_9);

 return;
}
