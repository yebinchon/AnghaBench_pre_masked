
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {struct slgt_info* next_device; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,struct slgt_info*) ;
 int FUNC_1 (struct seq_file*,char*) ;
 struct slgt_info* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct slgt_info *VAR_3;

 FUNC_1(VAR_1, "synclink_gt driver\n");

 VAR_3 = VAR_0;
 while( VAR_3 ) {
  FUNC_0(VAR_1, VAR_3);
  VAR_3 = VAR_3->next_device;
 }
 return 0;
}
