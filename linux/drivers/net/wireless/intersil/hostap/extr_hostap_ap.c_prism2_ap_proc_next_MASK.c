
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int file; } ;
struct ap_data {int sta_list; } ;
typedef int loff_t ;


 struct ap_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*,int *,int *) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct ap_data *VAR_3 = FUNC_0(FUNC_1(VAR_0->file));
 return FUNC_2(VAR_1, &VAR_3->sta_list, VAR_2);
}
