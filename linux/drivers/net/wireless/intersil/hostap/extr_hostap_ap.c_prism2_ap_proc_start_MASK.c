
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int file; } ;
struct ap_data {int sta_list; int sta_table_lock; } ;
typedef int loff_t ;


 struct ap_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct ap_data *VAR_2 = FUNC_0(FUNC_1(VAR_0->file));
 FUNC_3(&VAR_2->sta_table_lock);
 return FUNC_2(&VAR_2->sta_list, *VAR_1);
}
