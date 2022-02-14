
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wil6210_priv {TYPE_1__* srings; } ;
struct seq_file {struct wil6210_priv* private; } ;
struct TYPE_2__ {scalar_t__ va; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,struct wil6210_priv*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct wil6210_priv *VAR_3 = VAR_1->private;
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3->srings[VAR_4].va)
   FUNC_0(VAR_1, VAR_3, &VAR_3->srings[VAR_4]);

 return 0;
}
