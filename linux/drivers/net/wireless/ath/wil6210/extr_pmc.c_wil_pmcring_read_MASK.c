
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_ctx {int num_descriptors; int last_cmd_status; int lock; int pring_va; } ;
struct wil6210_priv {struct pmc_ctx pmc; } ;
struct vring_rx_desc {int dummy; } ;
struct seq_file {struct wil6210_priv* private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,int ,size_t) ;
 int FUNC_3 (struct wil6210_priv*,char*,size_t) ;
 int FUNC_4 (struct wil6210_priv*,char*) ;
 int FUNC_5 (struct pmc_ctx*) ;

int FUNC_6(struct seq_file *VAR_1, void *VAR_2)
{
 struct wil6210_priv *VAR_3 = VAR_1->private;
 struct pmc_ctx *VAR_4 = &VAR_3->pmc;
 size_t VAR_5 =
  sizeof(struct vring_rx_desc) * VAR_4->num_descriptors;

 FUNC_0(&VAR_4->lock);

 if (!FUNC_5(VAR_4)) {
  FUNC_4(VAR_3, "error, pmc is not allocated!\n");
  VAR_4->last_cmd_status = -VAR_0;
  FUNC_1(&VAR_4->lock);
  return -VAR_0;
 }

 FUNC_3(VAR_3, "pmcring_read: size %zu\n", VAR_5);

 FUNC_2(VAR_1, VAR_4->pring_va, VAR_5);

 FUNC_1(&VAR_4->lock);

 return 0;
}
