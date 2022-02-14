
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int file; } ;
struct TYPE_2__ {int lock; } ;
struct ap_data {TYPE_1__ mac_restrictions; } ;


 struct ap_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct ap_data *VAR_2 = FUNC_0(FUNC_1(VAR_0->file));
 FUNC_2(&VAR_2->mac_restrictions.lock);
}
