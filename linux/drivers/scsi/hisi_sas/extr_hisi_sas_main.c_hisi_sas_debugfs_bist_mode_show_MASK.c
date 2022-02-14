
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct hisi_hba* private; } ;
struct hisi_hba {scalar_t__ debugfs_bist_mode; } ;
struct TYPE_3__ {scalar_t__ value; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,char*,int ,char*) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct hisi_hba *VAR_3 = VAR_1->private;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  int VAR_5 = (VAR_3->debugfs_bist_mode ==
        VAR_0[VAR_4].value);

  FUNC_1(VAR_1, "%s%s%s ", VAR_5 ? "[" : "",
      VAR_0[VAR_4].name,
      VAR_5 ? "]" : "");
 }
 FUNC_2(VAR_1, "\n");

 return 0;
}
