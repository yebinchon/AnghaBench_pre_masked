
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_ctx {size_t last_cmd_status; size_t descriptor_size; size_t num_descriptors; int lock; } ;
struct wil6210_priv {struct pmc_ctx pmc; } ;
struct file {size_t f_pos; struct wil6210_priv* private_data; } ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;
 int FUNC_3 (struct pmc_ctx*) ;

loff_t FUNC_4(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 loff_t VAR_5;
 struct wil6210_priv *VAR_6 = VAR_2->private_data;
 struct pmc_ctx *VAR_7 = &VAR_6->pmc;
 size_t VAR_8;

 FUNC_0(&VAR_7->lock);

 if (!FUNC_3(VAR_7)) {
  FUNC_2(VAR_6, "error, pmc is not allocated!\n");
  VAR_7->last_cmd_status = -VAR_1;
  FUNC_1(&VAR_7->lock);
  return -VAR_1;
 }

 VAR_8 = VAR_7->descriptor_size * VAR_7->num_descriptors;

 switch (VAR_4) {
 case 0:
  VAR_5 = VAR_3;
  break;

 case 1:
  VAR_5 = VAR_2->f_pos + VAR_3;
  break;

 case 2:
  VAR_5 = VAR_8;
  break;

 default:
  VAR_5 = -VAR_0;
  goto out;
 }

 if (VAR_5 < 0) {
  VAR_5 = -VAR_0;
  goto out;
 }
 if (VAR_5 > VAR_8)
  VAR_5 = VAR_8;

 VAR_2->f_pos = VAR_5;

out:
 FUNC_1(&VAR_7->lock);

 return VAR_5;
}
