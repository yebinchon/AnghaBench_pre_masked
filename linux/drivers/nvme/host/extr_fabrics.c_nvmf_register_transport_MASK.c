
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmf_transport_ops {int entry; int create_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct nvmf_transport_ops *VAR_3)
{
 if (!VAR_3->create_ctrl)
  return -VAR_0;

 FUNC_0(&VAR_2);
 FUNC_1(&VAR_3->entry, &VAR_1);
 FUNC_2(&VAR_2);

 return 0;
}
