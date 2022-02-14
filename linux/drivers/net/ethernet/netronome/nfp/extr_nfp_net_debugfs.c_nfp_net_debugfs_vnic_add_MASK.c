
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int id; int * r_vecs; int max_r_vecs; int max_tx_rings; int max_rx_rings; struct dentry* debugfs_dir; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (char*,struct dentry*) ;
 int FUNC_2 (char*,int,struct dentry*,int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct nfp_net*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*) ;

void FUNC_7(struct nfp_net *VAR_4, struct dentry *VAR_5)
{
 struct dentry *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 char VAR_10[20];
 int VAR_11;

 if (FUNC_0(VAR_0))
  return;

 if (FUNC_4(VAR_4))
  FUNC_5(VAR_10, "vnic%d", VAR_4->id);
 else
  FUNC_6(VAR_10, "ctrl-vnic");
 VAR_4->debugfs_dir = FUNC_1(VAR_10, VAR_5);


 VAR_6 = FUNC_1("queue", VAR_4->debugfs_dir);

 VAR_8 = FUNC_1("rx", VAR_6);
 VAR_7 = FUNC_1("tx", VAR_6);
 VAR_9 = FUNC_1("xdp", VAR_6);

 for (VAR_11 = 0; VAR_11 < FUNC_3(VAR_4->max_rx_rings, VAR_4->max_r_vecs); VAR_11++) {
  FUNC_5(VAR_10, "%d", VAR_11);
  FUNC_2(VAR_10, 0400, VAR_8,
        &VAR_4->r_vecs[VAR_11], &VAR_1);
  FUNC_2(VAR_10, 0400, VAR_9,
        &VAR_4->r_vecs[VAR_11], &VAR_3);
 }

 for (VAR_11 = 0; VAR_11 < FUNC_3(VAR_4->max_tx_rings, VAR_4->max_r_vecs); VAR_11++) {
  FUNC_5(VAR_10, "%d", VAR_11);
  FUNC_2(VAR_10, 0400, VAR_7,
        &VAR_4->r_vecs[VAR_11], &VAR_2);
 }
}
