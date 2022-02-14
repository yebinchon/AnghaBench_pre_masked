
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {char** private; } ;


 int FUNC_0 (struct seq_file*,char*,char const*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 const char **VAR_2 = VAR_0->private;

 if (*VAR_2)
  FUNC_0(VAR_0, "%s\n", *VAR_2);

 return 0;
}
