
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {scalar_t__* fw_version; } ;
struct seq_file {struct wil6210_priv* private; } ;


 int FUNC_0 (struct seq_file*,char*,scalar_t__*) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct wil6210_priv *VAR_2 = VAR_0->private;

 if (VAR_2->fw_version[0])
  FUNC_0(VAR_0, "%s\n", VAR_2->fw_version);
 else
  FUNC_1(VAR_0, "N/A\n");

 return 0;
}
