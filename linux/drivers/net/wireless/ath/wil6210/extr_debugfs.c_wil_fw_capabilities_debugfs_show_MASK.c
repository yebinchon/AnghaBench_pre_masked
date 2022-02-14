
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int fw_capabilities; } ;
struct seq_file {struct wil6210_priv* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct wil6210_priv *VAR_3 = VAR_1->private;

 FUNC_0(VAR_1, "fw_capabilities : %*pb\n", VAR_0,
     VAR_3->fw_capabilities);

 return 0;
}
