
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {int min_ver; int maj_ver; int chip; int full; } ;
struct kim_data_s {TYPE_1__ version; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct kim_data_s *VAR_2 = (struct kim_data_s *)VAR_0->private;
 FUNC_0(VAR_0, "%04X %d.%d.%d\n", VAR_2->version.full,
   VAR_2->version.chip, VAR_2->version.maj_ver,
   VAR_2->version.min_ver);
 return 0;
}
