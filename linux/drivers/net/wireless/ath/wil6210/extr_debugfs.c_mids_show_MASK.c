
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int vif_mutex; struct wil6210_vif** vifs; } ;
struct seq_file {struct wil6210_priv* private; } ;
struct net_device {int name; int dev_addr; } ;


 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int,...) ;
 struct net_device* FUNC_4 (struct wil6210_vif*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct wil6210_priv *VAR_2 = VAR_0->private;
 struct wil6210_vif *VAR_3;
 struct net_device *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_2->vif_mutex);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_3 = VAR_2->vifs[VAR_5];

  if (VAR_3) {
   VAR_4 = FUNC_4(VAR_3);
   FUNC_3(VAR_0, "[%d] %pM %s\n", VAR_5, VAR_4->dev_addr,
       VAR_4->name);
  } else {
   FUNC_3(VAR_0, "[%d] unused\n", VAR_5);
  }
 }
 FUNC_2(&VAR_2->vif_mutex);

 return 0;
}
