
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct nls_table {int charset; } ;


 struct nls_table* FUNC_0 () ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct nls_table*) ;

__attribute__((used)) static void
FUNC_3(struct seq_file *VAR_0, struct nls_table *VAR_1)
{
 struct nls_table *VAR_2;


 VAR_2 = FUNC_0();
 if (VAR_2 != VAR_1)
  FUNC_1(VAR_0, ",iocharset=%s", VAR_1->charset);
 FUNC_2(VAR_2);
}
