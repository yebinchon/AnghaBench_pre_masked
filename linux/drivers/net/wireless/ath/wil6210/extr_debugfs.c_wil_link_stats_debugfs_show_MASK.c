
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int vif_mutex; struct wil6210_vif** vifs; } ;
struct seq_file {struct wil6210_priv* private; } ;


 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (struct wil6210_vif*,struct seq_file*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct wil6210_priv *VAR_2 = VAR_0->private;
 struct wil6210_vif *VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(&VAR_2->vif_mutex);
 if (VAR_5)
  return VAR_5;




 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  VAR_3 = VAR_2->vifs[VAR_4];

  FUNC_3(VAR_0, "MID %d ", VAR_4);
  if (!VAR_3) {
   FUNC_4(VAR_0, "unused\n");
   continue;
  }

  FUNC_5(VAR_3, VAR_0);
 }

 FUNC_2(&VAR_2->vif_mutex);

 return 0;
}
