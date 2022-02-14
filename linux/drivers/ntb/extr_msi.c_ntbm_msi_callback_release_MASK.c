
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_msi_devres {TYPE_1__* entry; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * write_msi_msg_data; int * write_msi_msg; } ;



__attribute__((used)) static void FUNC_0(struct device *VAR_0, void *VAR_1)
{
 struct ntb_msi_devres *VAR_2 = VAR_1;

 VAR_2->entry->write_msi_msg = ((void*)0);
 VAR_2->entry->write_msi_msg_data = ((void*)0);
}
