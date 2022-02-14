
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;
struct kim_data_s {int core_data; } ;


 int FUNC_0 (int ,struct seq_file*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct kim_data_s *VAR_2 = (struct kim_data_s *)VAR_0->private;
 FUNC_0(VAR_2->core_data, VAR_0);
 return 0;
}
