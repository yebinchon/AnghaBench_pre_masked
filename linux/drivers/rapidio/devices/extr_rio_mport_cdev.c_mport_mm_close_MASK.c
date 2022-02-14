
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct rio_mport_mapping* vm_private_data; } ;
struct rio_mport_mapping {TYPE_1__* md; int ref; int phys_addr; } ;
struct TYPE_2__ {int buf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int *) ;

__attribute__((used)) static void FUNC_4(struct vm_area_struct *VAR_2)
{
 struct rio_mport_mapping *VAR_3 = VAR_2->vm_private_data;

 FUNC_3(VAR_0, "%pad", &VAR_3->phys_addr);
 FUNC_1(&VAR_3->md->buf_mutex);
 FUNC_0(&VAR_3->ref, VAR_1);
 FUNC_2(&VAR_3->md->buf_mutex);
}
