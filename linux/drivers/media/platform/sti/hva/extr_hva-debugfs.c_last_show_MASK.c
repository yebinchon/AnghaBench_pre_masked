
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct hva_dev* private; } ;
struct hva_ctx {int flags; } ;
struct TYPE_2__ {struct hva_ctx last_ctx; } ;
struct hva_dev {TYPE_1__ dbg; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,struct hva_ctx*) ;
 int FUNC_1 (struct hva_ctx*) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct hva_dev *VAR_3 = VAR_1->private;
 struct hva_ctx *VAR_4 = &VAR_3->dbg.last_ctx;

 if (VAR_4->flags & VAR_0) {
  FUNC_2(VAR_1, "[last encoding]\n");

  FUNC_1(VAR_4);
  FUNC_0(VAR_1, VAR_4);
 } else {
  FUNC_2(VAR_1, "[no information recorded about last encoding]\n");
 }

 return 0;
}
