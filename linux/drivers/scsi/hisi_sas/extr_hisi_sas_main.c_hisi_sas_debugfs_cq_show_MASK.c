
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hisi_sas_cq* private; } ;
struct hisi_sas_cq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,int,struct hisi_sas_cq*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct hisi_sas_cq *VAR_3 = VAR_1->private;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(VAR_1, VAR_4, VAR_3);
 }
 return 0;
}
