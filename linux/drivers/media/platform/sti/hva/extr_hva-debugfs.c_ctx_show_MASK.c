
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hva_ctx* private; } ;
struct hva_ctx {int id; } ;


 int FUNC_0 (struct seq_file*,struct hva_ctx*) ;
 int FUNC_1 (struct hva_ctx*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct hva_ctx *VAR_2 = VAR_0->private;

 FUNC_2(VAR_0, "[running encoding %d]\n", VAR_2->id);

 FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_2);

 return 0;
}
