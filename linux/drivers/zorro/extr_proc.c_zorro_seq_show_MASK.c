
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int er_Type; } ;
struct zorro_dev {TYPE_1__ rom; int id; } ;
struct seq_file {int dummy; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (struct seq_file*,char*,unsigned int,int ,unsigned long,unsigned long,int ) ;
 struct zorro_dev* VAR_0 ;
 scalar_t__ FUNC_1 (struct zorro_dev*) ;
 scalar_t__ FUNC_2 (struct zorro_dev*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 unsigned int VAR_3 = *(loff_t *)VAR_2;
 struct zorro_dev *VAR_4 = &VAR_0[VAR_3];

 FUNC_0(VAR_1, "%02x\t%08x\t%08lx\t%08lx\t%02x\n", VAR_3, VAR_4->id,
     (unsigned long)FUNC_2(VAR_4),
     (unsigned long)FUNC_1(VAR_4),
     VAR_4->rom.er_Type);
 return 0;
}
