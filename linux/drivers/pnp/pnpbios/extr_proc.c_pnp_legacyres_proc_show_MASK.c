
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (struct seq_file*,void*,int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_3, void *VAR_4)
{
 void *VAR_5;

 VAR_5 = FUNC_1(65536, VAR_2);
 if (!VAR_5)
  return -VAR_1;
 if (FUNC_2(VAR_5)) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }

 FUNC_3(VAR_3, VAR_5, 65536);
 FUNC_0(VAR_5);
 return 0;
}
