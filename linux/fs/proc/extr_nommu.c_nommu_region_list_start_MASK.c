
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef void rb_node ;
typedef int loff_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_2, loff_t *VAR_3)
{
 struct rb_node *VAR_4;
 loff_t VAR_5 = *VAR_3;

 FUNC_0(&VAR_0);

 for (VAR_4 = FUNC_1(&VAR_1); VAR_4; VAR_4 = FUNC_2(VAR_4))
  if (VAR_5-- == 0)
   return VAR_4;
 return ((void*)0);
}
