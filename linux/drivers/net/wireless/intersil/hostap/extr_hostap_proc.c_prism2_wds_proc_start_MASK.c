
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int file; } ;
typedef int loff_t ;
struct TYPE_3__ {int hostap_interfaces; int iface_lock; } ;
typedef TYPE_1__ local_info_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int ) ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_0, loff_t *VAR_1)
{
 local_info_t *VAR_2 = FUNC_0(FUNC_1(VAR_0->file));
 FUNC_2(&VAR_2->iface_lock);
 return FUNC_3(&VAR_2->hostap_interfaces, *VAR_1);
}
