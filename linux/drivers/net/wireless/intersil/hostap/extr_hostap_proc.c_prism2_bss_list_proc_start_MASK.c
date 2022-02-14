
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int file; } ;
typedef int loff_t ;
struct TYPE_3__ {int bss_list; int lock; } ;
typedef TYPE_1__ local_info_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_0, loff_t *VAR_1)
{
 local_info_t *VAR_2 = FUNC_0(FUNC_1(VAR_0->file));
 FUNC_3(&VAR_2->lock);
 return FUNC_2(&VAR_2->bss_list, *VAR_1);
}
